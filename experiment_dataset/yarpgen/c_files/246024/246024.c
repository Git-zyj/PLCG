/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = (max((max(((var_7 ? var_8 : var_2)), (max(var_8, var_8)))), 12));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] = (min(0, (((((252 ? 24001 : -5899895846791220265)) << (-59 > 5899895846791220251))))));
                                var_15 = ((!(arr_13 [i_0] [1] [8] [i_0] [i_4] [i_0] [i_2])));
                            }
                        }
                    }
                    var_16 = ((((+(((arr_7 [i_0] [i_0]) ? 228 : 11021)))) << (arr_13 [i_0] [i_0 - 2] [i_1 - 4] [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 3])));
                }
            }
        }
    }
    #pragma endscop
}
