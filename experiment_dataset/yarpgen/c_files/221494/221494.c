/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 -= ((((!((((arr_1 [i_2]) ? var_8 : 27249))))) ? ((var_1 ? ((45124 >> (45129 - 45110))) : 45124)) : ((min((var_6 || -1726634323739027167), (arr_6 [i_3 + 1] [i_3 - 1]))))));
                                var_21 = (~((min((arr_9 [i_0] [i_1]), (arr_4 [i_0] [i_4])))));
                            }
                        }
                    }
                    var_22 ^= (((!1) ? ((~(max(262136, 27270)))) : -32596));
                }
            }
        }
    }
    var_23 |= var_8;
    var_24 = ((var_1 ? (min((max(var_11, var_6)), (((var_2 ? var_4 : 608833181575967472))))) : var_6));
    #pragma endscop
}
