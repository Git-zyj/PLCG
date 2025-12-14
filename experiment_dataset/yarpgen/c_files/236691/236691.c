/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((max(117, 3193914140277123010)), (var_7 >= var_7)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] = (arr_4 [1]);
                arr_6 [i_0] = var_9;
                arr_7 [i_0] [i_1] &= (1449411606 && 0);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_2] [i_2 + 1] = (((max((arr_9 [i_2]), (max((arr_11 [i_2] [i_3]), var_7)))) << (((((((arr_9 [i_2]) / (arr_13 [i_3 - 1] [i_2 + 1] [i_2 + 1]))) + 46006)) - 1))));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_19 [9] [i_3 - 4] = var_9;
                    var_12 += (arr_13 [i_2] [i_2] [i_4]);
                    var_13 = (max((arr_4 [i_2]), (max(((var_0 ? (arr_1 [i_4] [8]) : var_7)), ((((arr_10 [i_2] [i_3]) >= (arr_18 [i_3 - 4] [i_4]))))))));
                    arr_20 [i_3] [i_3] [i_2 + 1] = (min((((max((arr_10 [i_2 + 1] [i_4]), (arr_11 [i_3 - 2] [i_3]))) | ((min(1, 4095))))), (max((((arr_13 [i_2] [i_2 + 1] [i_2 + 1]) * 224)), ((((arr_11 [i_2] [i_2]) && (arr_11 [i_3] [i_4]))))))));
                }
                for (int i_5 = 4; i_5 < 8;i_5 += 1)
                {
                    arr_23 [i_2] [i_3] [i_3] = (arr_12 [i_2] [i_3 - 2]);
                    arr_24 [i_2 + 1] [i_3 - 2] [1] [i_5] = (arr_21 [1] [1] [i_5 - 1] [i_2 + 1]);
                }
                arr_25 [i_2 + 1] [i_2 + 1] [i_3 + 1] = (max((max(var_6, var_2)), var_0));
                var_14 = (max((arr_10 [i_2] [i_3 - 4]), (((arr_1 [i_2 + 1] [i_3 - 4]) ? (arr_1 [i_2 + 1] [i_3 - 2]) : (arr_18 [i_2 + 1] [i_3 - 4])))));
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
