/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((101 / 63) ? ((8277590092041551698 ? 10169153981667999897 : 8277590092041551698)) : var_6))));
    var_21 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_22 = ((((14288331085689987515 || 7225) ? ((18446744073709551615 ? 1 : 8277590092041551689)) : ((10169153981667999927 ? 72 : 10169153981667999918)))) * (min(5901621303118290073, 11650673375065471667)));
                    var_23 = (((min(755221346, 48474))) >= (10169153981667999922 != 3706073818));
                }
            }
        }
    }
    #pragma endscop
}
