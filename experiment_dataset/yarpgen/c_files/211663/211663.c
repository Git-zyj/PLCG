/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0 - 1]) / ((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))));
        arr_4 [i_0] [i_0] = (min(((((max(var_6, -3011883413754050072))) - (min(4716613864548807263, (arr_1 [i_0]))))), var_2));
    }
    #pragma endscop
}
