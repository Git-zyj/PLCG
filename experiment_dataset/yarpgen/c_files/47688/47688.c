/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((max((var_5 % var_11), (62090 ^ var_6))) <= (((max(-568344171, 687886669))))));
        arr_5 [i_0] [i_0] = (((((arr_2 [i_0]) | 0)) & 568344171));
        arr_6 [i_0] [i_0] = -var_0;
        arr_7 [i_0] = (((arr_2 [i_0]) ^ ((1241584967 ? 0 : (arr_2 [i_0])))));
    }
    var_13 = (var_5 <= 1);
    #pragma endscop
}
