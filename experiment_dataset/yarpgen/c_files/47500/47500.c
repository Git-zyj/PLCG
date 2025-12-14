/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!((max((((-75 ? var_3 : var_9))), (max(65, -4487945394553939071))))));
    var_21 = (~60);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [3] = ((-1917185509 <= (max(1, var_18))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 = var_17;
                            arr_13 [i_2] = ((+(((~var_6) & (~44)))));
                            var_23 &= (max(((((-(arr_8 [i_1]))) | ((max((arr_9 [i_0] [i_1 - 1] [i_3]), var_14))))), (arr_10 [i_1 - 1] [i_1 - 1] [i_3] [i_1 + 1] [i_1 - 1] [i_1 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_24 += var_17;
    #pragma endscop
}
