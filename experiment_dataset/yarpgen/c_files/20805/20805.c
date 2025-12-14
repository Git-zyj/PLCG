/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 &= (((arr_2 [i_0] [i_0]) * ((-110 * (arr_2 [i_0] [1])))));
        var_12 &= (!120);
        var_13 *= ((((((!(!-111))))) >= (min((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0]))), (var_9 / 120)))));
        var_14 ^= ((((((arr_0 [i_0]) | (-116 & -79)))) ? (((arr_1 [i_0]) ^ (arr_2 [i_0] [i_0]))) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = (max((((!(((-116 ? (arr_2 [i_1] [i_1]) : (arr_0 [i_1]))))))), (min((-14 % var_7), (-507317387 / -6)))));
        var_16 = (min(var_16, (((((((~1) % -507317387)) + 2147483647)) << (((((arr_1 [i_1]) / (((78 ? 26681 : (arr_0 [1])))))) - 167668554413514))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = (((((arr_7 [i_2]) != (arr_7 [i_2]))) ? (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_6 [i_2]))) : ((507317369 ? 115 : -110))));
        var_17 += ((!(arr_8 [i_2])));
        var_18 = (((!(arr_8 [i_2]))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_19 |= 116;
        var_20 = ((max(((!(arr_7 [i_3]))), ((!(arr_6 [i_3]))))));
    }
    var_21 |= (((min(((-32337 ? 27 : var_4)), -111)) % ((((15313 >> var_9) ? 38855 : var_7)))));
    #pragma endscop
}
