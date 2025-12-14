/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max(((var_5 ? (var_0 | var_0) : (var_8 - var_0))), (~var_0))))));
    var_19 = var_6;
    var_20 = (min(var_20, var_4));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (max(((((((~(arr_0 [i_0 + 1])))) || (arr_2 [i_0] [i_0])))), ((((((arr_1 [i_1 + 1]) | (arr_2 [i_0] [i_0])))) ? (arr_1 [i_0 - 1]) : (((arr_2 [15] [i_1]) & (arr_2 [i_1 + 1] [i_0])))))));
                var_22 = (((((max((arr_3 [i_1]), (arr_0 [i_0])))) ? (arr_2 [i_0 + 1] [i_1 - 2]) : (((arr_3 [i_0]) - (arr_0 [1]))))));
                arr_4 [i_1] [i_0] = ((((max((arr_3 [i_1]), (arr_1 [i_1]))) != (((arr_2 [i_1] [i_0]) ? (arr_3 [i_1]) : (arr_1 [i_0]))))));
                var_23 = (min(var_23, (((((((max((arr_0 [1]), (arr_0 [i_1]))))) & (((arr_2 [i_0] [i_1]) >> (((arr_3 [i_0]) - 643005424)))))) / (((((((((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_1]))))) != (((arr_2 [i_0] [i_1]) ? (arr_2 [19] [i_1]) : (arr_3 [i_0])))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_24 += (arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_25 = (arr_13 [i_2] [i_3 + 1] [i_3] [i_3 + 3] [i_4]);
                                var_26 = arr_3 [i_4];
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_17;
    #pragma endscop
}
