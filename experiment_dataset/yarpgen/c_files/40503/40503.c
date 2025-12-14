/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = ((max((min(var_2, (arr_2 [i_0] [i_0]))), (var_12 != var_7))));
        arr_3 [i_0] = (min((((((min((arr_1 [i_0]), 188))) > ((var_3 ? -28 : var_10))))), (arr_0 [i_0])));
        var_17 = (max(var_17, (((min(-4031418933266080820, 28))))));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_18 = (arr_5 [i_1]);
            var_19 = (min(var_19, ((((arr_0 [i_1 - 2]) - (arr_0 [i_1 + 2]))))));
            arr_6 [i_0] [i_0] = (arr_4 [i_1 - 1]);
        }
        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_0] [14] = ((~((((((arr_8 [i_0] [i_0]) | 127))) | (min((arr_5 [i_0]), (arr_0 [i_0])))))));
            var_20 = ((var_1 ? var_7 : (min((arr_2 [i_0] [i_2]), var_4))));
            arr_10 [i_0] [i_0] = (max(65535, ((1092839312 ? 1092839312 : -117))));
            var_21 += var_0;
            var_22 = (min(var_22, (((((135 ? (arr_7 [i_2 - 1] [12]) : (arr_7 [i_2 - 1] [1]))) < ((max((arr_7 [i_2 - 3] [0]), var_11))))))));
        }
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            var_23 = (min(var_23, (((((-(arr_1 [4]))) * ((~(arr_1 [2]))))))));
            var_24 = (((arr_5 [17]) * (((((((~(arr_2 [i_3] [i_0])))) <= (((arr_7 [i_0] [i_0]) ^ 2526568136))))))));
        }
    }
    var_25 = var_11;
    #pragma endscop
}
