/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, 0));
                                arr_13 [1] [i_1] [i_1] [i_2] [i_4] [i_0] = ((((max((arr_5 [i_0]), (arr_5 [i_2])))) ? (((arr_1 [i_0] [i_1]) - (arr_5 [i_0]))) : (((arr_5 [i_3]) ? (arr_5 [i_3]) : (arr_5 [i_4])))));
                                arr_14 [i_1] [i_3] = ((!(((1 ? 37 : ((188 ? 3583284930 : 1)))))));
                            }
                        }
                    }
                    var_19 *= (((arr_2 [i_0]) ? ((((2885144659 ? (arr_6 [i_1]) : var_12)) * 24)) : ((((!1) ? (arr_12 [i_0] [i_0] [i_0]) : ((((!(arr_0 [i_1] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_20 += ((!((((arr_11 [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 2] [1] [i_5] [5]) ? (arr_11 [i_2] [i_5 - 1] [i_5 + 1] [i_5 - 2] [10] [i_6] [11]) : (arr_11 [i_5] [i_5 + 1] [6] [i_5 + 3] [i_6] [i_6] [8]))))));
                                var_21 = (arr_3 [i_5 - 2]);
                                var_22 = (arr_12 [i_0] [i_1] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, -var_11));
    var_24 = (~-836107836);
    #pragma endscop
}
