/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = (((((~var_3) + 2147483647)) << (var_5 - 834717818)));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_2 [i_0]) < (((min(var_1, (arr_1 [i_0] [i_0 - 1]))))))));
        arr_4 [i_0] [i_0] = (min(((1 ? (((max(var_2, -21570)))) : (~var_5))), 111));
    }
    var_12 = (min(var_12, (((var_7 <= (((3487919533953445817 ^ 128) ? -var_1 : (!var_2))))))));
    #pragma endscop
}
