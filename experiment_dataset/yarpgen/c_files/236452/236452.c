/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (min((((+(((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 0))))), (((arr_0 [i_0]) ? ((var_13 ? 1 : 5079937832239790000)) : ((((((arr_0 [i_0]) + 2147483647)) >> (13366806241469761615 - 13366806241469761612))))))));
        arr_2 [i_0] = (((-((~(arr_0 [i_0]))))));
    }
    var_16 *= ((((5079937832239789996 == 5079937832239790010) >= (((-2147483647 - 1) ? var_4 : var_9)))));
    var_17 = ((+(min((var_14 >= 3077663582779186373), ((var_3 ? var_14 : var_14))))));
    #pragma endscop
}
