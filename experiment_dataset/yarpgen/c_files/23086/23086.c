/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_9));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (((max(16059293119566589420, 146))));
        var_17 = (max((max((((arr_1 [11]) - (arr_1 [i_0]))), 687182058)), ((max(3607785245, 3607785249)))));
        arr_2 [i_0] [i_0] = (min((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))), (((min((arr_1 [i_0]), (arr_1 [i_0]))) + (-9223372036854775807 - 1)))));
        var_18 = (max(var_18, ((((((((min(16059293119566589451, (arr_1 [i_0])))) ? ((((4471 > (arr_0 [4]))))) : 687182054))) ? (max((max((arr_1 [i_0]), 11125043214761859762)), (arr_0 [i_0]))) : 1269565217)))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        arr_5 [i_1] = 0;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_13 [i_3] [i_3] [i_2 - 1] [i_1] = (arr_10 [i_1 + 1] [i_2 - 1] [9] [i_3] [i_4] [i_4]);
                        var_19 = (min(var_19, (((-64 ? (arr_9 [10] [8] [11] [i_4]) : (((-63 + 2147483647) << (587350404072336823 - 587350404072336823))))))));
                    }
                }
            }
        }
        arr_14 [i_1 - 4] [i_1] = (((arr_3 [i_1]) && (((9223372036854775807 ? (arr_8 [i_1]) : (arr_4 [3]))))));
    }
    var_20 |= ((var_8 ? (((min(35, var_13)))) : (var_7 ^ var_8)));
    #pragma endscop
}
