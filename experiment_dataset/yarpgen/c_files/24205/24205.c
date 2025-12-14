/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-1 ? var_15 : (var_4 / var_18))) + ((((min(34359738368, 17450172193920602144)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (((arr_2 [i_0 - 2] [i_1]) > (arr_0 [14])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 &= (min((((arr_4 [i_2 + 1] [i_2 + 1] [i_3 + 2]) / (arr_4 [i_2 + 1] [15] [i_3 + 1]))), (-32767 - 1)));
                                var_23 = (((((((arr_4 [9] [9] [i_4]) || (arr_10 [i_0] [i_0] [i_0] [14] [1]))) || ((var_6 && (arr_2 [i_0] [3]))))) || (((((((arr_1 [i_0]) % var_8))) ? (((arr_5 [i_3 + 1] [0]) ? (arr_10 [6] [i_1] [i_0] [i_0] [i_1]) : (arr_5 [9] [10]))) : (arr_8 [i_0] [i_2 - 2] [i_3 + 1]))))));
                                var_24 = (arr_4 [i_0] [i_3] [i_4]);
                                var_25 = ((arr_10 [i_0] [21] [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : ((((arr_3 [i_3] [i_3 + 2]) >= ((((arr_3 [i_2] [i_1]) ? (arr_11 [i_0] [i_0] [i_0] [i_3]) : var_14)))))));
                            }
                        }
                    }
                    var_26 = (-32767 - 1);
                }
            }
        }
    }
    #pragma endscop
}
