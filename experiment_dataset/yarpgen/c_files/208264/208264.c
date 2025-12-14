/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((((!(arr_1 [7] [i_1]))) ? (var_2 != var_10) : ((~(2670857070783370163 | 754945736)))));
                var_13 = ((arr_0 [i_0]) ? (max(-754945737, (arr_0 [i_1]))) : ((~(arr_0 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = ((!(~89852585)));
                            arr_13 [i_0] [i_0] [i_0] |= ((!(((-(arr_6 [i_0] [i_1] [3] [i_0]))))));
                            arr_14 [i_0] [10] [i_0] [i_2] = (~(arr_5 [i_0] [i_1]));
                            var_15 = min((5111408057038322047 | 754945736), ((((~(arr_12 [i_2] [i_1] [i_2]))))));
                            arr_15 [1] [i_1] [1] [i_2] = ((+(((127 || 434546792) ? -2670857070783370163 : 754945729))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
