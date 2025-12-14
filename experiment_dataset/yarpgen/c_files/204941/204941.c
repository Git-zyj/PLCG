/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_2 && (!4572703159566386867))) ? (min((-2551657702897437663 / var_13), ((var_16 ? -7844838107783240382 : 6856840080099826735)))) : var_2);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0]) ? var_2 : 6856840080099826739))) ? (9223372036854775807 / 6856840080099826731) : 252));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] = arr_1 [i_0];
            var_18 = (min(var_18, var_5));
            var_19 = (arr_1 [i_0]);
        }
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_20 -= (((arr_8 [i_2]) ? -6856840080099826739 : (arr_7 [i_2])));
        var_21 = (arr_8 [i_2 + 3]);
    }
    var_22 += 262143;

    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_23 = (max(var_23, (max((min((arr_9 [i_3 - 1]), 18446744073709551608)), 6856840080099826742))));
        var_24 = (arr_9 [i_3]);
        arr_13 [i_3 + 1] [i_3 + 1] = min(2650155588321262431, -533842327424758129);
        arr_14 [i_3] [i_3] = ((((min(var_16, var_6))) ? (arr_9 [i_3 + 1]) : (!var_12)));
    }
    #pragma endscop
}
