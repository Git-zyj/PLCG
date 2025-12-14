/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = (min((~var_4), (~var_13)));
                    var_22 *= (min(-2329, ((163 ? var_16 : var_9))));
                }
            }
        }
    }
    #pragma endscop
}
