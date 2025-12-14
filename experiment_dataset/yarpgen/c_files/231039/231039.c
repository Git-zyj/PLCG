/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((-(((max(511, 2147450880)) & 76815014))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [7] [i_3 - 3] = (((((((max(var_5, var_5))) ? ((var_0 ? var_7 : (arr_6 [i_0] [i_1] [i_4]))) : ((((!(arr_11 [i_2] [i_1] [i_2])))))))) ? (max((arr_14 [i_2 + 1] [i_3] [i_2] [10] [10]), (arr_0 [i_2 + 1] [i_2 + 1]))) : (((~(max(var_8, (arr_3 [i_1] [i_4]))))))));
                                arr_16 [i_0] [i_1] [i_2 + 1] [2] [i_4] [i_2 + 1] = ((var_3 ? (((var_7 - (arr_8 [i_0] [i_0] [i_2 - 1])))) : ((var_13 - (max((arr_2 [1] [i_4]), var_9))))));
                                arr_17 [i_0] [i_1] [i_0] [i_2 - 2] [i_3] [i_4] [12] = var_2;
                                arr_18 [i_0] [i_0] = (min(((((var_2 ? (arr_10 [i_0] [i_0] [i_0] [12] [i_0]) : var_5)) & var_10)), ((max((arr_6 [i_0] [i_0] [i_0]), var_5)))));
                                arr_19 [i_0] [1] [i_2] = (min(28, 5737231264454944422));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((49 ? var_14 : var_10));
    #pragma endscop
}
