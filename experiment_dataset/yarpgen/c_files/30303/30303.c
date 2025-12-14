/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((((((~((0 ? 0 : (arr_5 [i_0] [i_1 - 1] [i_1 - 1])))))) || (arr_1 [i_1 - 1]))))));
                var_11 = (((max((arr_4 [3] [12] [3]), ((((arr_1 [i_0]) == 1))))) ^ 1));
                var_12 = (min((min(1, ((-100 ? var_6 : 9223372036854775807)))), (min((min(-6589836245871320589, -9223372036854775807)), 9223372036854775806))));
            }
        }
    }
    var_13 = (~(max((11 & var_4), (var_4 | var_8))));
    var_14 = ((~(var_4 % 3)));
    var_15 = ((var_7 >= (((max(9223372036854775807, var_7)) / ((min(var_1, var_3)))))));
    var_16 = ((52285 ? 0 : (1 + 9223372036854775794)));
    #pragma endscop
}
