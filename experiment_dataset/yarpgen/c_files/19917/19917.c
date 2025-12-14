/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((var_4 ? var_7 : var_17))), ((min(var_0, var_17)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = ((~((min(var_1, var_8)))));
                    arr_12 [i_0] [i_1] [i_2 + 2] = (max(13, (((arr_4 [i_0]) ^ 1))));
                    var_20 += (min((arr_4 [i_0]), ((109 ? (((!(-127 - 1)))) : ((min(-27880, 27852)))))));
                }
            }
        }
    }
    var_21 = (min(((var_14 ^ (~var_4))), (((!-5173418365373467139) ? var_14 : var_10))));
    #pragma endscop
}
