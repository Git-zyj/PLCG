/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_10 = ((+(max((arr_3 [i_2]), -835307855))));
                    arr_7 [i_0] [i_1] [i_2] = ((~(((arr_6 [i_0 - 3] [i_1 + 1]) ? (arr_6 [i_0 - 2] [i_1 + 1]) : (arr_6 [i_0 - 2] [i_1 - 1])))));
                    arr_8 [i_0] [i_0 - 3] = (min((arr_3 [i_2]), ((((min(903772478, 1))) ? (arr_2 [0] [i_1 - 2]) : 14132415392652151852))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_11 = (min(var_11, (((!(((var_8 ? 749471068 : (arr_5 [i_3])))))))));
                    var_12 = (arr_5 [i_0 - 1]);
                    var_13 = (min(var_13, (((var_7 ? (arr_9 [7] [i_0 + 1] [i_1 - 1]) : (arr_9 [i_0] [i_0 - 1] [i_1 - 2]))))));
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_14 = (min(var_14, -1488));
                                var_15 += ((~((-((6241259059960411700 << (-1557430394 + 1557430452)))))));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_1] [i_1] = var_4;
                arr_21 [i_0 + 1] [i_1] &= (((((arr_4 [i_0] [i_1] [i_1]) && (((3488438195 ? 2017856698 : 0))))) ? ((((arr_17 [7] [7] [i_0] [i_0 - 2] [i_0] [i_0 - 2]) ? (!0) : (arr_17 [2] [2] [1] [i_0] [i_0] [2])))) : (arr_15 [i_0] [9] [i_1] [i_0] [i_0])));
            }
        }
    }
    var_16 = (var_7 & var_1);
    var_17 = (min(var_17, var_4));
    #pragma endscop
}
