/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 |= var_7;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (((((1 ? var_2 : (arr_0 [i_0])))) ? var_14 : (((arr_2 [3] [3]) * (arr_0 [i_0])))));
        arr_4 [i_0] [i_0] = (min(-22215, (max(-var_13, (((arr_1 [i_0]) ? 22343 : (arr_1 [i_0])))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 = (max((((43203 << 1) ? (arr_2 [i_1] [i_1]) : (min((arr_7 [i_1]), (arr_1 [i_0]))))), (((-(arr_8 [i_0] [i_0]))))));
            arr_9 [i_1] [i_1] [i_1] = ((1 >> ((((min(-9024, 22242))) + 9024))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_12 [i_2] = (min(((((arr_5 [i_0] [i_2] [i_2]) && ((min(var_11, 1)))))), (((((1 ? 1 : (arr_2 [i_0] [i_0])))) ? (min((arr_2 [i_0] [i_2]), var_8)) : (((arr_10 [i_2] [i_2]) ? 32760 : (arr_5 [i_2] [i_2] [i_0])))))));
            var_19 += var_10;
        }
    }
    #pragma endscop
}
