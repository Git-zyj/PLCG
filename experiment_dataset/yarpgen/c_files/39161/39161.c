/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (min((((((77 ? (arr_5 [i_0] [i_0] [i_0]) : var_16))) ? var_9 : 56)), (~var_7)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_19 = (((arr_4 [i_2] [i_1]) ? 0 : (min(77, (((arr_1 [i_0]) ? 0 : 237))))));
                    var_20 *= var_0;
                }
            }
        }
    }
    var_21 = ((!(((((max(var_15, var_4))) ? 16383 : ((var_10 ? 240 : var_10)))))));
    var_22 = (max((min(524280, var_10)), 179));
    #pragma endscop
}
