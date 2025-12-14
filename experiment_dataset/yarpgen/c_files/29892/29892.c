/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (((((((var_7 ^ var_9) > (((max(0, 1))))))) > (arr_3 [i_1 - 3] [i_1 - 1] [i_1 - 4]))))));
                arr_5 [i_1 + 2] = (((arr_2 [i_0]) ? ((((arr_0 [i_0]) ? ((min((arr_1 [i_1 + 2]), (arr_3 [i_0] [i_1 - 1] [i_1 - 1])))) : var_3))) : ((var_9 + (arr_4 [i_1 + 2] [i_1 - 4])))));
                var_11 += ((((((arr_4 [i_1 + 1] [i_1 - 2]) > (arr_4 [i_1 - 1] [i_1 - 2])))) >> ((max((arr_4 [i_0] [i_0]), (arr_4 [i_1 - 3] [i_1 - 1]))))));
                arr_6 [i_0] [i_1 + 1] [i_1 + 1] = var_0;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_12 = (arr_9 [i_2] [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [i_5 + 1] [i_4] [i_3] [i_2] = ((+(min((((arr_14 [i_2] [i_4] [i_5 - 1] [i_6]) - var_3)), (0 != 255)))));
                                var_13 = (((max((((255 * (arr_21 [i_6] [i_6] [i_6] [i_6])))), (arr_12 [i_2] [i_4] [i_5 - 1] [i_6]))) * var_3));
                                arr_24 [i_6] [i_5 + 3] [i_4] [i_3] [i_3] [i_2] [i_2] = (((min((arr_19 [i_2] [i_4]), (arr_21 [i_2] [i_5 - 1] [i_3] [i_5 - 1]))) | (((max(1, (arr_10 [i_2])))))));
                                var_14 = ((((max((arr_10 [i_4]), (arr_18 [i_2] [i_3] [i_3] [i_5 + 1] [i_6])))) || (15 || 3)));
                            }
                        }
                    }
                    var_15 = (min(var_15, (((var_1 % (((((max(var_7, var_4))) ? (arr_11 [i_2] [i_3] [i_4]) : (arr_18 [i_2] [i_3] [i_3] [i_3] [i_4])))))))));
                    var_16 = (min((arr_19 [i_2] [i_3]), var_1));
                }
            }
        }
    }
    var_17 = ((var_4 + ((var_9 ? var_9 : ((var_3 ? var_0 : var_7))))));
    var_18 = ((((((var_9 == var_1) <= 248))) | 255));
    var_19 |= (var_4 == var_2);
    #pragma endscop
}
