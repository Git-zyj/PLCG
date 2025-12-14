/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 -= (arr_2 [i_1]);
                var_14 *= max((((((9747 ? (arr_2 [i_0]) : -14980))) ? ((var_10 - (arr_3 [i_1]))) : var_8)), ((+(((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_3 [i_0]))))));
            }
        }
    }
    var_15 = (((((var_6 && ((max(var_2, var_8)))))) != var_10));
    var_16 = (min(var_16, ((min(((max(var_2, (var_10 > var_11)))), ((-4232 ? (9223372036854775807 + -95200577317642427) : var_0)))))));
    var_17 = var_0;
    var_18 = ((((!(16288090113724966816 <= 8825110467385762650))) ? ((var_4 << (((max(var_8, var_4)) - 4509888735644594864)))) : ((((max(16, 187))) ? ((var_5 ? -14651 : var_5)) : (((min(var_12, var_2))))))));
    #pragma endscop
}
