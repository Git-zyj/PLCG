/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_0 [i_1 - 1]) / (arr_0 [i_1 - 2])))) * (min((arr_3 [i_0] [i_0 + 3]), (((arr_2 [20] [i_1]) ^ (arr_1 [i_0])))))));
                    arr_6 [i_2] [i_1] [6] [i_0] = (arr_2 [i_1] [i_1]);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_17 = 4611686017890516992;
                        arr_9 [5] = (arr_4 [i_0] [i_0] [i_1] [i_0]);
                        arr_10 [i_0] [i_0] [i_0] [i_2] = (max(0, ((~(max((arr_4 [i_3] [i_3] [i_2] [i_3]), (arr_1 [i_0])))))));
                        var_18 += (((((((arr_5 [i_0] [i_1] [i_3] [i_1]) / (arr_5 [i_3] [i_2] [1] [i_0]))) - (arr_0 [i_0 + 3]))) < ((((max((arr_2 [16] [i_1 + 1]), (arr_0 [i_0]))) == (((-4611686017890516993 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_3] [i_1 - 2] [i_1 - 2] [i_0])))))))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] [i_4] = (arr_13 [i_1] [i_1] [i_1] [i_1]);
                        var_19 = (min(var_19, (((-((-(arr_12 [i_0] [5] [i_0 - 1] [i_0 + 3]))))))));
                        arr_16 [i_4] |= (((((((arr_5 [9] [i_1] [i_1] [i_0]) - 1)) - 1))) == (max(((min((arr_0 [i_0]), (arr_11 [i_4] [20] [i_1] [1])))), (((arr_8 [i_0 + 1] [i_1] [i_2] [i_4] [i_1]) / (arr_4 [i_0] [i_0 + 2] [i_0] [i_0]))))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] [i_2] [i_2] = (min(((((((((arr_7 [11] [i_1]) + 9223372036854775807)) << (226 - 226))) / ((max((arr_13 [i_0] [i_1 - 1] [i_2] [i_5]), (arr_13 [i_0] [i_1] [i_2] [i_5]))))))), ((((((arr_0 [i_0 - 1]) * (arr_2 [i_0] [i_1 - 2])))) ? (arr_3 [i_0] [i_0]) : ((~(arr_3 [i_0 + 1] [i_1])))))));
                        var_20 += (((arr_11 [i_0] [i_0] [i_0] [i_0]) | (max((max((arr_7 [i_2] [i_0]), (arr_14 [i_0] [i_0 - 1] [i_0 - 1]))), (arr_14 [i_0] [i_1 - 2] [i_2])))));
                    }
                }
            }
        }
    }
    var_21 = ((((var_15 ? ((max(var_8, 1))) : ((min(var_14, var_14))))) - var_1));
    #pragma endscop
}
