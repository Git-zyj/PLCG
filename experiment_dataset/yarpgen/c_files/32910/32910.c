/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 6820118062781679358;
    var_17 = (1451564597 < 62);

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_7 >> (((((((var_3 ? var_4 : (arr_0 [i_0] [i_0])))) ? var_7 : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))))) - 26662))));
        var_18 = (min(var_18, var_11));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_19 ^= (arr_4 [i_1 - 1]);
        var_20 = (((19011 - 53) ? var_9 : (((arr_6 [i_1]) ? (((arr_6 [i_1]) ? (arr_1 [i_1]) : var_3)) : (((arr_3 [i_1] [i_1]) % var_8))))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_21 -= ((74 >> (65536 - 65512)));
        arr_10 [i_2 + 1] [i_2] = var_1;
        arr_11 [i_2] [i_2] = (min((max(((18446744073709551615 ? 8800666770000460106 : (arr_1 [i_2]))), (arr_9 [i_2]))), (((!(arr_0 [i_2] [i_2]))))));
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_22 = ((+(((32766 / -8736576749531784038) - ((((arr_9 [i_3]) ? -125 : var_8)))))));
        var_23 = (min(var_23, (18446744073709551594 <= 1)));

        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            arr_17 [i_3] [i_4] = ((8166001435571111921 ? 0 : 23676));
            var_24 = (min(var_24, (~var_2)));
            var_25 = var_2;
            arr_18 [i_4 + 1] [i_3] [i_4] = 32755;
        }
        var_26 = (min(var_26, (((~((65536 ? 65538 : (arr_8 [i_3 + 3] [i_3]))))))));
    }
    #pragma endscop
}
