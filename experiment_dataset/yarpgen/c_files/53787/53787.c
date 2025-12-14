/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = var_8;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = min(4294967286, 0);
        arr_3 [i_0] = ((min(var_2, (max(var_7, var_5)))));
        arr_4 [i_0 - 1] = (max((max(var_8, (min(0, 4294967275)))), ((max((max((arr_1 [0]), var_3)), (min(0, (arr_1 [i_0]))))))));
        arr_5 [i_0] [i_0] = min(((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))), (max(27, 2008823217)));
        arr_6 [i_0] = (((max(171788466, 3231659780))) ? (max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_11 [i_1] [i_1 + 1] = (min((arr_1 [i_1 - 1]), (arr_9 [i_1 - 1])));
        arr_12 [i_1 - 1] = 8279044666766984966;
        arr_13 [i_1 - 1] = (max(((785716872 ? 4294967283 : 4294967294)), ((max(171788460, 4123178836)))));
    }
    var_12 = ((~(max((min(24704689643554166, var_5)), ((min(1935446055, 13)))))));
    #pragma endscop
}
