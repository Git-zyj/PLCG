/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (min(var_19, ((max((arr_2 [i_0]), ((~(8610412720788409153 + 1))))))));
        var_20 = (min(var_20, 5554858472147562428));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_21 = (((((arr_2 [i_1]) ? (arr_2 [i_0]) : var_7))) ? ((-8610412720788409154 ? 1913359143 : -1272996396)) : var_6);
            var_22 ^= var_6;
            var_23 *= (max((var_11 && 0), ((255 || (arr_4 [i_0] [i_0])))));
            arr_5 [i_0] [i_1] &= var_7;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_24 = (max(var_24, 8610412720788409162));
            var_25 = (max(var_25, (((arr_4 [i_0] [i_0]) >= var_4))));
        }
        arr_8 [12] |= ((((((arr_1 [1] [i_0]) ? var_7 : (arr_1 [i_0] [i_0])))) ? (((~(arr_0 [i_0])))) : (var_16 | var_11)));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_26 |= ((!(arr_10 [i_3])));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_27 = (min(var_27, var_4));
            var_28 = (max(var_28, (((~((var_2 ? ((min(2, (arr_13 [i_4] [i_3])))) : (((arr_14 [1] [i_4]) ? (arr_10 [8]) : 254)))))))));
        }
    }
    var_29 = (min(var_29, var_10));
    #pragma endscop
}
