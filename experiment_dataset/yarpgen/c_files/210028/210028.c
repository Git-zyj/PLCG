/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((min(((var_4 ? var_2 : var_10)), (min(var_4, 0)))) > var_1));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 += (1 > -var_8);
        var_14 = (max(var_14, (((+(min((arr_1 [i_0 + 1]), (arr_0 [i_0 - 1]))))))));
    }
    #pragma endscop
}
