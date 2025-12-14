/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 582645192276334544;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = -2626;
                    arr_11 [i_1] = (min((55146 + 255), ((126 ? 10387 : 114))));
                }
            }
        }
    }
    var_21 = ((var_1 ? (var_3 <= -116) : ((108 ^ (10362 <= 582645192276334544)))));
    var_22 = ((var_1 - (4294967274 % 120)));
    #pragma endscop
}
