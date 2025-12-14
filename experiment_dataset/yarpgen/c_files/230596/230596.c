/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_9 != var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_17 = (((((arr_3 [i_0 + 3]) ? var_7 : (arr_3 [i_0 + 1])))) ? (((arr_3 [i_0]) ? (((max(var_5, 55266)))) : (arr_9 [i_3] [i_2] [i_0] [i_0] [i_0 + 1] [i_0]))) : var_10);
                            var_18 = (arr_10 [i_0] [i_0 - 1] [i_0]);
                            arr_11 [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]);
                            var_19 = (((arr_10 [i_2] [i_1] [7]) ? (arr_6 [i_0 + 2] [8]) : ((((!var_0) ? (((var_1 == (arr_6 [i_2] [i_0])))) : (((arr_3 [1]) / var_1)))))));
                            var_20 = (max(((var_3 ? (arr_9 [i_0] [i_3] [i_0] [i_3] [8] [i_2]) : (arr_9 [i_0] [3] [i_0] [i_3] [i_0 + 3] [3]))), (((arr_9 [i_0 + 3] [i_3] [i_0] [i_3] [i_2] [1]) ? (arr_9 [6] [i_1] [i_0] [i_1] [i_2] [i_1]) : (arr_9 [i_0] [i_1] [i_0] [i_3] [i_0 + 3] [i_0])))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = (min((max((arr_7 [i_0] [i_0]), 10269)), ((((arr_4 [i_0 - 1] [i_0 + 3] [i_0 - 1]) ? var_13 : (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_21 = 638882854579607361;
                            var_22 = ((((max(((var_0 ? var_13 : 64469)), ((((arr_13 [i_0]) != (arr_16 [i_0] [i_4] [i_1] [i_0]))))))) ? (((arr_16 [i_0] [i_1] [i_4] [i_0]) ? (arr_7 [i_0] [i_0]) : (arr_8 [i_0]))) : (((var_2 || 55275) ? ((((arr_9 [9] [i_5] [i_0] [i_0] [i_1] [i_0]) ? var_12 : (arr_16 [i_0] [i_4] [i_1] [i_0])))) : (((arr_8 [i_0]) ? var_0 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_5])))))));
                        }
                    }
                }
                var_23 = 1374601895;
                var_24 ^= -1816010189754191033;
            }
        }
    }
    #pragma endscop
}
