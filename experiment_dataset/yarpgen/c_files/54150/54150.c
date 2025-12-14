/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((~((var_9 ? 791300857 : var_13))))) | -18446744073709551599));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 += ((var_3 ? (arr_2 [i_0] [22]) : (min(var_11, var_5))));
        var_16 *= ((((((((((arr_0 [i_0] [i_0]) == 2147483647)))) | 72057319160020992))) ? var_4 : (min(var_4, ((max(var_9, var_2)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_17 = (min(var_17, (((var_0 ? 124 : -1518001719)))));
        var_18 = (min(var_18, ((((arr_0 [i_1] [i_1 - 1]) & var_8)))));
        arr_5 [i_1] = (((((var_6 ? var_11 : var_3))) != 10040170016989450185));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_19 ^= (((arr_0 [i_2 + 2] [i_3]) ? (arr_0 [i_2 - 1] [i_3]) : var_12));
            var_20 = -1518001719;
        }
        var_21 *= ((((-124 ? var_6 : (((var_5 ? 4621 : var_7))))) << ((((120 ? (max(10040170016989450170, var_13)) : 255)) - 10040170016989450132))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_22 = (((((arr_3 [i_4] [0]) | var_6)) >> ((var_5 ? 1 : var_2))));
        var_23 = ((!(arr_8 [i_4] [i_4])));
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            arr_17 [16] = (arr_7 [i_6] [i_5]);
            var_24 = ((var_2 || (((((arr_1 [i_6]) ? var_10 : var_7)) > 16777215))));
            arr_18 [i_5] = (min(var_2, 8406574056720101449));
        }
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            var_25 = (min(var_25, (((18446744073709551590 ? (((arr_0 [i_7] [i_5]) ? (((var_11 ? var_11 : 87))) : ((-(arr_7 [11] [i_7 + 3]))))) : (((arr_4 [i_5] [14]) ? (((var_5 ? var_5 : var_0))) : (arr_8 [i_7] [i_7]))))))));
            arr_22 [i_7] = ((+(max((-1 ^ 3503666427), (((226 ? var_5 : 3503666438)))))));
        }
        var_26 *= (min((((var_2 ? -125 : var_1))), ((((var_10 + var_9) || 192)))));
        var_27 *= (((((var_8 ? (253 | var_5) : (-3235 || 1)))) ? var_8 : (63 || var_13)));
    }
    #pragma endscop
}
