/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (var_8 & 1519438099067083827);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (min(19832415, ((5198790219817238263 ? 5198790219817238252 : 19832415))));
                    var_12 = (((arr_3 [i_0 + 1] [i_0 + 1]) ? 1383527745 : ((((((arr_1 [i_2]) ? (arr_8 [i_0 - 2] [1] [i_2] [i_2]) : 1665367711981718642)) < 871372553)))));
                }
            }
        }
    }
    #pragma endscop
}
