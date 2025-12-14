/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_10, (max((var_3 < 2657034287), var_9)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = ((((arr_2 [i_0 + 2]) ? (min(2657034287, var_5)) : (arr_3 [i_0 - 2] [i_0]))));
                arr_5 [i_0] [8] [i_1] = 1637933007;
                var_13 = (min(var_13, -38844));
            }
        }
    }
    var_14 = (max(1, 38861));
    #pragma endscop
}
