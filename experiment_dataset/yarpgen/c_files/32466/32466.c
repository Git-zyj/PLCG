/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = ((!(arr_0 [i_0])));
        var_21 = 29119;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [2] &= ((var_1 ? ((max(((((arr_2 [i_1] [i_1]) == (arr_0 [i_1])))), (min((arr_4 [10]), -1))))) : 1));
        var_22 = 45740;
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((4063232 ? var_17 : 10));
        arr_9 [i_2] = (~3820818848);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                arr_14 [i_4] [i_3] [i_3] = -11;
                var_23 = ((4611686018427387903 ? 127 : (arr_12 [3])));
                var_24 = (((var_3 & var_14) ? (((arr_10 [i_3]) ? var_11 : (~var_7))) : (arr_12 [i_3])));
                var_25 = (min(var_25, ((min((((((max(var_0, var_14))) ? 0 : ((min(var_5, (arr_12 [i_3]))))))), (max((((arr_13 [i_4]) & 16)), (min(var_16, (arr_13 [i_3]))))))))));
            }
        }
    }
    #pragma endscop
}
