/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((30083 >> (56322 & 31)));
        var_20 = (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : ((var_17 * (arr_0 [i_0])))));
        arr_4 [6] |= ((-(((56322 == (arr_1 [2] [i_0]))))));
        arr_5 [i_0] [i_0] = (i_0 % 2 == zero) ? ((((((arr_1 [i_0] [i_0]) + 2147483647)) >> (((arr_1 [i_0] [i_0]) + 13420))))) : ((((((arr_1 [i_0] [i_0]) + 2147483647)) >> (((((arr_1 [i_0] [i_0]) + 13420)) - 8165)))));
        var_21 = (((arr_2 [i_0] [i_0]) / (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_13 [i_1] [i_1] &= (arr_8 [i_2 - 2]);
            arr_14 [i_1] [i_2] = (arr_8 [i_1]);
        }
        var_22 = (5351 <= 4336813480353964573);
        var_23 = (arr_12 [i_1] [i_1] [i_1]);
        arr_15 [i_1] = (652057991 * 16589427522251816484);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 6;i_4 += 1)
        {
            var_24 = ((14185 ? 35092 : 45776));
            arr_23 [i_3] [i_3] [i_3] = (min((arr_10 [i_3] [i_3]), (((arr_7 [i_4 + 1]) ? ((-(arr_8 [i_3]))) : (((var_12 + 2147483647) << (var_19 - 12415)))))));
        }
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            arr_27 [i_3] [i_3] [i_3] = ((((239 << (var_14 - 38233))) - ((min((arr_16 [i_3] [i_3]), (min((arr_11 [i_3] [i_3] [i_3]), 4147)))))));
            var_25 = (min(var_25, (((-(arr_22 [2] [i_3] [i_5 - 3]))))));
            var_26 = (169 + var_18);
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_27 = (min(var_27, (((5348 ^ (((arr_20 [i_3] [i_6]) ? (arr_20 [i_3] [i_6]) : (arr_20 [i_3] [i_3]))))))));
            var_28 += var_6;
        }
        var_29 = 20;
        arr_30 [i_3] = (max((((arr_11 [i_3] [i_3] [i_3]) - 127)), ((min((arr_11 [i_3] [i_3] [i_3]), (arr_11 [i_3] [i_3] [i_3]))))));
    }
    var_30 = ((-((((min(101, var_9))) ? (~0) : ((var_0 ? var_10 : 3129186769))))));
    var_31 = var_2;
    #pragma endscop
}
