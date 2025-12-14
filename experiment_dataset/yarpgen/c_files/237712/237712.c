/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((((max(-1677120986, 63))) ? var_11 : (57231 % 20322)))));
    var_13 = var_3;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0] = (arr_1 [i_0 - 1]);
        var_14 = (max(var_14, (min((((85 | 2219924194276145700) < ((var_11 * (arr_1 [1]))))), (arr_0 [i_0] [i_0 - 3])))));
    }
    var_15 = ((9223372036854775807 ? -65 : 9223372036854775807));
    #pragma endscop
}
