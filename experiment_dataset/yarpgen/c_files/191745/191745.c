/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (2972067770115758913 && 0);
    var_18 = (min(var_1, var_4));
    var_19 = var_7;
    var_20 |= (((min(var_10, var_3)) * ((((var_11 * var_0) ? var_0 : ((min(var_0, var_14))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = (!var_5);
                    var_21 = -151;
                }
            }
        }
    }
    #pragma endscop
}
