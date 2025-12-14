/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(var_9, ((-((max(var_3, -21))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = var_15;
                    arr_9 [i_1] [i_1] [i_1] [i_0] = var_7;
                    var_17 = (((arr_7 [i_0] [i_0] [i_2]) ? ((1 ? (((255 ? var_10 : -237))) : (arr_4 [3] [i_2]))) : var_10));
                }
            }
        }
    }
    var_18 *= (var_7 - 28);
    #pragma endscop
}
