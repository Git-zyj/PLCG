/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 948;
    var_19 = var_8;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 += 1;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_21 = (min(var_21, var_2));
            var_22 = ((!(((arr_4 [i_1] [i_1] [i_1]) != (((max(1, 60685))))))));
            var_23 = var_12;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_24 = 1;
            var_25 &= (arr_8 [i_0]);
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_26 = var_12;
                    var_27 = ((!((max(5961787536388100236, -6626459579938303882)))));
                    var_28 = (((max((var_17 + 63), (var_1 + 1))) ^ (((((max((arr_12 [i_4] [i_0]), var_14))) ? (-63 ^ 1) : (((arr_0 [i_3]) ? 115 : 0)))))));
                    arr_15 [i_0] = (max(((((((0 ? (arr_12 [i_4] [i_4]) : (arr_14 [i_0])))) ? (((-87 >= (arr_5 [i_0] [i_4])))) : (max(-1600048340, var_11))))), ((-(arr_7 [i_0] [i_3])))));
                    var_29 -= (((((((1 ? (arr_9 [i_4] [i_3] [i_4]) : 9))) & (10399130788443877648 + 636))) > (arr_7 [i_3] [i_3])));
                }
            }
        }
        var_30 = var_5;
    }
    var_31 = 4294967295;
    #pragma endscop
}
