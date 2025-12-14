/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (max(var_19, -1));
                var_20 = ((((var_1 ? (arr_0 [i_0] [16]) : (arr_0 [i_1] [i_0])))) ? 1 : ((~(arr_0 [i_0] [i_1]))));
            }
        }
    }
    var_21 = (((max(((127 ? -8 : -127)), (var_12 <= var_7))) & var_10));
    var_22 = (max(32750, -32750));
    #pragma endscop
}
