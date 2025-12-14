/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 |= (((max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) ? ((~(arr_0 [i_0 + 1]))) : (arr_0 [i_0 - 4]));
                    arr_8 [i_0] = (max(((((arr_1 [i_0 + 2]) || (arr_1 [i_0 - 4])))), (arr_5 [i_0 - 1] [i_1])));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_19 = (max(((min(65535, ((((arr_11 [i_0]) <= var_17)))))), (min((arr_7 [i_3] [16] [i_1]), (arr_7 [i_0 - 1] [i_0] [i_2])))));
                        var_20 = (max(var_20, ((max(65535, 0)))));
                        var_21 = (min(2081759859837295070, (((((var_9 ? var_5 : 658054144))) * (56894 / -1)))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_22 = ((var_8 && ((min(65535, (!4294967295))))));
                        arr_16 [i_4] [i_0] [i_0] = ((-(arr_11 [i_2])));
                    }
                }
            }
        }
    }
    var_23 = var_1;
    var_24 = var_12;

    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_25 = ((((((arr_0 [i_5]) & 628105705))) ? 10615 : (max((min((arr_7 [i_5] [i_5] [i_5]), 628105707)), 649674939))));
        var_26 = (min(var_26, (arr_3 [i_5])));
        var_27 |= (min((arr_6 [i_5] [i_5] [i_5]), (max((arr_6 [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5])))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    arr_28 [i_6] [i_6] [i_6] = (-2147483647 - 1);
                    var_28 = (((((-(arr_26 [i_6] [i_6] [i_6])))) && ((((arr_11 [i_6]) ? (arr_18 [i_7]) : var_1)))));
                }
            }
        }

        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    {
                        var_29 -= 0;
                        var_30 = (((~2081759859837295070) ? 10615 : var_16));
                        var_31 = (max((max((arr_7 [i_9 - 2] [i_10 - 1] [i_11 - 1]), (arr_7 [i_9 + 1] [i_10 - 1] [i_11 - 1]))), (((arr_7 [i_9 - 2] [i_10 + 1] [i_11 + 1]) ? (arr_7 [i_9 - 3] [i_10 + 1] [i_11 - 1]) : (arr_7 [i_9 - 3] [i_10 - 1] [i_11 - 1])))));
                    }
                }
            }
            var_32 = (min((((arr_34 [i_9 - 3] [i_9 - 1] [12]) ? (arr_34 [i_9 - 3] [i_9 - 1] [2]) : (arr_34 [i_9 - 3] [i_9 - 1] [18]))), ((((arr_37 [i_6]) <= (((arr_4 [i_6]) / (arr_7 [16] [i_9] [16]))))))));
        }
        var_33 = (max(var_33, ((max((arr_5 [i_6] [i_6]), (max((arr_13 [i_6] [i_6]), (max(var_17, (arr_27 [i_6] [13] [13]))))))))));
    }
    #pragma endscop
}
