/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_6 / var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [1] [i_3] [i_3] [1] [i_0] = (arr_6 [1] [1] [i_2 + 1]);
                        var_11 -= (arr_10 [i_1] [i_2] [i_2 - 1] [i_1]);
                        var_12 = (min(var_12, (!4393)));
                        var_13 = var_6;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_19 [i_6] [i_5] [i_4] [i_5] [16] = ((-(arr_16 [i_6] [i_5] [i_5] [i_4])));
                        arr_20 [i_0] [i_5] [i_0] [i_5] [i_0] = (((var_2 ? (arr_1 [i_0]) : var_9)));
                        var_14 = var_6;
                        var_15 = var_2;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
    {
        arr_23 [i_7 + 1] [i_7 + 1] = (((arr_21 [i_7 - 1] [21]) ? (var_5 ^ 29533) : var_3));
        arr_24 [i_7 + 1] = ((149 ? 9667 : 210));
    }
    for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_16 = (arr_27 [i_8] [i_9]);
            var_17 = (min(var_17, var_3));
            var_18 = ((-28 ? 27942 : 9656));
            var_19 -= ((~(arr_26 [i_9] [i_9])));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    {
                        var_20 = (min(var_20, (((((min(((min((arr_34 [i_11]), (arr_37 [16] [i_11] [16] [i_12 + 2])))), ((-(arr_31 [i_11] [i_10] [i_10])))))) ? 1 : (max(106, 183411992)))))));
                        var_21 ^= (((max((arr_31 [i_11] [16] [i_8]), 19637)) - 127));
                    }
                }
            }
            arr_39 [10] [10] &= ((((min(78, 3174374480))) ? (arr_28 [i_8] [i_8 - 1] [i_10]) : var_6));
            arr_40 [i_8] [i_8] = arr_35 [i_8] [i_8];
            var_22 = (!1);
        }
        var_23 = (~2);
        var_24 *= (~3410883900);
    }
    var_25 ^= (~var_4);
    var_26 = 15037023872899596773;
    var_27 = (~var_8);
    #pragma endscop
}
