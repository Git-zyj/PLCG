/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_11;
        arr_4 [i_0] = (min((arr_1 [i_0]), -5021779586680076998));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_9 [0] &= min(((((arr_8 [i_1] [i_1]) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))), ((((max(6551, var_14))) ? (1347201147 - 2947766166) : var_8)));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_15 = (i_1 % 2 == zero) ? ((min(1347201167, ((((((arr_7 [i_1]) << (((((arr_11 [i_1] [i_1]) + 5683082156358864662)) - 20))))) - (arr_13 [i_2 - 1])))))) : ((min(1347201167, ((((((arr_7 [i_1]) << (((((((arr_11 [i_1] [i_1]) + 5683082156358864662)) - 20)) - 6223653247313049781))))) - (arr_13 [i_2 - 1]))))));
                    arr_17 [i_1] [i_1] [i_3] [i_1] = ((((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? (arr_6 [i_1]) : (min((arr_6 [i_1]), (arr_6 [i_1])))));

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        arr_21 [i_1] [i_3] = var_13;
                        var_16 = (((min((((13558 ? 2285371054 : var_5))), var_12)) << (((((arr_15 [i_4]) ? ((-(arr_18 [i_2]))) : (arr_20 [i_2] [i_2 + 1] [i_2 + 1] [i_4 + 2]))) + 8780422068613755306))));
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_17 *= arr_20 [i_5] [i_5 - 2] [i_2 - 1] [i_2 - 1];
                        arr_24 [i_1] [i_3] [i_1] [i_1] [3] [i_1] = (arr_16 [i_5 - 2] [i_2] [i_2 - 2]);
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_18 = (min(var_18, ((min(((min((arr_22 [i_3] [i_2 - 1] [i_2 + 1]), (arr_22 [i_3] [i_2 + 1] [i_2 - 2])))), (arr_6 [i_6]))))));
                            var_19 = -2285371050;
                            arr_29 [i_1] [i_1] [i_1] [i_3] [13] [i_1] = (min(((((arr_8 [i_2 + 2] [i_2 + 2]) << (((arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 2]) - 60))))), (min(((var_1 ? -2147483646 : var_9)), (arr_22 [i_1] [i_2] [i_3])))));
                        }

                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            var_20 += (min(((-(min((arr_18 [i_3]), (arr_26 [i_1]))))), (min((arr_22 [i_6] [i_8 + 1] [i_8]), (min((arr_7 [i_6]), var_5))))));
                            var_21 = (arr_11 [i_1] [i_2]);
                        }
                    }
                    arr_32 [i_1] [i_2] [i_1] = ((-(min((arr_12 [i_1] [i_2 + 1] [i_1]), (arr_12 [i_1] [i_2] [i_3])))));

                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_22 = (1347201167 == -5011623428509422670);
                        arr_35 [i_1] [i_1] = var_11;
                        var_23 -= (((arr_14 [i_2 + 1]) && (((arr_14 [i_1]) > (arr_14 [i_1])))));
                        arr_36 [i_1] [i_1] [i_1] [i_1] = ((var_11 ? 86355585 : (((((arr_20 [i_2] [i_2 + 2] [i_9 + 3] [i_9 + 2]) == var_10))))));

                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            var_24 -= (((arr_23 [i_1] [i_2 + 2] [i_3] [i_9 + 3] [i_1]) ? 118 : var_3));
                            arr_40 [i_1] [i_1] [i_1] = (((arr_13 [i_10 + 1]) ? (arr_13 [i_10 - 1]) : (arr_13 [i_10 - 1])));
                        }
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_25 += ((!(((!var_2) && var_0))));
                        var_26 = -2947766131;
                        var_27 = var_0;
                        var_28 = var_13;
                        var_29 -= var_11;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 4; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 18;i_14 += 1)
                {
                    {
                        var_30 += var_10;
                        arr_52 [0] [i_1] [0] [i_13] [i_13] [i_14] = (~(((arr_22 [i_1] [i_1] [i_1]) ? 28 : (arr_22 [i_1] [i_1] [i_1]))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                {
                    arr_62 [i_16] [i_16] = (((((-(arr_6 [i_16])))) ? var_1 : (arr_28 [i_15] [i_15] [i_15] [i_15] [i_15] [17])));
                    arr_63 [i_17] [i_16] [i_16] [i_15] = (arr_31 [i_15] [i_16] [11] [i_17] [i_17]);
                }
            }
        }
        arr_64 [i_15] = ((89 ? (((arr_60 [i_15] [i_15]) ? (arr_31 [i_15] [i_15] [i_15] [i_15] [i_15]) : var_3)) : (arr_20 [1] [i_15] [14] [i_15])));
        arr_65 [i_15] &= var_14;
        arr_66 [12] [i_15] = ((2947766166 ? 0 : var_10));
    }
    var_31 = var_10;
    var_32 = ((((min(-var_5, var_7))) ? ((((var_9 ? var_1 : var_4)) ^ ((var_3 ? var_1 : var_0)))) : var_6));
    #pragma endscop
}
