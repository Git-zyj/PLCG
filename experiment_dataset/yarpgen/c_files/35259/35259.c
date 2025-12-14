/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (~-var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 -= (min(((((var_4 ? 9990928690882420367 : 116)))), (min(var_10, var_8))));
                    arr_10 [i_1] [i_0] = (!94);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 19;i_4 += 1)
        {
            {
                var_21 = 15728640;
                var_22 |= var_1;
            }
        }
    }
    var_23 = var_13;
    #pragma endscop
}
