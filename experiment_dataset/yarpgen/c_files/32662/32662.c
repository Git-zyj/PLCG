/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(-60, var_8));
    var_17 = min((max((max(56, var_8)), var_8)), var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min((1919477221 & var_15), (arr_3 [i_1])));
                var_18 = (max((max(((max(var_11, 30591))), 3970304975384998241)), (((-((-(arr_3 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
