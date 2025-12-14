/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = 31149970;
                arr_5 [i_1 - 2] [i_0 - 4] = (min((~var_0), -31149970));
            }
        }
    }
    var_13 &= ((var_7 ? (((((var_8 ? var_6 : 50584))) ? var_4 : (var_10 || -1130353820))) : ((((max(var_7, 137))) ? ((26 ? var_9 : -31149970)) : ((15 ? var_10 : var_5))))));
    #pragma endscop
}
