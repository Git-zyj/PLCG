/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((max(1, (max(var_6, 18446744073709551615))))) || (0 == 1789265324354207706)));
    var_11 = (((var_0 - var_4) >> (var_8 - 11982)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = var_6;
                var_13 = (arr_2 [i_0]);
                var_14 = (min(var_14, (((+(((((1 >> (((((-9223372036854775807 - 1) - -9223372036854775806)) + 28))))) ? (max((-9223372036854775807 - 1), 0)) : (var_8 && 8957937522726020738))))))));
            }
        }
    }
    var_15 = (max(1, var_2));
    #pragma endscop
}
