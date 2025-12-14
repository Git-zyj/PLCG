/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_18 = (arr_6 [i_2]);
                        var_19 = (min(var_5, (min((((var_9 + 2147483647) >> (var_4 - 9521617896619593365))), var_1))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_20 = ((797415493 ? (((((arr_11 [i_4] [i_0] [i_0] [i_0] [i_0]) ? var_11 : var_8)) * 12259)) : (((-1498472699 ? 1 : 53276)))));
                        arr_13 [i_1] = (((((var_4 ? (arr_12 [i_1] [i_1] [i_2] [i_1] [i_0]) : var_5))) ? (((arr_9 [i_0] [i_1] [i_2] [i_0] [i_2] [i_4]) ? var_4 : (arr_2 [i_4] [i_2] [i_0]))) : (((min((arr_1 [i_0] [i_0]), (arr_12 [i_1] [i_1] [i_2] [9] [i_4])))))));
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_21 = (max(var_21, var_13));

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_20 [i_0] [1] [1] [1] [i_1] = 793925072;
                            var_22 ^= -497357221;
                            var_23 = ((~((var_2 ? ((((arr_5 [i_0] [i_1] [i_2] [i_1]) || var_4))) : var_9))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_1] [6] [i_7] [i_0] = (arr_3 [i_0] [i_0]);
                            var_24 = (max(var_24, (arr_17 [i_0] [i_0] [i_0] [i_0] [0])));
                        }
                    }
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        arr_26 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] = (min((arr_11 [i_0] [i_1] [i_1] [i_2] [i_8 - 1]), ((((-63 + 2147483647) >> (((arr_2 [0] [i_2] [i_8]) - 25139)))))));
                        var_25 ^= ((((min((((arr_3 [i_0] [i_0]) ? var_14 : 0)), (arr_10 [i_0] [i_1] [i_2] [i_8 - 2])))) ? (min((((39594 ? var_17 : var_9))), var_0)) : (((-(arr_4 [i_0] [i_0] [i_2] [i_8 + 1]))))));
                        arr_27 [i_0] [i_1] [i_1] [i_1] [4] = (~253);
                    }
                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] = (min((((((-(arr_7 [i_0] [1] [i_0])))) ? var_0 : -467090735)), ((min((min(1, var_0)), (arr_0 [2] [2]))))));

                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            var_26 = (arr_17 [i_9] [i_9 + 1] [i_9 + 2] [i_9] [i_9 - 1]);
                            arr_34 [i_1] [i_1] [i_1] [i_9] [i_10] = var_0;
                        }
                        var_27 = (max(var_27, ((((!(arr_28 [i_0])))))));
                    }
                }
            }
        }
    }
    var_28 = var_11;
    var_29 = (min((((var_13 ? var_9 : 2846))), 14889306968068932300));
    var_30 = (var_10 & var_8);
    #pragma endscop
}
