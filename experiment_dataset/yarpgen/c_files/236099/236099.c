/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 *= var_3;
        arr_3 [i_0] = (((((+(max((arr_2 [i_0] [i_0]), 32767))))) ? ((195 & ((~(arr_2 [i_0] [i_0]))))) : (((((arr_2 [i_0] [3]) ? (arr_0 [i_0]) : 25))))));
    }
    var_14 = max((((((-90 ? var_2 : var_9))) ? ((var_3 ? var_5 : var_9)) : ((max(var_11, var_11))))), (~139));
    #pragma endscop
}
