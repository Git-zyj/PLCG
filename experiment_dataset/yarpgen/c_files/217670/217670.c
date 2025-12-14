/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_16 ? (!1848055778) : ((-(max(22, -339622344))))));
    var_19 += (max(57191095112885973, -14137));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_20 = (arr_11 [i_3 + 3] [i_3] [i_3] [i_0 + 2]);
                            arr_15 [i_3] [i_3] [i_2] [i_3] [i_1] [i_3] = (max((arr_14 [8] [i_1] [i_3] [i_3] [i_4] [i_3] [i_1]), ((var_4 ? (min((arr_2 [i_0 + 1] [i_0 + 1]), -4333495484117284076)) : (arr_1 [i_2])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_18 [9] [i_3] [i_3] [i_2] [i_3] [5] [i_0] = (240 ? (arr_7 [i_0 - 1] [i_1 + 1]) : 92);
                            var_21 *= (((arr_5 [i_0] [i_0]) || (arr_3 [i_5] [i_1] [i_1])));
                        }
                        var_22 -= 1048064;
                        arr_19 [i_0] [0] [i_3] [i_3] = ((((-var_7 ? ((-(arr_14 [13] [i_0] [i_3] [i_1] [i_1] [i_2] [i_3]))) : ((((arr_11 [i_3] [i_3] [i_3] [i_0]) == (arr_7 [i_1] [i_3])))))) * (((!(((~(arr_2 [i_0] [i_3])))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_25 [i_7] [i_2] [i_1] [i_7] = (((65525 + -444259046) * (arr_20 [i_1])));
                                var_23 = 5587492185730773501;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_16;
    #pragma endscop
}
