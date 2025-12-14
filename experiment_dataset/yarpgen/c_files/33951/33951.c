/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 ? (~5361) : (var_5 + 2166940137)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0] [11]);
        arr_4 [9] [5] = (((!(arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 = ((max((min(17736, (arr_5 [i_1]))), (arr_6 [i_1]))));
        arr_7 [24] &= ((((((!(arr_6 [i_1]))))) ? (((((arr_5 [i_1]) == (arr_5 [i_1]))))) : (arr_6 [i_1])));
        arr_8 [i_1] [i_1] = ((-(!240)));
        var_21 = (max(var_21, (((!(-32767 - 1))))));
    }
    #pragma endscop
}
