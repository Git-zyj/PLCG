/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_16 ? ((((max(7518703683036427044, var_7))) ? (min(var_3, var_6)) : 7518703683036427056)) : (((min(var_9, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = 10928040390673124560;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 |= ((((10928040390673124559 ? var_7 : (arr_8 [i_0] [i_1]))) <= (arr_12 [5] [i_2] [1])));
                                arr_16 [i_0] [i_3 - 2] [i_2] [i_1] [i_0] = (max((max((arr_0 [i_0] [i_0]), 7518703683036427044)), ((((arr_5 [i_2 + 1] [i_0 - 3] [i_0]) < var_10)))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_0] = (min((min(1, 10928040390673124572)), ((min(var_14, var_0)))));
                            }
                        }
                    }
                }
                arr_18 [i_0] = ((((min((max(var_2, (arr_1 [i_0] [i_1]))), 203))) ? (min(((min((arr_14 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_1] [i_1] [7]), 175))), ((var_2 ? -1 : 0)))) : ((((0 ? 29073 : (arr_12 [i_1] [i_0 - 3] [i_0])))))));
                arr_19 [i_0] [i_0 - 3] [i_0] = ((max(10928040390673124560, ((min(var_16, var_12))))));
            }
        }
    }
    var_19 = (!var_9);
    #pragma endscop
}
