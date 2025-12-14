/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 &= (max(((var_17 - ((-26909 ? 19585 : 8431253007309762319)))), (((max(0, var_4))))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (arr_4 [i_0 - 1] [i_0 - 1] [19]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = ((((arr_5 [i_1] [19] [i_3 - 1] [i_3]) ? (arr_5 [i_1] [i_2] [i_3 - 4] [10]) : (arr_5 [i_3] [i_3] [i_3 - 1] [i_4]))));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] = max((((max((arr_1 [i_0] [i_0]), 6849144154411323628)) + (arr_8 [i_4 + 4] [i_4 + 3] [i_4] [13] [i_4] [i_4 + 4] [i_4]))), ((min((arr_9 [11] [i_3 - 2] [i_3 + 2] [i_4] [i_4 + 1] [i_4] [i_4 + 1]), (arr_9 [0] [i_3 - 3] [i_3 - 3] [18] [2] [i_4] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
        var_22 = (((((6849144154411323628 ? -var_17 : (max((arr_3 [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))))) ? 45950 : (((arr_0 [i_0 - 2]) ? (26905 && 6849144154411323628) : (min((arr_5 [1] [19] [i_0] [i_0]), (arr_3 [10] [i_0])))))));
        var_23 = (max(((!(arr_1 [8] [i_0]))), (arr_1 [1] [i_0])));
        arr_12 [i_0] [i_0] = (((arr_2 [i_0] [i_0 + 1] [i_0 - 4]) ? (max(-6377, (((arr_2 [i_0] [i_0] [i_0]) + (arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [5] [i_0]))))) : (~-17)));
        arr_13 [i_0] = ((((0 ? 369526417 : 254))) >= (((-1 + -244) ? (((-(arr_5 [i_0] [i_0] [i_0] [10])))) : ((-1 ? -21 : 6849144154411323631)))));
    }
    var_24 = var_17;
    #pragma endscop
}
