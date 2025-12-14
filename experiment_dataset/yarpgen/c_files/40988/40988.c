/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_2);

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = ((-503315857 ? (((!var_5) ? ((var_13 ? var_2 : var_3)) : var_13)) : (((1891731102 ? (max((arr_0 [i_0] [i_0]), 13010)) : var_5)))));
        arr_2 [i_0] = 3486545129217333018;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_16 = (max(var_16, (((301291244 ? 1891731102 : 2413458006800875364)))));
        var_17 = ((4005986887 ? 6611275330839372906 : 301291246));
        var_18 *= -1891731102;
    }
    #pragma endscop
}
