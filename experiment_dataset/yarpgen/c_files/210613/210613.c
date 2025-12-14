/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((var_11 ? var_3 : var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (arr_2 [i_1]);
            arr_8 [i_0] &= (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_1])));
        }

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_20 = (((arr_5 [i_0]) ? (arr_2 [i_0]) : (arr_1 [1] [1])));
            var_21 = (((arr_0 [i_0]) ? ((var_7 << (var_13 - 1352782361340466270))) : (arr_6 [i_0] [i_0] [i_0])));
            var_22 = (arr_6 [i_0] [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 *= (((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_3])));
            arr_15 [i_0] |= (arr_1 [i_0] [i_0]);
            arr_16 [i_3] [i_3] [i_3] = (((1613919761 ? -1613919733 : (arr_10 [i_0]))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_24 &= (arr_11 [i_0] [i_0] [i_0]);
            arr_19 [i_0] [i_0] = ((!(arr_17 [i_0])));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_25 = (((((26 ? (arr_9 [i_0] [i_0] [i_0]) : (arr_6 [8] [i_5] [i_5])))) ? (arr_7 [i_0] [i_0]) : (arr_20 [i_0] [i_5])));
            arr_23 [i_0] = (arr_17 [i_5]);
        }
        arr_24 [i_0] [i_0] = (((arr_18 [i_0] [8] [i_0]) ? (arr_6 [i_0] [i_0] [i_0]) : ((~(arr_10 [i_0])))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] = ((+(min((16140482286993269760 ^ var_12), (arr_1 [i_6] [i_6])))));
        arr_30 [2] &= (min((arr_22 [i_6] [i_6]), (min((arr_25 [i_6]), (arr_25 [i_6])))));
        var_26 ^= (min((((arr_0 [i_6]) ? ((max(7, (arr_11 [i_6] [8] [i_6])))) : var_8)), (((!(arr_10 [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_27 = (max(var_27, ((min((arr_28 [i_7] [i_7]), ((min(3078519373, (4786 > 1)))))))));
        var_28 = (max(var_28, (arr_21 [i_7] [i_7])));
    }

    for (int i_8 = 3; i_8 < 20;i_8 += 1)
    {
        var_29 = (((((arr_35 [i_8 - 1]) || (arr_34 [i_8 - 3]))) ? (max((arr_34 [i_8 - 3]), (arr_35 [i_8 + 1]))) : ((((!(arr_37 [i_8 - 2])))))));

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_30 *= (+((+(min((arr_38 [i_9] [i_8] [i_8]), var_4)))));
            arr_41 [i_8] [i_9] = (max((((arr_34 [i_8 + 1]) ? (arr_34 [i_8 + 1]) : (arr_34 [i_8 + 1]))), (min((arr_34 [i_8 + 1]), (arr_34 [i_8 + 1])))));
            var_31 = (((((-((1746976624 ? var_12 : (arr_36 [i_9])))))) % (((arr_39 [i_8 - 2] [5] [i_8]) ? (((((arr_35 [i_9]) >= (arr_35 [i_8]))))) : (max(var_7, 18446744073709551604))))));
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_32 ^= var_12;
        arr_45 [i_10] = (((arr_43 [i_10] [i_10]) ? (arr_43 [17] [i_10]) : ((((!(arr_42 [i_10] [i_10])))))));
    }
    var_33 = (min(var_33, (((var_16 ? var_10 : var_1)))));
    #pragma endscop
}
