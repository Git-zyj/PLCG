/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((((max(var_0, 1991011825))) ? var_6 : (var_6 + var_8)))), (((var_5 % -33162267307093536) << (1108477840 - 1108477835)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = ((~((((arr_0 [i_0]) > (arr_2 [i_0] [i_0] [i_1]))))));
                var_13 = (arr_1 [i_0]);
                var_14 = ((((max((arr_3 [i_0]), var_1))) && var_1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 += (min((max(var_5, var_8)), (!-0)));
                            var_16 *= (arr_2 [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
