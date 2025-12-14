/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (arr_0 [4]);
                var_13 = var_9;
                var_14 += (max((arr_0 [i_0]), ((((((arr_1 [1]) ? var_5 : var_10))) ? var_8 : (arr_2 [i_0] [i_0])))));
                var_15 = (max(((min((arr_3 [i_1 - 1] [i_1]), ((var_4 ? 1 : var_4))))), ((-(min(var_2, 2147483647))))));
            }
        }
    }
    var_16 = (((max((var_2 * var_5), (((var_9 ? var_4 : var_9))))) * var_5));
    #pragma endscop
}
