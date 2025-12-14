/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 32749;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((32735 * (((arr_2 [i_0]) ? var_1 : (max(var_3, 13655966048621882914))))));
        var_16 = (((((arr_2 [i_0]) > (max(6900655438182937080, var_7)))) ? (((((-20582 - (arr_2 [i_0])))) ? (((!(arr_0 [i_0])))) : var_9)) : (((((((arr_1 [i_0] [i_0]) + 2147483647)) >> var_13)) >> (((((arr_2 [i_0]) | (arr_0 [i_0]))) - 18446744073709551613))))));
        arr_4 [i_0] = (((arr_1 [i_0] [i_0]) > ((max(32754, 20582)))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] = ((var_6 ? (arr_5 [i_1 - 2]) : (arr_5 [i_1 - 1])));
        var_17 = (arr_5 [i_1]);
        arr_10 [i_1] [i_1] = (~-32735);
        var_18 = ((!(arr_7 [i_1] [i_1 - 2])));
    }
    #pragma endscop
}
