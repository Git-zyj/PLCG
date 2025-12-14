/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, 1));
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((~(min((arr_4 [5]), (arr_0 [i_1] [i_1])))));
        arr_6 [i_1] [i_1] = (arr_1 [i_1]);
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        arr_9 [i_2] = 250;
        arr_10 [i_2] [i_2] = (max(((~(((6 == (arr_1 [i_2])))))), 250));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 = ((((-((-(arr_11 [i_2] [i_2] [i_3]))))) >> ((((max((arr_0 [i_2 - 2] [i_2 - 2]), 196))) - 181))));
            var_19 = (min(var_19, (((18446744073709551615 << ((3738972812 / ((((arr_12 [i_2 + 1] [i_2]) << (((arr_1 [i_2]) - 14485149173878170101))))))))))));
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = (min(((((min((arr_16 [i_4]), 185))) << 1)), -21358));
        arr_18 [1] [i_4] = ((((((arr_15 [i_4]) ? (arr_13 [i_4]) : (arr_13 [i_4])))) ? (((arr_13 [i_4]) & (arr_13 [i_4]))) : (arr_15 [i_4])));
        var_20 = (min(((min((arr_13 [i_4]), (arr_14 [i_4])))), ((190 ? 15158147008976153480 : 144719491))));
    }
    #pragma endscop
}
