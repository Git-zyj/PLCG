/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 9223372036854775797;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = var_6;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_15 -= (min(((16384 ? -16384 : -7090756878227400997)), var_7));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((!(((((var_3 ? var_3 : var_5))) && var_1)))))));
                                var_17 = (min(((58720256 ? 3739553642408429805 : 14545929526600714489)), ((2239332602909175540 ? 14545929526600714473 : 30292))));
                                var_18 += ((((min(-16, var_1))) ? var_11 : (var_12 && -2239332602909175548)));
                            }
                        }
                    }
                    var_19 = (!57516);
                }
                var_20 = -2239332602909175560;
            }
        }
    }
    var_21 = (~(((2239332602909175534 || 65003) * ((var_5 ? 21 : -2239332602909175541)))));
    #pragma endscop
}
