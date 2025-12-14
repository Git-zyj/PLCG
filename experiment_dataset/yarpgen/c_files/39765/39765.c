/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 1288004071));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 += 6091746332403839134;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = 1;
                                var_20 = (max(var_20, var_7));
                                var_21 = (((((var_15 + var_5) || (max(1, 1)))) ? 1365813464 : ((((1 ? var_3 : 1)) / 1))));
                                arr_11 [i_4] [i_3] [i_2] [i_1] |= ((0 ? ((-((max(var_2, var_11))))) : ((((min(var_14, var_10))) ? 115 : ((29910 ? 1 : 1))))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [i_2] [i_0] = ((-29916 || ((((-12 || 1) ? 29915 : 12436)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, 0));
                                var_23 = 16005338259094182726;
                            }
                        }
                    }
                    var_24 = var_2;
                    arr_18 [i_0] [i_1] [i_2] [i_2] = var_7;
                }
                arr_19 [i_0] [i_0] [i_0] = ((((var_8 ? 1 : 1))) ? (var_5 != 29915) : (!-19));
                var_25 += (((max(1734779633894038269, 52))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_24 [2] = ((((min(5758067807458413314, var_7))) ? (((min(((min(169, 1))), -29940)))) : 0));
        var_26 = -1734779633894038283;
    }
    var_27 -= var_2;

    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_28 = (((min((!-40), var_3)) + 64));
        arr_29 [i_8] = (min((((((0 ? var_2 : -29903))) ? 29910 : (var_9 || var_9))), (1 != var_12)));
        var_29 = (((((((139 ? var_5 : 1))) || ((min(1734779633894038283, var_16))))) ? (((29907 & -4944) ? 0 : ((19439 ? var_3 : -29910)))) : (((~((0 ? 29915 : var_15)))))));
        var_30 = ((min(1, 1)) || var_1);
    }
    #pragma endscop
}
