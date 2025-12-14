/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = var_6;

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_19 += (max(65510, (arr_7 [i_2] [6] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [5] [5] [i_2] [i_1] [i_0] = (((~(arr_12 [i_2 + 1] [i_3] [i_4 - 3]))));
                                var_20 += ((~((((-4255037632974437250 || 1) || ((!(arr_8 [i_4] [i_3] [10] [i_2] [i_1] [i_0]))))))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    var_21 = ((!(((arr_1 [i_0] [i_1]) || (arr_16 [i_1] [i_1] [i_1] [i_0])))));
                    arr_17 [i_1] = (--86);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_22 = var_11;
                                arr_23 [i_7] [i_6] [i_5] [i_1] [15] = (~(((!(((var_11 * (arr_4 [i_0] [i_1]))))))));
                            }
                        }
                    }
                }
                arr_24 [7] [i_1] = (max(0, (arr_18 [i_0] [15] [i_0] [i_0])));
                arr_25 [i_0] = 4715;
                var_23 = 3845335435569707179;
            }
        }
    }
    var_24 = var_6;
    #pragma endscop
}
