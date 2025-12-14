/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = (-64 | -5622522807265861162);
    var_17 -= var_3;
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_19 = (147 != 48529);
                arr_6 [i_0] = (((var_12 % var_14) - (((((9782811173101133954 || 34) && (~var_5)))))));
                var_20 ^= (((var_10 <= var_3) < (-114 && 13267300832792195316)));
                arr_7 [i_0] [i_0] [i_1] = (min(var_11, (((var_3 <= (var_7 == var_8))))));
            }
        }
    }
    #pragma endscop
}
