/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (var_3 + var_10);
    var_15 = ((!(((~((var_12 ? 41 : -116)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = ((((min((!1), (!-2287105069064964759)))) * ((((arr_6 [4] [i_1 - 1] [i_0 + 1]) < (arr_6 [i_0 - 1] [1] [i_0 - 1]))))));
                                arr_12 [i_2] [i_3 - 1] [i_2] [i_0] [i_0] [i_2] = -324057678757357381;
                                var_17 = (min(var_17, ((min((((min((-9223372036854775807 - 1), 1)))), (~var_3))))));
                            }
                        }
                    }
                }
                var_18 += ((((((((arr_10 [6] [2] [i_1 - 1] [0]) && 324057678757357381))))) != 324057678757357381));
                arr_13 [i_1 + 1] |= (arr_7 [6] [i_1 + 1] [8]);
                var_19 = -1;
                var_20 = ((-2342679826907148699 ? var_1 : (((arr_1 [i_1 - 1] [i_1]) ? (arr_1 [i_1 - 1] [i_1]) : (arr_1 [i_1 - 1] [i_1])))));
            }
        }
    }
    var_21 = 324057678757357373;
    #pragma endscop
}
