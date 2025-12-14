/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_15));
                    var_21 = (((min(0, ((var_6 ? 12000930422282273686 : var_14))))) ? (arr_8 [i_0] [i_0] [i_2]) : (((~var_2) - (((arr_2 [i_0] [i_2]) ? var_13 : 12000930422282273711)))));
                    var_22 = (min(var_22, var_1));
                }
            }
        }
    }
    var_23 = 0;
    #pragma endscop
}
