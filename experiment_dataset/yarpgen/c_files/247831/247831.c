/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (((!(((arr_7 [i_0]) && var_12)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (((-3753987255667669924 || 1299262163) ? (1299262163 & 1299262183) : (8 == 7620045147161641228)));
                                var_16 += (min(-var_3, (arr_8 [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, ((((((min(7620045147161641228, 125)))) ? ((22844 ? var_2 : (var_2 / var_1))) : -4335)))));
    #pragma endscop
}
