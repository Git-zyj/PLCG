/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 *= 62;
        arr_2 [i_0] = (min((max((2696947705 > 1), (min((arr_0 [i_0] [i_0]), -8721065156654401414)))), (((1217431509046100942 ? 1217431509046100962 : (arr_0 [i_0] [15]))))));
    }
    var_19 = (max(42, 8721065156654401413));
    #pragma endscop
}
