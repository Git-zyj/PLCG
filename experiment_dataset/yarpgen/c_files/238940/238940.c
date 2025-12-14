/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (((!(arr_1 [i_0]))));
        var_13 = (max((~31), ((max(var_11, (arr_1 [i_0 - 3]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_1] = (max(1023, 64494));
            var_14 |= ((~(((arr_2 [4]) ? (!var_8) : 28551))));
            var_15 = 22;
        }
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            arr_15 [8] [i_1] = (arr_3 [i_3 + 3]);
            var_16 = (max(var_16, -96));
        }
        arr_16 [i_1] [i_1] = ((~(arr_13 [i_1])));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_23 [i_4] = ((-(arr_1 [i_5])));
            var_17 = ((-(arr_18 [i_4] [i_5])));
            arr_24 [i_4] = var_4;
            var_18 = ((var_1 != (arr_2 [i_4 - 2])));
            var_19 = (((arr_2 [i_4 - 2]) ? (arr_2 [i_4 - 1]) : (arr_2 [i_4 - 1])));
        }
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_20 = (max(var_20, var_7));
            var_21 = arr_25 [i_4] [i_4] [i_6];
        }
        var_22 -= (((arr_28 [i_4]) ? -15226301985906625978 : var_6));
    }
    var_23 = var_7;
    var_24 |= (~85778160);
    #pragma endscop
}
