/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 224;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_19 |= (min((65535 || var_16), ((var_11 ? (((arr_0 [i_1] [i_0 - 2]) - var_11)) : 32754))));
                var_20 = (((min(32754, 58499))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_21 = -1492690518;
                    var_22 = -32754;
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] [i_3] = ((((min(((max((arr_4 [i_0]), (arr_7 [i_1])))), 32754))) > var_6));
                    var_23 = ((((((4503599627354112 ? 17340 : -73)))) ? ((4503599627354088 ? (-12371 || var_1) : 4503599627354063)) : 48196));
                }
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    var_24 = (min((((18446744073709551599 ? (arr_8 [1] [i_1 + 1] [i_1]) : 32754))), (arr_6 [i_1] [4] [i_4 + 1])));
                    var_25 = (arr_12 [i_1] [15] [i_1 - 4] [i_1]);
                    var_26 *= (((~36910) ? ((-(arr_7 [4]))) : (max(var_8, (58499 | var_1)))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_16 [i_5] [i_5] &= (((var_11 ? (arr_8 [i_0] [i_1 + 3] [i_5]) : 28625)));
                    var_27 = var_15;
                    arr_17 [i_0] [i_1] [i_1] [i_5] = ((1 ^ (max((var_0 / var_7), var_9))));
                    arr_18 [i_0 - 2] [i_1] [i_0 + 2] [i_0] = (~(((18442240474082197504 == ((-10 ? 18446744073709551599 : -1))))));
                }
                var_28 = 18442240474082197528;
            }
        }
    }
    var_29 = (max(var_29, var_4));
    #pragma endscop
}
