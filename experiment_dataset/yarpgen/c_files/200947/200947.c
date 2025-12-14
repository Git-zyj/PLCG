/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= 3516;
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        var_12 = var_6;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] = ((-70 ? 31395 : (!-31395)));
        var_13 = (max(var_13, (((arr_0 [i_1]) ? (arr_1 [i_1 + 1]) : ((((arr_3 [i_1] [i_1]) && (arr_0 [i_1 + 1]))))))));
    }
    var_14 = (226 << (((((var_4 & var_3) + 6897044985264930838)) - 7)));
    #pragma endscop
}
