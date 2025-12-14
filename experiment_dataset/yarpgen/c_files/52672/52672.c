/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (min(var_19, ((min((((9223372036854775807 >= (((min(230, 230))))))), ((230 << (25 - 14))))))));
        var_20 = ((((230 ? 1 : 231)) != (!var_11)));
        var_21 = (((-(min(var_1, 1)))));
    }
    var_22 = var_10;
    var_23 = ((((min(191, -933626385))) ? ((var_7 ? ((var_2 ? 4294967293 : -435442342)) : ((((-435442334 + 2147483647) << (((-435442334 + 435442356) - 22))))))) : (((var_1 ? (324361222 << var_10) : var_10)))));
    #pragma endscop
}
