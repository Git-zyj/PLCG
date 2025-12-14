/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (min(((var_15 ? (arr_1 [i_4]) : (arr_1 [i_3]))), (((!(arr_1 [i_0]))))));
                                arr_14 [i_4] [i_4] = ((!((max((arr_8 [i_4] [i_4] [i_2 + 1]), (arr_6 [i_3] [i_3] [i_3] [i_3]))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] |= 1917077351;
                    var_16 = ((~((max((arr_5 [i_0] [i_2 + 1] [i_2 - 1]), var_3)))));
                }
            }
        }
    }
    var_17 = (var_1 >= var_0);
    var_18 = (max(var_18, var_7));
    var_19 = ((var_2 ? 2097151 : ((-69 ? var_13 : var_4))));
    var_20 = ((((4294967293 ? 1292020395 : 37)) < ((~(var_11 && 4062568353356137830)))));
    #pragma endscop
}
