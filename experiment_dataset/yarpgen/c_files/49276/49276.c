/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-9223372036854775807 - 1);
    var_13 = (min(((max(var_4, var_4))), (max(var_3, var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((min((((~var_0) ? ((-1 ? 9 : 172)) : ((((arr_3 [i_0] [i_0]) ? -59 : 1))))), ((((arr_6 [i_0]) < (arr_3 [i_0] [7])))))))));
                arr_7 [i_0] [i_0] [i_0] = -558319588375162597;
            }
        }
    }
    var_15 |= (max(-1200145046427701952, (max(var_4, (max(15, 1233149160896062606))))));
    var_16 = var_1;
    #pragma endscop
}
