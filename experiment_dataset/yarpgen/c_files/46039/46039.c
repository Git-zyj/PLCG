/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (((((((((arr_2 [i_0] [i_1]) ? (arr_4 [i_1] [20]) : (arr_4 [i_1] [i_0])))) ? (arr_2 [i_0] [i_0]) : (((arr_3 [i_0] [i_0] [3]) ? (arr_1 [i_1]) : (arr_0 [18])))))) ? (((((((arr_4 [19] [i_0]) ? (arr_1 [i_0]) : (arr_4 [i_1] [i_0])))) ? (((arr_3 [i_1] [5] [i_0]) ? (arr_2 [8] [i_1]) : (arr_3 [i_1] [i_0] [i_0]))) : (((arr_2 [i_0] [0]) ? (arr_2 [6] [i_1]) : (arr_2 [i_0] [i_1])))))) : (((arr_0 [i_0]) ? ((9223372036854775807 ? 1 : 11308306387334524399)) : (arr_4 [i_0] [i_1])))));
                var_11 *= ((((((arr_0 [i_0]) << (((arr_4 [10] [i_0]) + 63193379))))) % (((((((arr_0 [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [7] [i_1])))) ? 202445743 : (((arr_3 [i_0] [i_1] [i_1]) ? (arr_4 [i_0] [i_0]) : (arr_1 [11]))))))));
                var_12 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_1]))) % (arr_1 [i_1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_13 = (((((-(arr_1 [i_0])))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [14]))) : (((arr_1 [1]) ? (arr_5 [i_0] [i_2]) : (arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] = (arr_11 [i_4] [i_2] [13] [i_2] [i_1]);
                                arr_15 [i_0] [i_2] [i_2] [3] [i_4] = ((((((arr_12 [i_2] [i_3] [i_2] [17] [i_2]) ? (arr_6 [i_2] [17] [i_2]) : (arr_1 [i_0])))) ? (((arr_3 [i_1] [i_2] [i_3]) ? (arr_11 [i_4] [i_2] [i_2] [i_2] [i_0]) : (arr_7 [i_3] [14] [i_0]))) : (arr_8 [i_2])));
                                var_14 = (arr_12 [i_2] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2]);
                            }
                        }
                    }
                }
                var_15 = (((((((((arr_1 [20]) <= (arr_6 [i_0] [14] [i_0])))) % (arr_4 [10] [i_0])))) ? ((~(((arr_6 [i_0] [i_1] [i_0]) ? (arr_1 [i_0]) : (arr_4 [1] [i_1]))))) : (arr_3 [i_0] [11] [i_1])));
            }
        }
    }
    var_16 = ((var_5 / ((((var_8 ? var_4 : var_7))))));
    #pragma endscop
}
