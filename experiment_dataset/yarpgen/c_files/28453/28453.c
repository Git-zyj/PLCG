/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (min((((var_2 + var_2) ? (!var_2) : ((min(var_2, var_12))))), (max(var_5, var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (!((max(var_4, (min(var_4, var_9))))));
                    var_15 = var_11;
                    arr_7 [6] [i_1] [i_2] &= (((((max(var_11, var_10))) ? ((min(var_11, var_2))) : -var_3)));
                }
            }
        }
    }
    #pragma endscop
}
