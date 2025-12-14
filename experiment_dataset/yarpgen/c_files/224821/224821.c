/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_14 ? var_5 : var_2));
    var_20 = var_9;

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((+(((arr_0 [i_0 + 1]) ^ (arr_0 [i_0])))));
        arr_5 [i_0 - 1] = (min(((((var_3 + (arr_0 [i_0]))) & (max(var_6, 4900485609323438609)))), (((var_12 + ((((arr_3 [i_0]) > (arr_0 [i_0 + 1])))))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_8 [0] = var_2;
        arr_9 [i_1] = (((((-((var_5 ? (arr_7 [i_1] [5]) : var_17))))) ? var_9 : 31));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [14] = ((~(max(((8841893881435477880 << (var_12 - 21972))), (-779067891 - var_17)))));
        arr_13 [i_2 - 1] [i_2] = (((max((max(4900485609323438603, 7168)), (((var_8 ? var_7 : (arr_7 [i_2 - 1] [i_2 - 1])))))) ^ ((((max((arr_3 [9]), (arr_7 [i_2] [i_2])))) ? -4900485609323438586 : ((((arr_6 [i_2]) & -9556)))))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_17 [4] = (arr_6 [i_3 + 1]);
        arr_18 [14] = (((min((arr_10 [8] [i_3]), var_18)) - -1));
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_21 [i_4] = ((max((((!(arr_19 [i_4] [i_4])))), (arr_19 [i_4] [i_4]))));
        arr_22 [i_4] [i_4] = (((arr_19 [i_4] [i_4]) - (arr_20 [i_4] [i_4])));
        arr_23 [i_4] [i_4] = (arr_19 [7] [i_4]);
    }
    #pragma endscop
}
