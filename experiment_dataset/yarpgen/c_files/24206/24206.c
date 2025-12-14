/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0 + 3] [i_1] = 0;
                var_10 = (max((var_2 > 1), (max((max(var_3, -15108)), (arr_0 [i_0])))));
                arr_6 [i_1] = ((((max((~48194), var_7))) ? ((-((0 ? var_5 : (arr_0 [i_0 + 2]))))) : (!-1941235108514159883)));
            }
        }
    }
    var_11 = var_6;
    #pragma endscop
}
