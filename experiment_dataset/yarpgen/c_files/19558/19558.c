/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_13 = var_7;
                        arr_10 [i_1] = ((~(arr_8 [i_0] [i_1 + 1] [i_3])));
                        arr_11 [2] [i_3] [i_0] [0] [i_2] [i_1 + 1] &= -8847105536835338577;
                    }

                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        var_14 = ((!(((arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [5]) == (min((arr_2 [i_4] [i_2]), var_12))))));
                        var_15 = -268435455;
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = min((min(((~(arr_16 [i_0] [i_0] [7] [i_2] [i_5]))), (arr_9 [i_0] [i_1] [i_2] [i_2] [6]))), ((~(min(var_5, 70009652)))));
                        var_16 = var_2;
                        arr_19 [6] [i_5] |= (arr_12 [i_5] [10] [i_1] [8] [i_0] [8]);
                    }
                    arr_20 [i_1] [i_2] = (min(((((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_8 [2] [i_1] [i_1 + 1])))) ? 91 : ((var_2 ? 1 : 14316)))), var_4));
                    arr_21 [i_1] = ((268435455 ? ((30014 ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]) : (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2]))) : ((~(arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                    arr_22 [i_1] = -112;
                }
            }
        }
    }
    var_17 = (!var_9);
    #pragma endscop
}
