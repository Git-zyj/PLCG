/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = ((((-18077 ? ((var_18 ? var_5 : 8931370107710734274)) : 4658551703748433196)) >> (((arr_3 [i_0]) + 28679))));
                    var_20 = ((!((((arr_2 [i_0] [i_2]) ^ 17596944543206054267)))));
                    var_21 = ((((((arr_1 [i_1] [i_2]) | (arr_1 [1] [1])))) ? var_5 : (arr_4 [i_1] [1] [23])));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_22 = (max(((min((arr_5 [i_1] [i_0] [i_1]), (arr_9 [3] [i_3] [i_2] [13] [10])))), 81));
                        arr_10 [i_3] [i_1] [i_2] [i_1] [i_0] = (var_0 / 42350);
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = (arr_5 [i_0] [i_0] [16]);
    }
    var_23 = (min(var_23, var_1));
    #pragma endscop
}
