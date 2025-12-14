/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 69;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((186 << (((min(var_12, 186)) + 6784581595937075135))))) ? 1 : ((187 >> ((((253 ? (arr_5 [i_1]) : (arr_3 [i_1]))) + 1205472405))))));
                arr_7 [i_0] [i_0] = (((((127 ? ((var_14 ? 158 : (arr_0 [i_0] [i_1]))) : ((max((arr_2 [i_0]), var_3)))))) ? ((69 ? 12798091071503929497 : 1)) : (~0)));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_2] = 0;
                    var_20 = ((18446744073709551615 ? ((min((arr_8 [i_0] [1] [i_2] [i_0]), var_1))) : (arr_2 [i_0])));
                    var_21 = ((((min((arr_4 [i_0] [i_1]), (arr_9 [i_1] [i_0])))) ? (min((arr_0 [i_0] [i_0]), 18446744073709551615)) : ((((!(((var_14 ? var_16 : var_8)))))))));
                    var_22 = ((0 ? (((((arr_9 [i_1] [i_1]) ? var_18 : (arr_9 [i_1] [i_2]))) ^ ((3820505648 ? var_17 : 70)))) : 187));
                }
                arr_12 [i_0] [i_1] = (!(arr_9 [i_0] [i_0]));
            }
        }
    }
    var_23 = var_15;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_28 [i_3] [i_3] [i_4] [i_5] [i_3] [i_6] [i_5] = ((((arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (~0) : ((174 ? -18633 : 186)))));
                                var_24 *= min((arr_25 [i_3] [i_3] [8] [i_6] [i_3] [i_7] [i_3]), ((~(arr_25 [i_3] [i_3] [1] [i_3] [i_3] [i_3] [i_3]))));
                                arr_29 [i_3] = ((-((max(var_0, 60)))));
                            }
                        }
                    }
                }
                var_25 = 0;
            }
        }
    }
    #pragma endscop
}
