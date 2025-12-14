/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [1] = ((1820703586 ^ (arr_0 [i_0])));
        var_20 = ((var_9 ^ (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_21 = (((arr_1 [i_1]) ^ (((!(arr_1 [3]))))));
        var_22 *= ((((5499662996639503046 ? (((arr_5 [i_1]) ? var_15 : (arr_1 [i_1]))) : (var_10 & var_15))) ^ (((47113 || ((min(50876, (arr_6 [1])))))))));
        arr_7 [i_1] = (max((arr_0 [i_1]), (max((!1820703583), (-7484181993737091775 ^ var_11)))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] [2] = (max(((~(7484181993737091761 | var_4))), ((var_3 ^ (arr_8 [1] [i_2])))));
        arr_12 [i_2] = ((-((~(arr_10 [i_2])))));
        arr_13 [i_2] [i_2] = (-7484181993737091783 ^ 24648);
        var_23 = (min((~var_10), (~var_17)));
    }
    var_24 = (((((((19723 ? var_0 : var_7)) ^ (((2898481826 ? var_15 : var_8)))))) ? var_6 : (((((var_16 ? 568099754 : 61205))) / (max(var_11, 18416))))));
    #pragma endscop
}
