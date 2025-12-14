/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= -var_9;
    var_12 = ((var_5 ? (((0 | (0 || var_10)))) : ((var_7 ? (var_2 * var_6) : (min(4294967295, 7040804336888749431))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 |= (arr_5 [7] [7]);
                var_14 ^= (~var_0);
                arr_7 [i_0] [i_0] [i_0] = ((-(max(((max(var_0, (arr_6 [i_0] [i_1])))), var_5))));
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
