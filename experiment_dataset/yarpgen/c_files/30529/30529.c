/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (~45778);
        var_13 += ((25 ? var_4 : -26));
        var_14 = ((var_0 ? var_10 : var_6));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_15 = ((((((arr_3 [i_1] [i_1]) & (arr_4 [i_1]))) | ((((arr_4 [i_1]) | 2))))));
        var_16 += ((~(((var_9 >= (var_7 + var_10))))));
        var_17 += (max(var_7, ((max(var_11, var_1)))));
        arr_5 [i_1] = ((((arr_4 [i_1 - 1]) ? var_9 : ((min(5, var_11))))));
        var_18 = ((-5 >= ((max(-772386607, (arr_4 [10]))))));
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_19 = (0 && -24);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_20 = (!(!var_0));
            arr_10 [i_2] [i_3] = (arr_6 [i_2]);
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_21 = ((!((min((arr_7 [i_4]), var_4)))));
            var_22 = (min(var_22, ((((38 ? 34 : 1))))));
            var_23 = (((((-(var_7 != 5845714235238993708)))) <= (((-1379395015 - 890811776) / ((((arr_9 [i_2]) >> (arr_7 [i_2]))))))));
        }
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_18 [i_5] = ((~((((890811776 ^ (arr_14 [i_5]))) & -3268673173429657408))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_21 [i_5 - 1] [i_6] [i_6] = ((~(var_6 % -1880737373851429568)));
            var_24 = (min((var_2 > 120122626), ((((32767 != (arr_7 [i_6]))) ? 0 : 27))));
            arr_22 [i_5 + 1] [i_5] = (min(69, (((-24 + 2147483647) << (17173938348677810259 - 17173938348677810259)))));
            var_25 += (23 > (min(28672, (arr_14 [i_5 - 1]))));
        }
    }
    var_26 = (min(((-(!var_1))), 49911));
    var_27 *= (((((var_6 > var_11) ? ((var_4 ? -898868417856826093 : var_8)) : (var_1 ^ 65535))) - (((min(var_9, var_4)) - var_10))));
    #pragma endscop
}
