/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_13 |= (((((-(arr_1 [i_1] [i_0])) * -183))));
                var_14 = (min(var_14, (((!((max(var_8, (arr_0 [12])))))))));
            }
        }
    }
    var_15 = (max(var_15, (~-13)));
    var_16 = var_7;
    var_17 = (~var_1);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_2] [i_3] = (arr_10 [i_2]);
                    var_18 = (max(81, 13));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_19 = ((((867829706 >> (1143234664 - 1143234652))) != ((((var_2 == (arr_5 [i_2] [i_2])))))));
                                arr_20 [i_2] [i_5] [i_2] = ((+(min((84 != -1143234652), var_5))));
                                arr_21 [i_6] [i_5] [12] [i_5] [i_3] [i_6] = ((((-(arr_15 [i_5]))) * ((min(var_0, (((!(arr_19 [i_2] [i_2] [i_5] [i_2] [i_2])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_20 |= (!41844);
                                var_21 += (((((arr_17 [i_8] [i_8 - 2] [i_8 + 4] [i_8 + 4] [i_8 + 4]) % (arr_17 [i_8] [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8]))) != ((((arr_17 [i_8] [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8]) != (arr_17 [i_8] [i_8 + 2] [i_8 - 2] [i_8 + 2] [i_8]))))));
                                var_22 = (min(var_22, var_3));
                                var_23 = (60 || 183);
                                var_24 = ((((max(102, -40))) <= (~1143234673)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
