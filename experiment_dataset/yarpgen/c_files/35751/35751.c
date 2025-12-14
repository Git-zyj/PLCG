/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((((var_10 ? (arr_5 [i_0] [i_0] [i_2] [i_2 - 3]) : (min((arr_4 [i_0] [22] [i_0]), var_15)))) * ((+((var_8 ? (arr_4 [i_0] [i_1] [21]) : var_8))))));
                    var_18 = (max(var_18, ((242 ? 2199022206976 : 2147483632))));
                }
            }
        }
        arr_7 [i_0] = (((arr_3 [i_0] [i_0]) ? (((var_14 > (arr_3 [i_0] [i_0])))) : ((max((arr_3 [i_0] [i_0]), (arr_3 [12] [i_0]))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_19 = (((1485608562 || 18194095032420885911) << (-1485608557 + 1485608560)));
                var_20 = ((((arr_5 [i_4] [i_3] [i_3] [i_3]) ? ((252649041288665720 ? var_0 : var_6)) : var_6)));
                arr_15 [i_3] [i_3] [i_3] = (arr_12 [1] [1] [i_4]);
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_25 [i_4] [16] |= (arr_5 [i_3] [i_3] [11] [18]);
                                var_21 = var_14;
                                arr_26 [i_7] [i_6] [15] [15] [15] = (((var_11 || 1262258692555638140) && (((arr_19 [i_3] [7] [i_3] [0] [i_3]) && var_2))));
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_22 -= ((((1 / (arr_21 [i_3] [i_3] [13] [i_8]))) * -28273));
                    arr_29 [i_3] [i_3] [i_3] = var_5;
                }
            }
        }
    }

    for (int i_9 = 2; i_9 < 21;i_9 += 1)
    {
        arr_32 [i_9] [i_9] = 0;
        arr_33 [i_9 - 1] |= ((((arr_4 [i_9 - 1] [i_9 - 2] [i_9 - 1]) ? var_9 : (arr_4 [i_9 - 1] [i_9 - 2] [i_9 + 1]))));
        var_23 |= ((((min((((-1485608562 ? (arr_6 [5] [i_9] [i_9 + 1]) : var_5))), ((30 ? 1485608551 : 18446744073709551607))))) ? (~var_9) : (arr_30 [i_9 + 1] [i_9 + 1])));
        arr_34 [i_9] [17] = ((((((arr_2 [i_9 - 2] [i_9 + 1] [i_9 + 1]) ? 1485608551 : 176))) ? (arr_2 [i_9 + 1] [i_9] [11]) : (-2147483631 / 8803161819485891027)));
    }
    for (int i_10 = 2; i_10 < 6;i_10 += 1)
    {
        var_24 = -2147483613;
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {
                    var_25 = ((((arr_28 [i_10] [2] [i_11 - 1] [i_12]) - ((max((arr_0 [i_11 + 1]), (arr_3 [i_11] [i_12])))))));
                    arr_42 [i_10] [i_10] [i_12] [i_12] = (((arr_12 [i_11 - 1] [i_10 + 4] [i_10 - 1]) || -1485608537));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_26 = 428673754;
        arr_45 [i_13] = ((((max(var_0, var_9))) + (arr_44 [i_13] [i_13])));
    }
    var_27 = ((((var_11 ^ (var_12 * var_3))) - -var_5));
    #pragma endscop
}
