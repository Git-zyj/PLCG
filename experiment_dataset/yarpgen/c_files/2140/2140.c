/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ? (min((((var_7 ? var_3 : var_4))), ((var_9 ? var_0 : var_8)))) : -1418163746));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (((-(var_5 == var_5))) == (arr_2 [i_2] [i_2 + 1] [i_2 - 1]));
                    var_14 = (min((arr_0 [i_0]), (((var_3 + (var_8 & var_1))))));
                }
            }
        }
        var_15 = 4259821700;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_16 = (min((((arr_8 [i_3]) ? (arr_7 [i_3] [i_3]) : (arr_6 [i_3]))), ((((max(var_2, var_10)) < ((((arr_8 [i_3]) <= var_3))))))));
        var_17 = ((+(min((arr_7 [i_3] [i_3]), 35145596))));
    }
    var_18 = (4259821687 % 2851604578);
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                var_20 -= (((((max((arr_12 [2] [i_4] [10]), (arr_13 [i_4] [i_5] [i_5]))))) | ((var_2 * (((var_4 > (arr_10 [i_5]))))))));
                var_21 = (min(var_21, ((((((arr_10 [i_4]) << (((arr_10 [i_4]) - 62498)))) | (arr_10 [i_4]))))));
            }
        }
    }
    #pragma endscop
}
