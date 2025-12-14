/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = (max(var_10, var_4));
        var_11 = ((!((((arr_1 [i_0] [1]) - (arr_0 [i_0]))))));
        arr_2 [i_0] |= (min((min((-32767 - 1), 279223176896970752)), (min((var_9 >= var_7), var_4))));
    }
    var_12 = (max(((~(min(-1815491677, 3073)))), (~var_8)));
    #pragma endscop
}
