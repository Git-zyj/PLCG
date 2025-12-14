/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((-127 - 1) / var_1));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] |= ((((max(524287, (arr_1 [i_0])))) && ((((arr_1 [i_0]) * (arr_2 [i_0]))))));
        var_11 = (max(var_11, -1796989878));

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_12 = (((((~(arr_5 [i_0] [i_1 - 2])))) ? ((((arr_5 [i_0] [i_1 - 1]) && (arr_5 [i_0] [i_1 - 2])))) : (arr_5 [i_0] [i_1 + 2])));
            arr_7 [i_0] [9] = (((((((arr_6 [i_0]) < -496040919)))) && (arr_5 [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            arr_18 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4] = ((((((61102 / (arr_11 [i_0] [i_1] [i_2] [i_2]))) < ((max(1796122463, var_5))))) ? (((min((((4419 < (arr_15 [i_0] [i_3] [i_4] [i_3] [2])))), 115)))) : ((max(29931, 84)))));
                            arr_19 [i_3] [i_1] [i_1 - 2] [1] [i_1] = var_0;
                            arr_20 [i_4] [i_4] [i_3] [i_3] [i_0] [i_0] [i_0] = ((-((var_3 ? 7322799619563942458 : ((max(496040920, 3950245596)))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = (var_4 - 188);
                            var_13 = ((var_7 > (arr_5 [i_3 - 1] [i_1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_14 = (max(var_14, (((3 > var_1) > (var_7 > 344721703)))));
                            arr_24 [i_3] [i_3 - 1] [i_1] [i_3] = 65520;
                            var_15 ^= (!var_1);
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = 13;
                        }
                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            var_16 = (max(var_16, (((((arr_13 [i_0] [10] [i_0]) < 3054993613830177088))))));
                            arr_28 [i_0] [i_1 - 2] [i_0] [i_2] [i_3] [i_1] = ((((((arr_8 [2]) ? 3054993613830177068 : 235))) ? var_8 : (arr_1 [1])));
                            var_17 -= ((var_5 ? (arr_23 [i_6 - 4] [i_6 - 4] [i_6 - 3] [i_6 - 4] [i_6 - 1]) : ((~(arr_27 [i_0] [i_3 + 3] [i_2] [i_3 - 1] [i_6] [i_2] [i_6])))));
                        }

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            arr_31 [i_3] [i_3] [i_2] [i_3] = (((var_1 - 61087) && var_6));
                            arr_32 [i_3] [i_1] [i_1] [i_1] [i_1] = var_2;
                        }
                    }
                }
            }
            var_18 = 122;
        }
    }
    var_19 = var_1;
    #pragma endscop
}
