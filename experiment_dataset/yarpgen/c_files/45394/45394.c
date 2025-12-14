/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((((~((60012 ? var_10 : 60012))))) ? (((52288 ? var_8 : var_11))) : var_7));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [0] [i_0] = (max((!-var_6), 59983));
        var_14 = (min(var_14, (((((262112 ? (arr_0 [i_0]) : ((min(1, var_6)))))) ? ((2107265678 ? -13233 : var_1)) : ((((arr_0 [i_0]) ? 32765 : (arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (min((arr_12 [1] [i_3] [1] [i_0] [14] [i_0]), (arr_7 [i_2 + 1] [i_2 + 1] [i_1 + 3] [i_0])));
                                var_16 = (max(var_16, var_7));
                                var_17 = (max(var_17, (((-(arr_10 [i_0] [i_1 + 3] [14] [14] [i_0] [i_3]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] = var_5;
                                var_18 = ((-((32512 ? var_11 : 7247109536825614674))));
                                arr_19 [i_6] [14] [i_5] [i_2 + 1] [i_2 + 1] [14] [1] = (max(((var_2 ? var_8 : var_11)), (min((arr_9 [i_1 - 1] [i_1 + 1]), var_5))));
                                var_19 = (max(var_19, (((((min(var_9, (arr_14 [i_0] [i_0] [i_0])))) ? (arr_6 [i_0] [i_0] [i_0] [15]) : (((!(arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [1])))))))));
                            }
                        }
                    }
                    arr_20 [1] [i_1] [i_0] [i_0] = 106;
                    arr_21 [i_0] = ((arr_3 [i_2 + 1] [11] [11]) ? var_7 : var_5);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_20 = ((+(((arr_14 [i_7] [i_7] [i_7]) ? 60038 : (arr_14 [i_7] [i_7] [i_7])))));
        var_21 ^= (arr_5 [i_7]);
    }
    #pragma endscop
}
