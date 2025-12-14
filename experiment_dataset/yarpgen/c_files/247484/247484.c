/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((22556 / -4806700799117880738) ^ (~-38)))) ? 7466549690891365788 : (((((var_16 | var_7) != var_13))))));
    var_20 = var_0;
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = (max(var_22, ((max(((+(((arr_0 [i_0]) - (arr_2 [i_0]))))), (((arr_1 [i_0]) ? var_14 : var_12)))))));
                var_23 = ((((arr_1 [i_0]) ? 65535 : 28831)));
            }
        }
    }
    #pragma endscop
}
