/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] &= ((((((arr_2 [i_0] [i_0]) ? (var_5 * var_8) : (((var_11 + (arr_4 [i_0] [i_0] [10]))))))) ? ((((arr_4 [i_0] [0] [i_0]) >= var_3))) : (var_1 - var_3)));
                arr_7 [i_1] = ((((min(-var_8, (min(var_12, var_7))))) && var_0));
                arr_8 [i_1] [i_1] = (((((arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]) ? var_8 : (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1]))) * (min((min(var_0, var_1)), (var_6 % 4382877011167736663)))));
                arr_9 [i_1] [i_1 - 1] = ((var_7 % (((-(arr_3 [i_1 + 1]))))));
            }
        }
    }
    var_13 = (min(var_13, (((~var_1) ? (((min(var_12, var_0)) | (max(var_0, var_10)))) : var_6))));
    var_14 = var_8;
    #pragma endscop
}
