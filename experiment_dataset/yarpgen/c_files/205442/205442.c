/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = -1;
        var_21 = (max(var_21, (((~(((((var_2 ? (arr_0 [i_0]) : 1))) ? (!1) : (!44))))))));
    }
    var_22 |= (max((-1 || var_2), var_11));
    var_23 = -42708;
    #pragma endscop
}
