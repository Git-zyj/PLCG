/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_10 / (min(1838778115, 1838778134)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_3] [12] [i_1 + 3] [i_1] = (((((arr_6 [i_0 + 1] [1] [1] [1]) ? 21214 : (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))) >= (!-4112)));
                                arr_16 [i_0 + 1] [i_1 + 1] [i_1] [i_3] [i_4] = var_8;
                                var_14 = ((((!(arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) ? ((var_5 ? ((var_9 ? (arr_5 [i_1 + 1]) : 2419627517628933281)) : (13301050707635838913 > 2419627517628933269))) : (arr_1 [i_0 + 1])));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1 + 4] [i_1] = (min(((-((var_10 ? 2456189181 : var_6)))), -1005583851));
                }
            }
        }
    }
    var_15 = 9223372036854775807;
    var_16 = 2456189174;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_24 [i_7] [i_6] [i_5 + 1] = (((((1005583861 ? ((var_4 ? var_3 : var_12)) : ((var_7 ? (arr_4 [i_5]) : var_5))))) ? (arr_19 [i_5 - 1]) : var_11));
                    arr_25 [i_5] [i_5] [i_5] = var_10;
                }
            }
        }
    }
    #pragma endscop
}
