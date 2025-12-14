/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (var_6 ? (((max(24, (max(-25228, var_1)))))) : var_1);
    var_16 = var_5;
    var_17 = ((((min(((var_6 ? var_10 : 38689)), var_9))) ? -3221995627550239620 : ((var_2 ? var_5 : (var_6 / var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (min(((min((arr_0 [i_1 - 1] [i_1 - 1]), -1))), 26));
                arr_5 [i_1] = (min((arr_0 [i_1 - 1] [i_1 - 1]), var_2));
                arr_6 [i_1] [i_1] = (max(var_8, (arr_1 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] [i_2] = var_13;
                arr_14 [i_2] = (arr_8 [i_2] [19]);
            }
        }
    }
    #pragma endscop
}
