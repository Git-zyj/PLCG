/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 75));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(80, (((var_11 <= 75) ? ((-1410551817 ? 246 : (arr_0 [i_0] [i_0]))) : (!1)))));
                arr_6 [i_0] [12] = -2024803501;
            }
        }
    }
    var_14 = -87;
    var_15 = var_2;
    #pragma endscop
}
