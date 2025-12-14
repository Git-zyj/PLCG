/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((-7645711297522371621 ? 7645711297522371620 : 20));
        arr_3 [i_0] = (((((var_6 ^ (arr_1 [i_0])))) ? -40 : (arr_0 [i_0] [i_0])));
    }
    var_12 = var_9;
    var_13 = ((((min((4 / 1), var_7))) ? 230 : (max((0 != var_0), ((7645711297522371620 ? -116 : 0))))));
    var_14 = ((~(((~var_1) | (0 ^ 3485179075)))));
    #pragma endscop
}
