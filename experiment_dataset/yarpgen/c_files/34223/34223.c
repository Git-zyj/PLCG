/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 = (min((32 - 4294967295), (max(((var_2 ? 10 : (arr_1 [i_0 + 3] [i_0 + 1]))), 48))));
        var_12 = var_10;
    }
    var_13 = (((min(2047, 91))) ? 1 : 2752054668);
    var_14 |= ((((max(-var_3, ((max(8, 164)))))) ? var_2 : var_4));
    #pragma endscop
}
