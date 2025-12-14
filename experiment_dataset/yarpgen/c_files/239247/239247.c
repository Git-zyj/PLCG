/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_16 | 195);

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = arr_0 [i_0];
        arr_2 [i_0] [i_0] = (((14860115000683457353 == 1895932541) > (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = min(var_2, (((min(18446744073709551615, (arr_1 [i_1]))) << (195 - 187))));
        var_21 = (max(var_21, ((((((((arr_3 [0]) < (arr_0 [i_1]))))) != (((arr_4 [i_1] [i_1]) & (arr_4 [i_1] [i_1]))))))));
        var_22 = (((arr_1 [i_1]) - var_17));
    }
    #pragma endscop
}
