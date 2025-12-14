/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (-2147483647 - 1);
        var_20 = ((((min(-1119403466587620447, 1119403466587620434))) || ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    var_21 = (max(var_21, (((((32767 || (((var_12 ? var_10 : var_9))))) ? (((((-10 ? 1119403466587620420 : -17072))))) : var_8)))));
    #pragma endscop
}
