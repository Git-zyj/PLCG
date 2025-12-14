/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_1;
    var_14 = (max(var_14, -28510));
    var_15 = ((max(-6948030965311153200, var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = ((((((((1587124598 ? 1689384820 : var_7))) ? (min(118, 1689384811)) : -65535))) ? ((var_8 ? 1 : var_5)) : (((((53683 ? var_10 : var_9)))))));
                                var_17 = (max(var_17, (((-6948030965311153224 && (((59 ? -3243304995069913339 : 1))))))));
                            }
                        }
                    }
                    var_18 = ((((((((var_0 ? 65535 : 644577951))) ? var_7 : ((min(51464, 1)))))) || (((1 ? 3650389345 : (-765989510 * 644577950))))));
                }
            }
        }
    }
    #pragma endscop
}
