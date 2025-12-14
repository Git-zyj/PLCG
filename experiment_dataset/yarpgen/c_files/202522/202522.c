/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, -var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((-((((((arr_2 [i_0] [i_1] [20]) - var_6))) - (max(2633681481, var_10)))))))));
                var_14 = (min(var_14, 34231));
            }
        }
    }
    var_15 &= ((((-1 ? 31290 : 1950401720)) < (!var_8)));
    #pragma endscop
}
