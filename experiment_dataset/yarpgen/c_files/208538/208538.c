/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (44426 < 44424);
    var_12 = ((((var_9 ? (44436 / var_7) : var_0)) ^ var_6));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (max(((var_5 ? var_6 : -1618235286)), 1))));
        arr_4 [i_0] = (((+(((arr_0 [i_0]) / var_5)))));
        arr_5 [i_0] = ((((1 - ((min(640, (arr_0 [i_0]))))))) ? -594891461 : ((((max(44409, (arr_2 [i_0])))) + (((!(arr_1 [i_0])))))));
        arr_6 [i_0] = 21115;
        arr_7 [i_0] [i_0] = (((arr_0 [i_0]) ? ((~(arr_0 [i_0]))) : (((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0]))) & 63))));
    }
    #pragma endscop
}
