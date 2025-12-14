/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!1);
    var_13 = (max(var_13, (((-(min(((13325 ? 9223372036854775807 : 10707)), (340759033 * var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = ((248 ? -340759036 : -1334477702));
                arr_4 [i_1] = (arr_0 [i_0]);
                var_15 = (max((arr_2 [i_0] [i_0 + 1] [6]), ((101 ? -2147483643 : 64977))));
                var_16 = (~-2147483643);
            }
        }
    }
    var_17 = ((((((var_9 / 1334477701) ? var_4 : var_0))) ? var_10 : var_1));
    var_18 = (340759054 / 242);
    #pragma endscop
}
