/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_14;
        arr_4 [i_0] |= max(var_6, (((arr_0 [i_0 + 1]) ? (max(9962745735722982204, var_6)) : (5929395212834573715 > 5615712397042785029))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_16 = (min(var_16, ((min(1179337267, (arr_6 [i_0 - 1]))))));
            arr_7 [i_1] = (min((arr_1 [i_0 + 3] [i_1 + 2]), (arr_1 [i_0 + 2] [i_1 - 1])));
            arr_8 [i_0] [i_0] [i_1] = (max(((((arr_1 [i_0] [i_0]) ? -6450610523575415747 : ((min((arr_5 [i_0]), var_13)))))), (min(((3243934345 ? 14602596603369916867 : -882413625)), 7262357786857517730))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_17 += (((max((min(var_10, var_10)), ((var_1 ? 3931364512 : (arr_2 [i_2]))))) * ((4294967277 / (arr_6 [i_0 - 2])))));
            arr_12 [i_2] = (((((arr_6 [i_0 - 1]) & 11899399291883377282))) ? 11184386286852033885 : 2314524707);
            arr_13 [i_2] [i_2] [7] = (2759554614118136522 ? -6450610523575415750 : 14835592243002256620);
        }
        arr_14 [i_0] = (max(((var_6 ? 56004568 : var_14)), (max(var_14, 1562773324))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_18 [i_3] = (min((max(var_13, 3760807761)), ((((max((arr_2 [i_3]), var_8)) > (~var_0))))));

        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            var_18 = (max(var_18, (((((3008588062 & (arr_11 [10] [i_4 - 2]))) > var_11)))));
            var_19 ^= (((max(5173228951569880897, (arr_10 [i_4 + 1]))) > (((-9020789426599944155 - (~9223372036854775807))))));
            var_20 = (min(var_20, ((((((-9223372036854775807 + 9223372036854775807) << (3772306480 - 3772306480)))) ? (((arr_6 [i_4 - 1]) ? (arr_5 [i_4 - 2]) : (arr_5 [i_4 - 1]))) : (((!(arr_6 [i_4 - 1]))))))));
        }
    }
    var_21 = var_11;
    var_22 = 2661381769292562907;
    #pragma endscop
}
