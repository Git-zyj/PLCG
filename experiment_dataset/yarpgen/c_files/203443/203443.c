/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(-var_15, (((((var_7 ? 8 : 242))) ? ((var_7 ? 248 : 248)) : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = 27;
                                arr_15 [i_2] = (33554431 && 2097151);
                                var_20 = (((((7 ? (!9113589877499382748) : 16))) && (65528 ^ 234905410)));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_1] = (arr_4 [i_0] [i_1] [i_1]);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_23 [i_7] [i_7] [i_7] [i_5] [i_7] [i_1] [i_0] = (max(1, -1));
                                var_21 = (arr_5 [i_0] [i_0]);
                                var_22 = (max(var_22, (((((!(arr_12 [i_6] [i_1] [i_5] [i_6] [i_7] [i_0]))) ? (arr_12 [i_6] [4] [4] [4] [14] [i_6]) : ((max((arr_12 [i_5] [i_1] [22] [i_6] [i_6] [i_7]), (arr_12 [i_5] [i_1] [i_5] [i_6] [i_7] [i_6])))))))));
                                arr_24 [i_7] = (max((arr_4 [i_0] [i_1] [i_7]), (((arr_21 [i_7] [i_6] [i_5] [i_1] [i_0] [9]) ? (((-(arr_8 [i_0])))) : (arr_18 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
