/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 *= ((!((((var_10 ? var_5 : 2016925968))))));
                    var_20 -= var_9;
                    arr_6 [i_0] [i_1] [i_2] [i_1] = (--185850942);
                }
            }
        }
    }
    #pragma endscop
}
