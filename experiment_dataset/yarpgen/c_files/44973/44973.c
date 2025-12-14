/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 |= ((((((arr_1 [6]) != (arr_1 [4])))) * (arr_1 [6])));
        var_12 = (arr_0 [11]);
        arr_2 [10] &= (((((var_4 ? (arr_0 [i_0]) : -8191904577383506962))) ? ((((!(arr_1 [2]))) ? (arr_1 [4]) : -4877133373351761510)) : ((((arr_0 [i_0 + 1]) ? (arr_1 [6]) : 90)))));
    }
    var_13 = ((var_4 ? ((max(var_9, 165))) : (min(89, ((var_6 ? var_2 : var_6))))));
    var_14 = (((((((90 / var_6) >= var_0)))) * (max(((max(var_1, var_9))), ((var_5 ? var_4 : var_2))))));
    #pragma endscop
}
