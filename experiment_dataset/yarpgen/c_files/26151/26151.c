/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = var_6;
    var_17 = ((-(max(((var_13 ? var_3 : var_10)), (!var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 3] [20] = ((((((arr_1 [i_0 - 1] [i_1]) ? ((((!(arr_2 [1] [i_0] [1]))))) : ((var_8 + (arr_0 [12])))))) ? var_4 : 1477595717));
                var_18 = (min(var_18, ((min((arr_1 [i_0 - 1] [i_0 - 3]), (arr_2 [i_0 + 2] [i_0 - 1] [i_0 - 2]))))));
            }
        }
    }
    #pragma endscop
}
