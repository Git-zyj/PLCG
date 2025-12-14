/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((-((var_6 ? -8665811585873817054 : var_17))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_21 = (((var_2 ? var_19 : (min((arr_5 [i_0] [i_0] [1]), -1855942538084050064)))));
                    var_22 = (min(((~(var_16 | 0))), -1));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_23 = min(((max(var_6, -110))), (max(3133471034263416974, (arr_8 [i_0] [i_0] [i_1 - 3]))));
                                var_24 += (arr_5 [i_0] [i_1] [i_0]);
                                var_25 = (min(var_25, (max(((min(var_4, (arr_0 [i_0 + 1])))), (((arr_0 [i_0 - 1]) + (arr_0 [i_0 - 1])))))));
                            }
                        }
                    }
                    var_26 = (min(var_26, (max(-1, 239))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] = ((((((((arr_14 [1] [1] [i_2 + 1] [1] [i_6 + 1]) ? -2068 : (arr_12 [i_0] [i_5] [i_6])))) ? (-2068 && 250) : var_9)) << (1 > -3201706018544690458)));
                                var_27 = ((((((arr_5 [i_0 - 1] [i_1 - 1] [i_2 + 1]) && var_8))) >> (((arr_5 [i_0] [i_5] [i_5]) + 8221682646444078161))));
                                var_28 = (~var_1);
                                arr_19 [i_0 - 1] [i_1 + 1] [1] [4] [1] [i_0] = -531538355;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_6;
    #pragma endscop
}
