/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (min((min((arr_0 [i_0]), 2)), -94));
        arr_2 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_17 += (arr_4 [i_1 + 1] [i_1 + 3]);
            var_18 = ((((((arr_5 [i_0] [i_1 - 2]) ^ var_14))) ? (((((arr_4 [i_0] [i_1 - 2]) + 2147483647)) >> var_9)) : (((arr_4 [i_0] [i_1 + 2]) | (arr_4 [i_0] [i_1 - 1])))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_19 = ((((min((arr_7 [i_0]), (arr_4 [i_2] [i_2])))) ? (min((((arr_8 [i_0]) | var_9)), (~var_14))) : var_12));
            var_20 = ((min((arr_8 [i_0]), (arr_3 [i_0] [i_2]))) == (arr_3 [i_0] [i_0]));
            var_21 = (max(var_21, (((!((12517 <= ((64796 ? (arr_3 [i_0] [i_0]) : var_9)))))))));
        }
    }
    var_22 = (min(var_8, (((1 & var_5) ? var_14 : (!var_5)))));
    var_23 = (~var_11);
    #pragma endscop
}
