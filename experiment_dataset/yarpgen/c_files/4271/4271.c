/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(var_8, ((min(var_6, var_9)))))) - -219);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = var_11;
                var_20 = (min(var_20, (arr_1 [15])));
                arr_4 [i_0] [i_0] [11] = (max((arr_1 [i_0]), ((~(arr_2 [i_1 + 2] [i_1 - 1] [i_1 + 2])))));
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
