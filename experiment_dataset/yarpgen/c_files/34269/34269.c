/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((127 ? 0 : 1424774147));
    var_18 |= ((((((min(var_5, 4294967295)) / -1))) && var_1));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] &= ((((((((9970 ? (arr_2 [1]) : (arr_2 [i_0])))) ? (((arr_0 [i_0]) ? 1381227615 : (arr_0 [i_0]))) : (max((arr_1 [i_0]), 4294967295))))) ? ((min(13161, 4294967295))) : 253));
        var_19 = (max(var_19, ((((max((arr_2 [1]), (arr_2 [i_0]))) / ((max(36, (max((arr_2 [i_0]), 242))))))))));
    }
    #pragma endscop
}
