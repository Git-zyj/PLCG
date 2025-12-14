/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 208289680;
    var_17 = var_7;
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((43948 ? var_0 : (min((arr_1 [i_0 + 1] [i_2 + 1]), var_5)))))));
                    var_20 = 21588;
                }
            }
        }
    }
    #pragma endscop
}
