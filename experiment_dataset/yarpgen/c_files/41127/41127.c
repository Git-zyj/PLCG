/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_3, (!732458855)));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = ((13 ? 0 : 238));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (((min((arr_9 [i_0 - 2] [i_1] [i_0 - 2] [i_3] [i_4] [i_4]), (arr_9 [i_0] [i_0] [9] [i_0] [i_0] [i_0 - 2]))) ? ((((arr_9 [6] [i_1] [i_1] [i_2] [i_3] [i_4]) != (arr_9 [i_0 - 4] [i_1] [i_2] [i_3] [i_3] [i_4])))) : (((arr_9 [i_0 - 3] [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0]) ? (arr_9 [i_0] [7] [i_3] [i_3] [i_1] [i_2]) : (arr_9 [i_1] [i_3] [i_3] [8] [i_1] [i_0])))));
                                arr_12 [i_2] [i_2] [i_3] [i_3] [i_2] [i_1] [i_2] = (((min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 - 4]), var_5))) ? -246 : ((((arr_6 [1] [i_3] [i_3]) ? (((arr_2 [i_0 - 2] [i_0]) ? (arr_2 [i_0] [i_3]) : (arr_7 [i_0] [i_0] [i_0] [i_3]))) : var_12))));
                                arr_13 [i_3] [i_4] [i_4] [i_3] [i_4] [i_2] = (max((((max(17983735719323346095, 4294967295)) - ((((arr_3 [i_0] [i_0] [i_0]) - (arr_7 [i_0] [i_1] [i_0] [i_3])))))), (max(144115188075855871, 58725))));
                                arr_14 [i_2] [4] [i_3] [i_3] [i_0 - 4] [i_0 - 4] |= ((~((-(arr_8 [i_1] [i_1] [i_1] [i_1])))));
                                var_22 = ((((max(((-(arr_6 [i_0] [i_0] [i_0]))), (var_18 || var_11)))) ? var_1 : (((var_10 ? 18302628885633695744 : var_12)))));
                            }
                        }
                    }
                    var_23 &= ((((!(arr_9 [i_0] [i_0] [i_0] [i_0] [1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_2] [i_2] [i_5] [i_5] [i_1] [i_0 - 4] = (min(144115188075855864, var_4));
                                var_24 = (((((((min((arr_7 [i_0] [i_1] [i_1] [i_5]), (arr_16 [i_0] [i_1] [i_1] [5])))) ? 9223372036854775794 : 182))) == ((((max(var_18, (arr_0 [i_1])))) ? (((arr_2 [i_6 + 2] [7]) ? (arr_11 [i_5] [i_0]) : (arr_8 [i_1] [i_1] [17] [i_1]))) : (arr_7 [i_0] [i_6 + 2] [i_0 - 3] [i_5 + 1])))));
                                var_25 = 4275024633094743799;
                            }
                        }
                    }
                    arr_22 [i_2] [i_2] [i_0] = (~4450138016849934318);
                }
            }
        }
        arr_23 [i_0] = ((18302628885633695770 ? ((((!(arr_20 [i_0 - 3] [i_0 + 1] [0] [i_0]))))) : var_13));
    }
    #pragma endscop
}
