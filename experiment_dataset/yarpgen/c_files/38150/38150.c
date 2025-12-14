/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (min(((((((((arr_4 [16]) <= 0)))) >= ((0 ? var_1 : var_2))))), ((-1 & (arr_3 [i_1 - 1])))));
                var_18 += ((-(min(-1153393376118308799, (arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
                arr_6 [i_0] = max((arr_2 [i_0]), (min((arr_3 [i_1]), ((2664733130 ? (arr_3 [i_1]) : 1)))));
            }
        }
    }
    var_19 = min(var_5, ((min(var_12, var_1))));
    var_20 = var_10;
    #pragma endscop
}
