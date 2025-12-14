/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 2] [i_0] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (((81 >= (-50 * -76))))));
                                arr_14 [i_1] = (max((((arr_7 [i_2 + 1]) | (arr_1 [i_2 - 2] [i_0]))), var_10));
                                var_12 = (((var_9 & (arr_11 [i_1 + 3] [i_1 + 3] [i_1 - 3] [i_1 - 3]))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] [i_2] = ((94 || -95) ? ((((min((arr_4 [i_2]), (arr_11 [i_0] [i_0] [i_3] [11]))) || ((min(7236816438766333679, 77)))))) : ((((arr_2 [i_4]) ? (arr_5 [i_0] [i_0] [i_4]) : (arr_1 [i_2 - 1] [i_0])))));
                            }
                        }
                    }
                    var_13 = ((((min(((((arr_1 [i_0] [i_2]) - (arr_11 [i_0] [0] [i_1] [i_2])))), (min((arr_6 [i_0] [i_1 - 3] [i_2]), (arr_1 [i_0] [i_1])))))) ? ((min(((min(1, 94))), (max((arr_1 [i_0] [9]), (arr_5 [i_2] [1] [i_2 - 1])))))) : (min((arr_11 [i_2] [i_2 - 1] [i_1 + 1] [i_0]), (min((arr_12 [i_0]), (arr_6 [i_0] [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_1] = (min((((((arr_1 [i_5] [i_6]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_5]))) & ((((arr_4 [i_0]) ^ (arr_11 [i_6 - 2] [17] [i_1] [i_0])))))), ((((var_2 + (arr_7 [i_2])))))));
                                var_14 += (((((((arr_3 [i_0]) ? var_3 : (arr_19 [i_0] [i_0] [i_0] [i_0] [8] [1]))) < ((((arr_12 [i_0]) - (arr_1 [i_1] [i_6])))))) ? ((-(var_2 * var_3))) : (((((((arr_1 [i_0] [i_1 - 2]) + (arr_8 [i_0])))) - -223537179196726184)))));
                            }
                        }
                    }
                    var_15 = (min(var_15, ((max(var_5, (min((arr_0 [i_1 - 2]), (arr_0 [i_1 + 3]))))))));
                }
            }
        }
    }
    var_16 ^= ((var_2 ? ((max(-94, var_2))) : ((var_6 / (4294967295 * -101)))));
    var_17 = (((((((max(var_0, -61)))) * var_7)) * ((max(((max(var_8, var_5))), (var_0 * var_2))))));
    var_18 = ((((-var_3 ? (((max(5014, var_4)))) : -var_3)) - var_3));
    #pragma endscop
}
