/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((-((5247387774995403508 ? (arr_1 [i_1]) : var_10))))) && (((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_1]) != (arr_5 [i_4] [7] [i_2]))) || ((!(arr_6 [i_0] [i_1])))))));
                                var_12 = (((arr_11 [i_3 - 1] [15]) ? (-5247387774995403490 + 5247387774995403508) : (min((var_2 & var_6), (var_1 ^ var_9)))));
                            }
                        }
                    }
                    arr_16 [i_2] [i_2] [i_1] = (-32645 ? (((((max(var_3, var_4))) ? ((var_1 - (arr_5 [i_2] [i_1] [i_2]))) : var_1))) : (((arr_7 [i_1] [i_1] [i_0]) + var_0)));
                }
            }
        }
    }
    var_13 = (((var_9 + 9223372036854775807) << ((((((var_6 ? (min(var_0, var_5)) : -var_8)) + 25174)) - 30))));
    var_14 = var_9;
    #pragma endscop
}
