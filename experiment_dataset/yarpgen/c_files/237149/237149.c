/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 ^= max(((max((var_1 * var_1), var_2))), (((((var_7 * (arr_2 [i_0] [i_0] [i_0])))) ? (var_7 / 2026146974) : (arr_2 [i_0] [i_1] [i_1 - 1]))));
                var_12 = ((((max((arr_0 [i_1 - 1] [i_1 - 1]), (arr_3 [4] [i_1] [i_1 - 1])))) ? (((max(var_0, var_9)) | (((var_3 ? var_5 : var_3))))) : (4294967295 / -1212947991439967053)));
            }
        }
    }
    var_13 = (~1);
    #pragma endscop
}
