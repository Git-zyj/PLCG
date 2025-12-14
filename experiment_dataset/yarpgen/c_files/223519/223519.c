/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~((-(arr_0 [i_0])))));
        arr_4 [i_0] = -666287915;
    }
    var_14 = (max(var_2, ((~(min(var_5, var_9))))));
    var_15 = (max(((((((var_9 ? 140737488355327 : 0))) || (var_5 & 460167764)))), ((var_1 << (((max(var_5, var_7)) - 3809770824))))));
    #pragma endscop
}
