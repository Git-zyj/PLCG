/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((max(1413005533, 2538239455)));
        var_11 = max((((((arr_1 [i_0 - 1]) < (arr_0 [i_0 + 2]))) ? var_7 : (var_10 & var_3))), (((-(arr_0 [i_0 - 2])))));
        var_12 = (max((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 2]))), ((((arr_1 [i_0 + 2]) < var_8)))));
        arr_3 [i_0 - 1] = ((-(max((max(var_10, (arr_1 [i_0]))), (var_7 - var_0)))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 = (((min((var_0 < var_3), var_8))) ? (max(((max(-5, 67108863))), (arr_0 [i_0 + 1]))) : (max(((-(arr_4 [i_0 + 1]))), (arr_0 [i_0 - 1]))));
            var_14 = (((((((((arr_5 [6] [i_1]) & var_7))) ? ((215435357 ? 0 : 16)) : (!67108873)))) ? ((((arr_5 [i_0 - 1] [i_0 - 2]) & (arr_5 [i_0 - 1] [i_0 - 2])))) : var_9));
            var_15 = (((~var_6) ? ((((arr_0 [i_0 - 2]) < (arr_0 [i_0 + 2])))) : var_10));
        }
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_16 ^= ((((max(((((arr_6 [3] [3]) < var_7))), (max(var_0, var_4))))) ? 1 : (((((arr_7 [i_2]) ? (arr_7 [i_2]) : var_0)) ^ (((max(var_5, var_7))))))));
        var_17 = ((!(((((var_10 >> (((arr_7 [i_2]) - 2116749916)))) & (~var_4))))));
    }
    var_18 = ((((max(-var_2, (((3720904364 ? 7 : -30285)))))) ? ((var_6 ? (var_4 ^ var_6) : (~var_8))) : (((~(max(var_0, var_0)))))));
    var_19 = var_7;
    #pragma endscop
}
