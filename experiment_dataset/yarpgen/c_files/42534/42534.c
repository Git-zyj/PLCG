/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (-(max((((arr_1 [i_0]) ? (arr_0 [i_0] [19]) : (arr_3 [i_0]))), ((max((arr_4 [i_1] [i_0]), 65535))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_11 = (min(-var_7, ((max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
                            var_12 = (((max(((max(1462570391, var_9))), ((var_6 ? 1462570390 : 32767)))) + ((max(var_8, (arr_0 [i_0 + 2] [i_1 - 1]))))));
                            var_13 *= ((1073741816 ? var_8 : (max(var_2, (arr_11 [i_0] [i_0 + 2] [20] [i_0 + 2] [i_1 - 2] [i_1])))));
                            var_14 = (((((~(arr_0 [i_2] [i_3])))) ? var_9 : (arr_0 [1] [i_2])));
                            arr_12 [i_0] [i_0] [i_1 + 3] [i_0] [i_0] [i_3] = (((!(((arr_1 [i_0]) > var_3)))));
                        }
                    }
                }
                var_15 = (max(var_15, (((max((!1), (min((arr_6 [i_0] [i_1] [i_0] [i_0]), (arr_1 [i_1])))))))));
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
