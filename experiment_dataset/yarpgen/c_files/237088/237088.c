/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((-1 ? var_7 : 24)) - 25));
    var_13 ^= var_11;
    var_14 = (min(var_14, var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = ((((((min(-5341317644106205040, (arr_5 [i_0])))) ? (0 * 26374) : 0)) * (var_0 * var_8)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = ((611475780 >> (255 / var_9)));
                                var_17 = (arr_8 [i_1] [i_1]);
                            }
                        }
                    }
                }
                var_18 = (((min((-2147483647 - 1), (-40 || 176))) * (((((!var_0) || 0))))));
            }
        }
    }
    #pragma endscop
}
