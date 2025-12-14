/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_0 && (-30083 ^ var_6))) && -var_6));
    var_13 = (min(var_13, (((((max(var_6, (min(91, var_11))))) ? (max((max(14383989556344982181, var_9)), -6356917368500990069)) : (max(var_1, ((min(4118397107, var_2))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_0 [i_0])));
        var_15 = (min(var_15, (((arr_1 [i_0]) * (arr_0 [i_0])))));
        var_16 = var_0;
    }
    #pragma endscop
}
