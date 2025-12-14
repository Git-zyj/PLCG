/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_13;
    var_15 -= (var_6 || var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((-((min((arr_4 [i_1]), (arr_0 [0] [i_1]))))));
                var_17 = (arr_5 [i_0] [i_1]);
                var_18 = (min(((var_1 + ((max(70, 24454))))), 65535));
                arr_6 [i_0] [i_0] |= 239;
                var_19 &= (((arr_0 [i_1] [i_1]) ? (arr_0 [i_0] [2]) : ((max((arr_4 [i_1]), var_4)))));
            }
        }
    }
    var_20 = (((!14716350769841683197) + (max((~var_2), (var_6 >= 239)))));
    #pragma endscop
}
