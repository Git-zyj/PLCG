/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_13 = -107;
        var_14 ^= (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((-(arr_0 [i_0 - 3] [i_0 + 3])));
        var_15 = (arr_0 [1] [12]);
        arr_3 [i_0] &= 53725;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 ^= ((-(arr_4 [i_1] [9])));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = (arr_10 [i_1] [10]);
            var_17 ^= 139;
            arr_12 [4] &= (~634561200);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_15 [i_1] = ((-(91 ^ 330631129580958792)));
            var_18 = arr_5 [i_1] [i_3];
        }
        var_19 ^= (arr_7 [i_1]);
    }
    var_20 &= -1;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_27 [i_5] = (((arr_21 [i_5 + 1] [i_5] [i_5 - 1]) - (arr_21 [i_5 - 1] [i_4] [12])));
                    var_21 = (min(var_21, 0));
                }
                arr_28 [i_5] = -107;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            {
                arr_33 [i_7] [i_7] [i_8] = (arr_7 [i_8 + 1]);
                var_22 ^= (arr_10 [i_7 + 1] [i_8 - 1]);
                arr_34 [i_7] [i_7] = 127;
            }
        }
    }
    #pragma endscop
}
