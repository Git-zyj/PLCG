/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = 65530;
                var_20 = (var_3 >> (((arr_4 [i_0]) - 134)));
                var_21 = (max(var_21, (((!((((arr_0 [i_0] [i_1]) ? var_8 : (arr_2 [i_0])))))))));
            }
        }
    }
    var_22 = var_11;
    var_23 = var_4;
    var_24 = (((min(var_16, (21 != var_8))) >> (var_8 - 4268584101)));
    var_25 = (((min((var_3 > var_10), ((var_8 ? var_14 : 4294967275)))) >> (((var_13 > (!82))))));
    #pragma endscop
}
