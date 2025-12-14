/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max(((var_10 / (var_17 - var_4))), (((((max(var_13, var_2))) != (min(var_0, var_12))))))))));
    var_19 = (max(((((min(9007199250546688, 32767))) ? ((var_15 ? -11459 : 272814361893036178)) : var_17)), var_14));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_20 = (min(var_20, ((((arr_1 [i_0]) & var_10)))));
    }
    #pragma endscop
}
