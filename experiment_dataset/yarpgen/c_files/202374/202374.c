/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 |= ((~((-(arr_0 [i_0] [i_0])))));
        var_16 = (min(var_16, (((((12 >= (arr_1 [i_0]))) ? (min((arr_0 [i_0] [i_0]), -4494889280885065835)) : (max(((min((arr_1 [i_0]), 235))), (max(5091152726377824265, var_11)))))))));
        var_17 = ((arr_0 [i_0] [i_0]) << (((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) - 10758929210981247073)));
        var_18 = (min(var_18, (arr_1 [i_0])));
        var_19 = var_12;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (max(var_20, (max((((arr_2 [i_1] [i_1]) << (((arr_2 [i_1] [i_1]) - 77)))), var_4))));
        var_21 ^= (-(97 == 1));

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_22 *= (arr_5 [i_1] [i_1]);
            arr_6 [i_1] [i_1] [i_2] = (((var_11 | 1) / ((max(97, 97)))));
            arr_7 [i_1] [i_2] = (arr_2 [i_2] [i_2 + 1]);
            var_23 = 11603425259262418533;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_11 [i_1] [i_3] = ((158 << (78 - 57)));
            var_24 = (((arr_9 [i_1] [i_1] [i_3]) ? (arr_9 [i_1] [i_1] [i_1]) : (arr_9 [i_1] [i_1] [i_1])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_25 = (min(var_25, (((!(var_13 == 80))))));
                            var_26 = var_11;
                            var_27 = (((arr_20 [i_5 - 2] [i_3] [i_4] [i_5] [i_6] [i_1]) ? (arr_20 [i_5 - 2] [i_1] [i_4] [i_5 - 2] [i_6] [i_1]) : 97));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            {
                var_28 += (!var_9);
                arr_25 [i_8 - 2] = (max((!var_4), (((arr_24 [i_7] [i_8 + 1] [i_8 - 2]) ? (arr_21 [i_8 - 2]) : 4786182953081562200))));
            }
        }
    }
    var_29 = var_0;
    #pragma endscop
}
