/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = -10499847331056407230;
                                var_17 = -1386553183;
                            }
                        }
                    }
                    var_18 = (((~-78) ? (~-var_12) : ((((arr_13 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1]) ? var_10 : (arr_13 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2]))))));
                }
            }
        }
    }
    var_19 &= (((((~(var_1 ^ var_13)))) ? ((min((~var_4), (var_4 ^ var_7)))) : (((((var_2 ? 12887989995689408277 : 14))) ? var_5 : var_15))));
    var_20 = (min(((-((3 ? var_9 : var_14)))), var_4));
    #pragma endscop
}
