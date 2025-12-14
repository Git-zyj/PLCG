/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 *= (((arr_4 [i_2] [9]) <= (~40822)));
                    arr_8 [i_0] [i_0] = (!-1306704383);
                    arr_9 [9] [i_0] [i_0] = ((+(((((arr_0 [i_2 - 1]) + 9223372036854775807)) << (!var_15)))));
                    var_21 = (min((((arr_5 [i_0]) * (arr_3 [5]))), (((-(-32767 - 1))))));
                }
            }
        }
    }
    var_22 = (((--17686) < var_15));
    #pragma endscop
}
