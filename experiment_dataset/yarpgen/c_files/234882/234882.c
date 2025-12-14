/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = (~43164);
                    var_13 *= (min(var_9, (min((~var_5), (((!(arr_3 [i_1]))))))));
                }
            }
        }
    }
    var_14 = (max(var_14, (~-var_5)));
    #pragma endscop
}
