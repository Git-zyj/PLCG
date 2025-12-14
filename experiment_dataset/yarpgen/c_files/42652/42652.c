/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 79;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = ((((120 >= ((-1535586498 ? 1 : (arr_1 [i_0])))))));
        var_20 *= ((0 >> ((((17953 ? (arr_0 [6]) : ((30287 ? 841 : 1)))) - 20048))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = (min((((52897 * var_7) ? (arr_4 [i_1]) : ((var_18 ? 17592186044416 : (arr_5 [i_1]))))), ((((arr_4 [7]) ? var_9 : (arr_4 [i_1]))))));
        arr_7 [7] = 2475027085;
        arr_8 [i_1] = ((((var_1 & ((var_12 ? (arr_5 [i_1]) : var_15)))) | (arr_4 [i_1])));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_12 [i_1] [i_2] [i_2] = (arr_9 [i_2] [i_1] [i_1]);
            var_21 = (min((((arr_4 [i_1]) | (arr_5 [i_1]))), 189));
        }
    }
    #pragma endscop
}
