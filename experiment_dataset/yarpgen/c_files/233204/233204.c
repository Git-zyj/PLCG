/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((max(911018889, -23596)))));
                arr_7 [i_0] [i_1] = (max((arr_5 [i_0 - 1]), (((var_0 != (var_0 >= var_4))))));
                var_13 = (min(var_13, (~-23596)));
            }
        }
    }
    var_14 -= (min(1, (var_2 || var_7)));
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_15 += -23596;
                            arr_18 [2] [i_3] [2] [i_3] [22] [i_4 - 1] |= ((-(arr_14 [i_2 + 2] [i_3 - 1] [i_4 - 4] [20])));
                            var_16 = (~724);
                        }
                    }
                }
                var_17 = ((((((var_4 >= var_10) ? 2151481944 : 7))) ? (max(var_2, (arr_12 [i_2]))) : 1337201842));
            }
        }
    }
    var_18 = (max((var_0 >= var_2), 724));
    #pragma endscop
}
