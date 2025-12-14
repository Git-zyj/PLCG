/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = (((arr_0 [i_0 - 1] [i_0 + 1]) - ((((!(((183 * (arr_0 [i_0] [9]))))))))));
        arr_3 [10] = (((arr_1 [i_0]) ? (((arr_1 [i_0 + 1]) ? (((1428969221003057899 ? var_7 : var_5))) : (max((arr_1 [i_0 + 1]), (arr_0 [5] [i_0]))))) : (((((arr_1 [i_0 + 1]) ? 65526 : (arr_1 [0]))) + (((arr_0 [i_0 - 1] [10]) - var_1))))));
        var_12 |= ((((max(-59, (arr_1 [i_0 - 1])))) ? (arr_1 [i_0 + 1]) : (arr_1 [9])));
        var_13 = ((((arr_0 [i_0] [i_0 - 1]) ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0 - 1]))));
    }
    var_14 = ((var_11 ? (((var_5 <= (var_1 % var_7)))) : ((65535 & ((9 ? -2 : 65534))))));
    #pragma endscop
}
