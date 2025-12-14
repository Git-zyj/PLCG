/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = min((-32767 - 1), (((var_6 && (arr_2 [i_0 + 2] [i_1 - 1])))));
                var_14 = 63;
                var_15 ^= (arr_1 [i_0 - 1]);
            }
        }
    }
    var_16 = var_10;
    var_17 = var_9;
    var_18 = (min(var_18, var_1));
    #pragma endscop
}
