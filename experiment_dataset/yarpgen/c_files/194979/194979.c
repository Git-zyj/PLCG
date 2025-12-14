/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] = ((((min(7, (119 + 349929497743140947)))) ? var_0 : 17844571960231102961));
                                var_17 = (((min(125, 23289))));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [1] [4] = ((((max((arr_2 [i_0]), (arr_0 [i_0])))) ? (((arr_9 [9] [i_0] [1]) ? var_8 : (arr_9 [1] [i_0] [i_2]))) : (((var_2 ? (arr_13 [i_2] [i_2] [4] [i_2] [i_0]) : (arr_1 [i_0] [9]))))));
                                arr_16 [i_1] [i_0] = var_5;
                            }
                        }
                    }
                    var_18 = (arr_12 [i_0 + 1] [10] [i_0] [i_0 - 1] [i_0]);
                    var_19 = (arr_1 [i_0] [i_2]);
                    var_20 = (((((!(((-349929497743140948 ? var_4 : 396803190)))))) <= (arr_6 [i_0] [i_0 - 1] [i_0] [i_0])));
                }
            }
        }
    }
    var_21 += (~var_10);
    var_22 += var_5;
    #pragma endscop
}
