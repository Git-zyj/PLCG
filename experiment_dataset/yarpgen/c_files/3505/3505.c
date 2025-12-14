/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(-1, 836974341);
    var_16 = (((var_3 == 1642360688) ? var_13 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = -32755;
                arr_7 [i_0] [i_1 + 1] [3] = (arr_4 [i_0] [i_1 + 1]);
                arr_8 [i_0] = (!var_14);
                var_17 = ((arr_1 [1]) ^ ((-(max(3457992955, 836974340)))));
            }
        }
    }
    var_18 = ((((-((1 ? var_12 : var_12)))) >= ((var_3 << (var_10 - 1579184331)))));
    #pragma endscop
}
