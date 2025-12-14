/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((min(var_6, -2112300971))), (max(((min(var_5, var_9))), (min(var_2, var_8))))));
    var_11 += ((((min(var_7, var_1))) >> (var_2 - 5139827332322218607)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (arr_3 [8] [i_1] [i_1])));
                var_13 = 2112300953;
                var_14 ^= ((((((var_1 ? 28 : -2112300971))) ? (((arr_0 [i_0]) << var_4)) : (!var_1))));
            }
        }
    }
    var_15 = ((var_1 - (((min(25, -1542966004))))));
    #pragma endscop
}
