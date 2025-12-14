/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -215;
    var_11 = (((54 + 227) ? (((22 ? var_4 : 36))) : (!227)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_12 &= var_5;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, ((((((var_1 | (arr_5 [i_0] [i_1] [i_0] [i_1 + 2])))) || (((arr_3 [i_2]) || (arr_0 [i_0]))))))));
                            var_14 = (min(var_14, (~230)));
                            arr_9 [21] [5] [22] [0] [i_2] [4] = ((-((((arr_5 [i_0] [12] [i_1 + 1] [i_3 + 1]) >= var_6)))));
                        }
                    }
                }
                arr_10 [13] [i_0] [i_1] = ((!(arr_6 [16] [i_1] [i_0] [18])));

                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    var_15 = ((((((((230 << (227 - 207)))) ? ((var_3 ? 26 : (arr_7 [i_0] [i_4] [11]))) : (((arr_8 [i_0] [i_1] [1] [i_4 - 2]) ? 221 : 48))))) && ((max(((49 ? 238 : 233)), ((var_4 / (arr_5 [i_0] [16] [i_4 - 1] [21]))))))));
                    arr_13 [7] [i_0] [i_4] [i_4] = (((((arr_8 [i_0] [i_1 + 1] [i_0] [8]) - (arr_8 [i_0] [i_0] [i_1 + 2] [i_4])))) ? (((233 || (arr_8 [i_0] [i_0] [6] [i_1 + 1])))) : (((arr_3 [i_0]) ? (arr_8 [5] [i_1 + 2] [3] [15]) : (arr_3 [i_4 - 2]))));
                }
            }
        }
    }
    #pragma endscop
}
