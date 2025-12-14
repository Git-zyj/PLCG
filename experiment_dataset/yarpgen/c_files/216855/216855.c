/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (((arr_5 [i_1]) ? (((72057593501057024 ^ var_10) - ((((2772576855610305014 != (arr_0 [i_1]))))))) : ((((arr_1 [i_0]) ? (max((arr_1 [i_0]), 96)) : (arr_5 [i_1]))))));
                var_17 = 4229779589128479350;
                arr_7 [i_1] = ((!(arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = (((((arr_4 [i_2 - 1] [i_1] [i_3 + 3]) | (arr_13 [i_2 + 1] [i_2 + 1] [i_1] [i_0])))) ? (((((~(arr_0 [i_3])))) ? ((-(arr_4 [i_0] [i_1] [2]))) : (((max(224, var_1)))))) : (((arr_5 [i_1]) ? (((-2772576855610305027 + 9223372036854775807) << (((arr_9 [i_3] [i_2] [i_1]) - 130)))) : (arr_5 [i_1]))));

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = (((arr_15 [i_3] [i_1] [i_1]) ? (arr_15 [i_0] [i_1] [i_0]) : ((2772576855610305028 >> (((arr_15 [i_0] [i_1] [i_2 + 1]) - 8803196274267507338))))));
                                var_19 = ((!((((arr_8 [i_3 - 1] [i_1] [8] [i_3 + 1]) >> (((arr_14 [9] [i_3 - 3] [9]) - 48045)))))));
                                arr_17 [i_1] [i_2 - 2] [1] [i_2 + 1] [i_2] [i_2] = ((-(((!((((arr_12 [i_0] [i_1] [i_0] [3] [i_0] [i_4]) ? (arr_14 [0] [8] [8]) : var_2))))))));
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_1] [i_1] = ((((((arr_11 [i_0] [i_0] [i_1]) << ((((~(arr_4 [i_3] [i_2] [i_1]))) + 9169884885949954473))))) ? (((((((arr_10 [i_4] [i_1] [i_0]) ? -2772576855610305009 : var_1)) >= var_12)))) : (min(-3101618691102605096, -2511534073699616485))));
                            }
                            var_20 = ((min((arr_4 [3] [i_0] [i_0]), (~805306368))));
                        }
                    }
                }
            }
        }
    }
    var_21 = 7752942971979165224;
    #pragma endscop
}
