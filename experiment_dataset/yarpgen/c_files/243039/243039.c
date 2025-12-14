/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (((((var_12 > var_8) / (6991283317727832461 ^ var_7))) / (((var_1 ^ (1619722049 < var_3))))));
                arr_5 [i_0] [i_1] = (((var_15 > 2675245247) ? (1619722049 && var_5) : (2675245247 || 2675245246)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = ((((((!(1619722049 < var_1))))) > (((var_6 % var_0) ? var_12 : (((1619722049 ? var_1 : 2675245233)))))));
                                var_19 = ((!((((var_3 == var_3) - (!var_1))))));
                                arr_16 [i_1] [i_1] [i_2] [i_3] [i_4 - 1] = (((2675245247 < 2675245268) <= var_14));
                                var_20 = ((((2675245246 ? 2675245246 : var_13)) + (var_14 | 1619722048)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
