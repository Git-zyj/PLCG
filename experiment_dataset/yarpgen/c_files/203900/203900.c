/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_10 = ((-(max(((var_5 ? (arr_1 [i_0]) : var_0)), (((!(arr_0 [i_0] [i_0]))))))));
        var_11 = ((((max(((14 ? 0 : -13711)), 13709))) ? 41 : -13727));
        var_12 |= (((((-(arr_2 [i_0] [i_0])))) ? (((min(var_9, (arr_2 [i_0] [i_0]))))) : (((var_9 > var_0) ? (((arr_2 [i_0] [i_0]) ? var_7 : (arr_2 [i_0] [i_0]))) : (arr_1 [i_0])))));
        var_13 = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (((~(arr_2 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                {
                    arr_11 [i_3] [i_3] [i_3] = (max(((((arr_5 [i_3 + 1]) >= (arr_5 [i_3 - 1])))), (((min(38, (arr_4 [i_1])))))));
                    var_15 = ((-(arr_7 [i_3 + 2])));
                }
            }
        }
    }
    var_16 = ((var_9 < (((min(-13711, 805306368)) - var_9))));
    #pragma endscop
}
