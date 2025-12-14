/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (arr_7 [i_0] [i_0] [i_2])));
                    var_21 = (min(var_21, (arr_3 [i_0 - 1] [i_1])));
                    var_22 ^= (min((arr_5 [i_0] [1] [i_0]), (!var_5)));
                    var_23 -= (max((arr_5 [i_2] [i_2 - 3] [i_0 + 2]), (arr_8 [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    var_24 *= ((var_16 - (max(var_11, -2104362629))));
    #pragma endscop
}
