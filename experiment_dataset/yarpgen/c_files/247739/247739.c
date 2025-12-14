/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_0 > 1);
    var_15 = 17179869183;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (arr_2 [i_0]);
                arr_5 [i_0] = (var_5 | var_1);
            }
        }
    }
    var_17 = (min(var_17, (((((((var_12 ? var_12 : var_0)))) == (max((17179869186 ^ 17179869177), (min((-32767 - 1), 18446744056529682441)))))))));
    #pragma endscop
}
