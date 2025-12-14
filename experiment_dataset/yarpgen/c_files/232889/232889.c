/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (1 ? var_6 : var_4);
    var_21 += (((((-(var_18 + var_8)))) ? var_9 : var_8));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 2] = -104;
        var_22 = (max(var_22, -9071362912481824195));
        var_23 = (max((min((((~(arr_1 [i_0 - 3])))), (~var_10))), (((~(arr_1 [i_0 - 2]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_24 -= ((48030 ? (arr_4 [i_1]) : 58071));

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_25 = (min(((((((-(arr_9 [i_2] [i_1]))) + 2147483647)) << ((((~(arr_6 [i_1]))) - 2886471598)))), ((((arr_5 [i_1]) >= (!var_4))))));
            arr_10 [i_2] &= (arr_5 [i_2]);
            var_26 = ((((((arr_5 [i_1]) & var_6))) ? (((~(arr_9 [i_1] [i_2])))) : (((max(9071362912481824202, 2143289344)) & (arr_6 [i_1])))));
            arr_11 [i_1] [i_2] [i_1] = (((((var_12 - (arr_9 [i_2] [i_1])))) ? (max(-9071362912481824195, (max(var_13, var_4)))) : (arr_3 [i_1] [i_1])));
            var_27 = (arr_8 [i_1] [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_1] = (((arr_14 [i_1] [i_3]) == (~-100)));
            arr_16 [i_1] [i_1] [i_1] = ((!(arr_8 [i_1] [i_1])));
            var_28 = (max(var_28, -6533938806348469637));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_19 [i_1] [i_4] [i_4] = -92;
            arr_20 [i_1] [i_4] = (((~2447139679) ? -1415836632 : (arr_7 [i_1])));
        }
        var_29 = (max(var_15, ((((min(var_19, 2151677951))) ? (arr_4 [i_1]) : 8673453340012575637))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_30 = ((-((min((arr_12 [i_5] [i_5]), (arr_12 [i_5] [i_5]))))));
        var_31 = (max(var_10, (((arr_3 [2] [i_5]) ? (arr_3 [17] [i_5]) : var_5))));
    }
    #pragma endscop
}
