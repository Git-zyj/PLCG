/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 ? var_3 : (var_7 == var_6)));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [8] = ((!(((5274154526153360464 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1]))))));
        var_18 = (((((max(var_15, -2953634272361019782)) * var_14)) * (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_13 [i_1] = (((arr_11 [i_1] [i_1] [i_2] [i_3]) || ((min((arr_11 [i_1] [i_2] [i_3] [i_3]), (arr_11 [i_1] [i_2] [i_3] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_19 = 0;
                                arr_18 [i_1] [i_3] [i_4] [i_5] = var_7;
                            }
                        }
                    }
                    var_20 = (min((var_0 * var_2), var_11));
                    var_21 = 0;
                }
            }
        }
        arr_19 [i_1] = (((((arr_11 [i_1] [1] [i_1] [i_1]) > (((arr_7 [i_1] [i_1] [i_1]) ? 28459 : (arr_16 [i_1] [i_1]))))) ? (arr_14 [9] [9] [i_1]) : (((((arr_15 [5] [7] [15]) == (arr_5 [i_1])))))));
    }
    #pragma endscop
}
