/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (min(var_15, (((((arr_1 [i_0] [i_0]) ^ var_6)) == ((max(var_10, (arr_0 [i_0]))))))));
        arr_2 [i_0] = (((8184 ? 61 : 57351)));
        var_16 = (max(14765851790559692108, (((((max(var_13, -117376000))) <= (max((arr_1 [i_0] [i_0]), 2594693777406349033)))))));
        arr_3 [i_0] = (((((max(134, var_1)))) ? var_6 : ((((arr_0 [i_0]) ? ((var_5 ? var_14 : var_4)) : ((min(-96, 198))))))));
    }
    var_17 = (min(var_17, (((var_12 & (min(var_4, ((54 ? var_11 : var_7)))))))));
    #pragma endscop
}
