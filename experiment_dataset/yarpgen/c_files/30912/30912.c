/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = var_2;
                    var_13 = (min(var_13, (((~(max((!1), ((var_3 >> (((arr_6 [i_0] [i_1] [i_1] [i_0]) + 690236469)))))))))));
                    var_14 = (max((arr_2 [i_0]), (((arr_6 [i_2] [i_2 + 2] [i_2] [i_2]) & var_5))));
                    var_15 = (min((max((max((arr_5 [i_0] [i_0] [i_0]), var_11)), (arr_2 [i_2 + 2]))), (arr_0 [i_1])));
                    arr_8 [i_0] = (arr_6 [10] [i_0] [i_2 + 1] [i_0]);
                }
            }
        }
    }
    var_16 = (max(var_3, (min((max(var_1, var_8)), (var_5 < var_9)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_17 = (min(var_17, (!var_7)));
                    var_18 = ((!((((arr_6 [i_3] [i_3] [i_3] [i_3]) ? (arr_17 [i_4 - 3] [i_4 + 1] [i_4]) : (max((arr_0 [13]), var_9)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((min((arr_9 [i_3]), (arr_3 [i_3]))))));
                                var_20 = (min(var_20, ((((arr_18 [i_3] [i_3] [i_4 + 1] [i_5] [i_4 + 1] [i_7]) ? 1 : (min((arr_16 [i_3] [i_3] [i_4] [i_3]), ((max((arr_19 [i_3] [i_4] [i_5] [i_6] [i_7] [i_7]), (arr_11 [i_5])))))))))));
                                arr_24 [i_5] [i_4] [12] [i_4] = (arr_22 [i_7] [i_4] [i_3]);
                                arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (((((~((-250457974 & (arr_1 [i_3] [i_3])))))) && ((((arr_19 [i_3] [i_4] [i_5] [i_3] [i_3] [i_3]) ? (!var_3) : (min(1389206007, (arr_16 [i_3] [i_3] [i_3] [i_3]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((867039979 ? (-2147483647 - 1) : 1389206007));
    #pragma endscop
}
