/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_0 [i_0] [i_0 + 1])));
        var_13 *= ((((+(min((arr_2 [i_0] [17]), var_9)))) != (((!((min(var_5, 33030144))))))));
        var_14 = (min(var_14, ((((((((arr_0 [i_0] [18]) ? (arr_2 [21] [13]) : (arr_2 [4] [i_0])))) ? var_5 : -33030144))))));
    }
    var_15 &= var_3;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 = (max(var_16, var_6));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_17 = (((((arr_3 [i_2]) != 1)) ? (arr_5 [i_1]) : var_3));
            var_18 = ((18446744073709551615 % (arr_3 [i_1])));

            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                var_19 = var_3;
                var_20 = (min(var_20, var_8));
                arr_11 [i_2] [16] [i_3] [i_1] &= ((1879048192 + (arr_4 [i_2])));
            }
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_21 = (min(var_21, 18446744073709551611));
            arr_14 [i_1] [i_4] = (arr_13 [i_1]);
        }
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_22 = 2093579123;
        arr_17 [i_5] [23] &= (arr_16 [i_5]);
        var_23 = (min(0, 11013561));
        var_24 = (((4 <= ((-126 ? (arr_16 [1]) : var_1)))) ? (((var_9 <= var_10) ? (arr_16 [1]) : ((min((arr_16 [i_5]), 126))))) : (max(1, (arr_15 [1] [i_5]))));
    }
    #pragma endscop
}
