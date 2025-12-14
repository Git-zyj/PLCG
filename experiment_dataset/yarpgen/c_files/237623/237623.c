/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [9] [i_0] = (arr_0 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_2] [i_2] [14] |= (((((((max((arr_2 [i_0] [i_1]), (arr_0 [i_0] [i_3])))) ? ((min(1, 3))) : (((arr_2 [i_3 + 2] [i_0]) / (arr_6 [i_0] [i_1] [i_0] [i_0])))))) ? (((39113 ? -25 : 224))) : -5));
                            arr_10 [10] [i_0] = ((((((arr_8 [i_0] [3] [i_0] [i_3 + 1]) ? 248 : 128))) ? (((358065154 ? 1 : 4294967295))) : (((max((((1 || (arr_6 [i_2] [i_2] [11] [13])))), (arr_7 [13] [i_1] [i_0])))))));
                            var_16 -= (((((arr_7 [i_2 - 2] [i_2 - 2] [i_3 - 1]) ? ((var_4 ? 1 : 1)) : 39101)) << (39229 - 39214)));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_17 = (max(var_17, (arr_12 [8] [8] [i_2])));
                                var_18 = (arr_2 [i_2 + 1] [i_3 - 1]);
                                arr_13 [i_0] [10] [i_0] = (-39 > 7);
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                var_19 = (((((-(((arr_3 [8] [8]) ? 1 : 1))))) ? (arr_2 [i_0] [i_0]) : (((arr_8 [6] [i_2 - 2] [i_2] [i_3 - 1]) ? (min(12, 4040656428)) : (((117 ? var_3 : -83)))))));
                                arr_17 [i_3] [i_2] [i_3] [i_3] [2] |= ((~((((min((arr_5 [i_0] [i_2] [i_2] [i_5]), (arr_6 [i_2] [0] [i_2] [i_2])))) ? ((8492417886641553464 ? 13240102097486057829 : var_5)) : (((arr_0 [i_5] [i_3]) | (arr_8 [i_0] [i_1] [i_2 + 1] [i_0])))))));
                            }
                        }
                    }
                }
                var_20 = 1;
                arr_18 [i_0] [i_0] = max((arr_0 [i_0] [i_0]), 20712);
            }
        }
    }
    var_21 = ((var_11 ? ((((min(31, 9))) ? -var_7 : ((1570647844 ? var_6 : -8753)))) : ((var_10 | ((1 ? 211 : var_6))))));
    #pragma endscop
}
