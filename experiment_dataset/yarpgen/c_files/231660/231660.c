/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (((536793410 || 536793434) || ((max(var_1, (((arr_3 [i_0] [i_0]) * var_0)))))));
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        var_19 -= ((var_10 ? ((var_16 ? (var_11 % 536793429) : (arr_2 [i_0]))) : (((((min(var_10, var_17)) < var_10))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (((min((max((arr_7 [i_1]), var_6)), ((max(9715, (arr_2 [i_1])))))) > ((-(((arr_3 [i_1] [i_1]) ? 536793410 : (arr_5 [9])))))));
        var_20 = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_21 &= ((max((((arr_5 [i_2]) || (arr_3 [i_2] [i_2]))), 536793429)));
        var_22 *= arr_0 [i_2] [i_2];
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            arr_20 [i_4] = var_8;
            var_23 = (max(var_23, ((((arr_14 [i_4 - 3]) <= (arr_16 [i_3] [6]))))));
            arr_21 [i_4] [i_4] = (((arr_1 [i_3 + 1] [i_3 - 1]) < (arr_1 [i_3 + 1] [i_3 - 1])));
            arr_22 [i_3 - 2] [i_4 + 1] [i_4] = (!var_13);
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_24 ^= 42772;
            var_25 = (((arr_12 [i_3 + 1]) ? (arr_19 [i_3 - 1] [i_3] [i_3 - 2]) : (arr_19 [i_3] [i_3] [i_3 - 2])));
            var_26 = var_2;
        }
        var_27 = ((844087949430936349 ? 42769 : 970205738));
    }

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_28 [i_6] = ((((((arr_3 [i_6] [i_6]) ? (arr_3 [i_6] [i_6]) : (arr_9 [i_6])))) ? (((((arr_24 [i_6]) != (arr_1 [i_6] [i_6]))))) : ((var_3 ? (arr_11 [i_6]) : (arr_11 [i_6])))));
        var_28 = (max(var_28, ((max(((((arr_24 [i_6]) ? (arr_24 [i_6]) : (arr_24 [i_6])))), (max(var_13, ((13067762159076079334 ? 3758173845 : 3758173885)))))))));
        arr_29 [i_6] = var_11;
        var_29 = (min(var_14, (((arr_7 [9]) ^ 13067762159076079334))));
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_30 = var_9;
        arr_32 [i_7] = ((((42173 ? 9712 : var_0))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_35 [i_8] = ((-((max((arr_16 [i_8] [6]), (arr_25 [i_8] [i_8]))))));
        var_31 = min(9, ((((arr_9 [i_8]) > (arr_9 [i_8])))));
        var_32 = (arr_5 [i_8]);
        var_33 -= ((((((arr_31 [i_8]) ? (arr_31 [i_8]) : 9223372036854775807))) ? (arr_31 [i_8]) : ((((arr_31 [i_8]) ? var_13 : 0)))));
        var_34 = (((~var_1) / (max((max((arr_0 [i_8] [3]), (arr_3 [i_8] [i_8]))), (arr_10 [i_8] [i_8])))));
    }
    for (int i_9 = 2; i_9 < 20;i_9 += 1)
    {
        var_35 = max((((((max((arr_37 [i_9] [i_9 - 1]), var_4))) ? var_5 : 3758173853))), (((18446744073709551615 / 1368931101359403945) / (((3758173853 ? 10 : 3373940326))))));
        arr_38 [i_9 - 1] = 6703883414467730381;
    }
    var_36 = var_11;
    var_37 ^= ((var_17 ? var_12 : (min(var_15, (min(var_3, var_4))))));
    #pragma endscop
}
