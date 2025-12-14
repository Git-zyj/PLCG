/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_8 ^ var_10) ? var_9 : 150));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [i_1] [i_2] = (23902 ? (((arr_1 [i_0] [i_0]) % (((((arr_2 [i_1 + 2] [i_0]) && (arr_3 [i_0] [i_1] [i_2 - 1]))))))) : (((((((((arr_5 [i_2] [14] [i_2] [i_0]) >= var_11)))) >= -7011)))));
                    arr_7 [i_1] = var_7;
                }
            }
        }
    }
    var_14 = (min((((1629672268554452598 / var_12) | ((var_3 ? var_3 : var_7)))), (max((var_1 + var_10), var_2))));
    var_15 = ((23 ? var_4 : var_12));
    #pragma endscop
}
