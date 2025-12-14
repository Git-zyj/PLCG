/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_3));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 *= (max((min((arr_7 [i_0] [i_1] [i_2]), (arr_7 [i_0] [i_1] [i_2]))), var_12));
                    var_15 = (max(var_15, (((var_3 ? (((-4116328811967060695 || var_9) ? (-30 && 4) : (arr_0 [i_0 - 3] [i_0 - 3]))) : (!var_12))))));
                    var_16 = (~-127);
                }
            }
        }
    }
    #pragma endscop
}
