/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max((var_3 / var_7), var_18)) - (~-31245)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = ((var_17 ? ((max((arr_0 [i_2] [i_0 - 3]), (arr_1 [i_1] [i_0 - 3])))) : (min((~var_4), ((1 + (arr_3 [11] [11])))))));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = (((arr_7 [i_0 - 1] [i_0] [i_0]) ? ((32757 / (((~(arr_6 [i_0] [i_1] [i_0] [i_0])))))) : (((58 >> (((((arr_5 [i_2] [i_1] [i_0] [i_0 - 3]) & (arr_6 [i_2] [i_1] [i_0 - 2] [i_0 - 2]))) - 5523822157537513463)))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_1] [5] [0] = ((1 ^ (255 * var_19)));
                        var_22 = (max(var_22, ((min(((var_18 ? 2650971651 : (arr_6 [i_1] [i_0 + 1] [i_0] [i_0]))), (arr_9 [8] [i_0]))))));
                        var_23 = (min(((!(arr_10 [i_0 + 1] [i_0 + 1]))), (((arr_1 [i_0 - 1] [i_0 - 1]) >= (arr_1 [i_0 + 1] [i_0 - 1])))));
                        var_24 *= ((!(((arr_4 [i_0 - 3] [i_0 - 1]) >= (arr_7 [i_0 - 2] [i_0] [i_0 + 1])))));
                        var_25 = (max(var_13, (max((((var_5 && (arr_5 [i_0 - 2] [i_1] [i_2] [i_3])))), (arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 3])))));
                    }
                    var_26 += 76;
                }
            }
        }
    }
    #pragma endscop
}
