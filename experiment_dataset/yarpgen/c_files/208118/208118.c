/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_8));
    var_20 = (max(1, 113));
    var_21 = (((((1 ? (~-1) : (~1)))) ? ((((!var_18) >= ((min(var_6, var_6)))))) : (var_8 % var_10)));
    var_22 = 6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_23 = ((min(((max(var_10, var_3))), var_14)));
                var_24 = (min(((var_6 % ((var_12 ? 1 : var_13)))), (((32767 >= 45214) ? 65535 : (46040 % 20322)))));
            }
        }
    }
    #pragma endscop
}
