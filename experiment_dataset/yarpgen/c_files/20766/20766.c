/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(((max(((max(var_2, 99))), (max(var_6, -32761))))), (min(((max(var_8, 1984))), (max(1032192, var_8)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = (max((min(((min(var_15, (arr_0 [i_0])))), (min(var_0, 1)))), ((max((min(0, var_6)), ((max((arr_0 [11]), (arr_0 [i_0])))))))));
        var_18 -= (max((min(((min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))), (max(0, 1032192)))), (max(((max(32747, (arr_1 [i_0] [15])))), (min(var_15, -1032199))))));
        var_19 = (max(var_19, ((min((max((min(var_9, (arr_1 [i_0] [i_0 + 1]))), ((min(var_8, var_15))))), ((min((max(var_11, 248)), ((min(7, var_14)))))))))));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_20 = (min((min((min((arr_3 [i_1]), (arr_2 [i_1]))), (min((arr_2 [i_1]), -96)))), ((min((min(var_2, var_1)), (max((arr_3 [10]), 1)))))));
        arr_4 [20] = (min(((max((min(1032198, (arr_2 [21]))), ((max(var_12, (arr_3 [i_1 - 1]))))))), (max(((min((arr_2 [i_1 - 2]), var_2))), (min((arr_3 [i_1 - 1]), 17179836416))))));
    }
    var_21 = (max(((max((max(1, var_1)), (max(var_2, 0))))), (min(((min(var_12, var_6))), (min(var_11, 18446744073709551615))))));
    #pragma endscop
}
