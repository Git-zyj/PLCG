/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_1;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = -1;
        var_14 = (((min((arr_0 [i_0] [i_0 - 1]), (arr_0 [i_0 - 1] [i_0 + 2])))) ? (max(5441820636050437377, 1)) : (((max(0, (arr_0 [i_0 + 2] [i_0 - 1]))))));
    }
    #pragma endscop
}
