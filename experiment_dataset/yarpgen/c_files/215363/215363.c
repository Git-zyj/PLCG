/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = -189;
                var_18 = (arr_1 [i_0] [i_0]);
                var_19 |= ((9223372036854775799 ? ((((((6130701644196339513 % (arr_3 [4] [i_1] [6])))) ? (arr_0 [i_0]) : (((3738087116 || (arr_1 [9] [i_1]))))))) : ((((((arr_4 [1] [9]) ? 216 : (arr_0 [i_1])))) ? (((arr_0 [0]) / (arr_4 [1] [4]))) : 14106608495597295879))));
            }
        }
    }
    var_20 |= var_16;
    var_21 = var_11;
    var_22 |= var_6;
    #pragma endscop
}
