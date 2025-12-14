/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~((0 ? var_3 : 10005536342887507843))))) ? var_5 : var_6));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 &= (!var_9);
        var_13 = 232235492;
        var_14 = (min(var_14, var_2));
        var_15 = (arr_2 [7]);
    }
    var_16 ^= var_7;
    #pragma endscop
}
