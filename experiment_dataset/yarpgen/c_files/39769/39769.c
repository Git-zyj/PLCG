/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (max(var_13, ((((max((((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0]))), var_8)) >= ((((!((((arr_2 [17]) ? (arr_1 [i_0] [i_0]) : 51))))))))))));
        var_14 |= (arr_1 [i_0] [i_0]);
        var_15 = (max(var_15, (((((min((arr_0 [i_0] [i_0]), -783276285))) ? (max((arr_2 [i_0]), (arr_2 [i_0]))) : (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_5 [i_1] = (--1495121520837284854);
        arr_6 [i_1] [i_1 + 1] = (-1495121520837284854 & 2);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_15 [i_2] [i_2] = (max(((max(var_4, 1))), (((!(arr_14 [i_1 - 1] [i_1 + 1]))))));
                    arr_16 [i_1] [i_1] [i_2] = (-32 ? (min(((min((arr_7 [i_1 + 1]), (arr_2 [i_1])))), (max(var_10, (arr_13 [i_3] [i_2] [i_1]))))) : (((arr_12 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) ? (arr_7 [i_1 - 1]) : (max((arr_10 [i_1] [i_3]), (arr_12 [i_1] [i_1] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_16 = ((var_5 && ((!((min(var_9, var_6)))))));
    #pragma endscop
}
