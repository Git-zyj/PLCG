/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        var_14 = ((53288 ? (min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2]))) : var_9));
                        var_15 = var_11;
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        var_16 += var_6;
                        arr_14 [i_4] [i_4 - 3] [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_6 [i_0] [i_1]) : var_13));
                        arr_15 [i_0] [16] [i_1] [i_1] [i_0] = var_5;
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_18 [i_0] = 120;
                        var_17 ^= (min(var_0, ((((var_1 == (arr_5 [i_0]))) ? ((~(arr_10 [14] [i_1] [i_2] [6] [i_2]))) : (((arr_10 [i_2] [i_1] [i_2] [i_1] [i_0]) * var_12))))));
                        var_18 = (max(var_18, ((~(((arr_8 [i_0 - 1] [i_0 + 3] [i_0] [i_0] [i_0 + 3] [i_0 + 3]) | var_10))))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_19 *= -var_5;
                        var_20 ^= ((!(((386087885 ? var_6 : (arr_20 [i_0 + 2] [i_0 + 2]))))));
                    }
                    var_21 = (min(var_13, (!-66)));
                    arr_23 [i_2] [i_1] [i_0 + 2] [i_2] |= (arr_2 [i_0]);
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_22 ^= (+-12287783869846442181);
                    arr_26 [i_1] [i_1] [i_1] &= ((!(((arr_11 [i_7] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0]) <= 386087885))));
                    var_23 = (min((((((59814 ? var_5 : 5721))) ^ var_13)), -386087888));
                }
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    var_24 = var_1;

                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        var_25 = (-810017443 / 1652468551);
                        arr_32 [i_0] [i_0] [i_0] [6] = (~5381496036806618913);
                        arr_33 [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]);
                    }
                }
                var_26 ^= var_8;
                var_27 = ((+(min(((var_12 ? (arr_1 [i_0]) : var_3)), 2642498743))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    var_28 = 1;
                    var_29 ^= -var_8;
                    var_30 = -49;
                }
            }
        }
    }
    var_31 = (((-1 == var_4) >= (min((min(65535, 1264193548650243359)), (var_7 + 5735)))));
    #pragma endscop
}
