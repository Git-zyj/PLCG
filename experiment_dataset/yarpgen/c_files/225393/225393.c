/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max(((8972965856843903586 >> (18446744073709551615 - 18446744073709551575))), 9473778216865648010))) ? ((((min(8972965856843903586, var_10))) ? (max(var_6, var_9)) : var_7)) : (((var_10 + 9473778216865648057) ? (((var_2 ? 96 : var_11))) : ((var_0 ? var_13 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0] = 210;
                arr_6 [i_0] [i_1 - 3] [i_1] = (((min((arr_0 [i_0] [i_0]), var_10)) < ((((var_4 >= ((var_3 ? var_2 : var_7))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    var_15 = (arr_11 [i_4 + 3]);
                    var_16 = (((((40 ? 9473778216865648028 : 76))) ? ((var_6 ? (arr_7 [i_2 + 3]) : (arr_7 [i_2 + 3]))) : 194));
                }
            }
        }
    }
    #pragma endscop
}
