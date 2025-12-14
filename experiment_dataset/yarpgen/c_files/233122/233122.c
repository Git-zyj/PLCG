/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 23337;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((-((-(min(var_12, 3713))))));
                arr_5 [i_0] [i_1] = (max(-var_5, (~-1)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_17 += (min((max(15812385627458689473, (arr_9 [i_2] [i_2]))), (arr_1 [i_2])));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_19 [i_3] [6] [i_3] [i_3] [6] [i_5] [1] = -2;
                            var_18 = ((+(((((var_10 ? (arr_2 [i_5]) : var_5))) ? 1 : var_4))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_19 = (max(var_19, var_3));
                            var_20 = 233;
                            var_21 = (min(var_21, var_8));
                            var_22 = (min(var_22, (((!((((arr_7 [i_2]) ^ 0))))))));
                            arr_22 [i_2] [i_3] [i_3] [i_5] [i_3] = (min((arr_2 [i_5]), (arr_1 [i_3])));
                        }
                        var_23 = ((0 & (max((var_2 << 1), ((11802154187542336146 << (-1 + 30)))))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_24 = (max(var_24, (((((((~-1) ? (max((arr_8 [i_3] [i_8]), var_9)) : (arr_16 [i_2] [i_2] [i_3] [i_4] [i_8] [i_8])))) ? (-886416555 - var_3) : ((var_12 ? 3040046323 : (min(1077989578, -1)))))))));
                        arr_25 [i_3] = ((~((630182776537511260 + ((((arr_7 [i_8]) ? (arr_8 [i_4] [i_8]) : var_3)))))));
                        arr_26 [i_2] [i_3] [i_4] [i_8] = ((~(1 == var_7)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
