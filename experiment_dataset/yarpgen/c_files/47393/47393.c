/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_16 = (max(var_16, (((var_6 ? (min((max(-202942499969274988, 0)), (((77 ? (arr_1 [10]) : var_14))))) : ((((1849 ? 5829671620587686917 : var_7)))))))));
        arr_3 [i_0] = ((39293 ? 993195459 : ((((-9223372036854775803 <= 38108) < var_3)))));
        var_17 = ((5446748089350924010 ? (arr_0 [i_0] [i_0]) : (32767 + 1012286260)));
    }
    var_18 = (((((max(4178, -19)) ? var_3 : ((0 ? 477246657891571168 : 1))))));
    var_19 = (!var_14);
    #pragma endscop
}
