/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [10] |= var_14;
                arr_6 [i_0] [i_1 - 2] [10] = ((2985 ? ((((((arr_1 [i_1 - 1] [1]) ? (arr_4 [i_0] [i_0] [10]) : (arr_0 [14] [14])))) ? 51450 : ((4670571290303314955 & (arr_4 [i_0] [i_1] [10]))))) : ((((-268435456 <= (arr_3 [i_0 + 2] [i_1 + 1])))))));
            }
        }
    }
    var_20 = var_17;
    var_21 = ((651509522253065236 ? var_12 : 43769));
    var_22 = var_2;
    #pragma endscop
}
