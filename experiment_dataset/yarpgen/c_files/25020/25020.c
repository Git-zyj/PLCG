/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_8 ? 4 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (9223372036854775807 ? 0 : 1);
                var_18 = (max((((1 ? (!var_10) : 133693440))), var_7));
            }
        }
    }
    var_19 = (var_6 ? (((min((var_7 < var_6), (1 <= var_8))))) : var_16);
    var_20 = 65535;
    #pragma endscop
}
