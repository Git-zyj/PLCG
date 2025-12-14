/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_0, ((-1 ? ((-3 ? 3 : 11)) : ((var_8 ? var_3 : -4008777728296852840))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [11] [i_1] = ((!(((-(max(20432, -1683518257)))))));
                arr_7 [i_1] = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] = (max(-1900728824, ((max((arr_5 [i_1]), (arr_5 [i_1]))))));
                            arr_13 [i_1] [i_1] = (((max(((max(var_2, var_1))), (max(var_9, (arr_2 [i_1])))))) ? ((((arr_0 [i_0]) <= (max(744947493, (arr_10 [i_0] [16] [i_0] [i_1])))))) : (arr_9 [i_1] [i_1]));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
