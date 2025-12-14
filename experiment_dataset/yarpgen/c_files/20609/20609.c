/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 ? ((~(27 >> var_6))) : var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [8] |= max((((((max((arr_1 [i_3 + 3]), 1))) ? (arr_4 [i_0] [i_1] [i_1]) : var_14))), ((((((arr_4 [i_3 + 1] [i_2] [i_1]) / (arr_1 [i_0])))) ? (arr_4 [i_3] [i_3 + 2] [i_2 - 1]) : (arr_6 [i_0]))));
                            arr_10 [i_1] [2] [i_2] [i_3 + 3] = ((((arr_1 [i_2 - 1]) == (arr_3 [i_3] [i_1] [i_0]))) ? ((-(((arr_2 [i_1]) / (arr_5 [1]))))) : ((((arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 2] [5] [i_3 + 1]) ? (arr_0 [i_0] [6]) : (0 > var_4)))));
                        }
                    }
                }
                var_20 = 108;
                var_21 = (min(var_21, (((((~(((arr_4 [i_1] [i_1] [i_0]) ^ var_13)))) ^ (arr_4 [i_0] [i_0] [i_1]))))));
                arr_11 [i_0] [i_0] [i_1] = ((((((!(arr_5 [i_1]))))) * (((arr_7 [i_1] [i_1] [i_1] [i_1]) ? (arr_0 [5] [i_1]) : ((1 ? 147 : (-9223372036854775807 - 1)))))));
                arr_12 [i_0] [i_1] = (max((-32767 - 1), 1));
            }
        }
    }
    var_22 = (min(var_22, var_14));
    #pragma endscop
}
