/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((33521664 / 1077516118) / var_13))) ? ((((!var_15) ? var_3 : var_13))) : 5473325100214417790));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 -= (max((((arr_1 [i_0 + 2] [i_0 + 2]) ? (arr_1 [i_0 - 1] [i_0 + 2]) : -5473325100214417790)), ((max(1077516116, (arr_1 [i_0 - 1] [i_0 + 2]))))));
                var_22 = (max(var_22, (((11708406130894315465 ? (((arr_5 [i_0]) ? (((arr_2 [19]) ? 1 : 5473325100214417783)) : 6)) : -5473325100214417790)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [13] [i_3] = ((!(arr_7 [6] [i_3 + 2])));
                            arr_15 [i_3] = ((~(arr_2 [i_0 + 1])));
                            var_23 = (min(var_23, -32757));
                            arr_16 [i_0] [i_0 + 2] [i_0] [i_0] = 266837926;
                        }
                    }
                }
            }
        }
    }
    var_24 = ((266837935 ? ((-var_2 / (max(488350649, var_7)))) : (-2147483647 - 1)));
    #pragma endscop
}
