/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = 7677652549623110268;
                                arr_13 [i_2] [i_4] [i_3] [16] [i_4] [i_4] [i_0] = ((1737374111470113181 ? (((((-1737374111470113181 ? var_16 : 1737374111470113181))))) : ((var_14 ? var_14 : (max(26180, 1737374111470113187))))));
                            }
                        }
                    }
                }
                var_18 = var_16;
            }
        }
    }
    var_19 = (max(var_19, (((var_11 ? ((-1737374111470113154 ? var_2 : 0)) : ((-1737374111470113207 ? (((var_15 ? var_13 : var_9))) : var_14)))))));
    var_20 = 1737374111470113179;
    #pragma endscop
}
