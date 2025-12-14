/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = var_3;
                arr_5 [i_1] [i_0] = ((24063 ? -24063 : -24065));
                arr_6 [i_0] = var_0;
            }
        }
    }
    var_16 = var_1;
    var_17 = (((!(var_1 / var_1))));
    var_18 = (var_5 ? (((((max(var_14, var_6))) || (var_4 >= var_3)))) : ((((439889016 ? 0 : 15908945341026608101)))));
    #pragma endscop
}
