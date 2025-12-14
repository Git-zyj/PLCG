/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 ^= ((-(--0)));
        arr_4 [i_0] = ((!(((-((-(arr_3 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = (min(var_12, (((-((-(arr_3 [i_1]))))))));
        var_13 |= ((!(!17244)));
        arr_8 [i_1] = (+-36);
    }
    var_14 = (!var_2);
    var_15 |= -var_9;
    #pragma endscop
}
