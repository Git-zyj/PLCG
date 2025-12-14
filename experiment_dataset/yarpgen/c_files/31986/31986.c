/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max((((!(238 - 226)))), 3);
    var_21 = var_11;
    var_22 |= (((19 * 113) / var_19));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_23 = (max(var_23, ((min(var_13, 127)))));
                var_24 = 18;
                arr_5 [i_1] [i_1 + 1] = 9223372036854775807;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_25 = -9223372036854775807;
                    var_26 = max(4294967276, (min(19, 7449346519045484)));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_27 = (min(var_27, var_9));
                    var_28 |= (((arr_6 [i_0] [i_0]) == ((max((arr_8 [i_1 - 1] [i_1]), 32767)))));
                }
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    arr_15 [i_1] [i_1] [0] = 4294967292;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_29 = (((661410435 / var_15) / ((((arr_7 [i_6] [i_1] [i_4 - 1] [i_6]) / (arr_7 [i_0] [9] [i_4 - 1] [i_5]))))));
                                var_30 = (~5);
                            }
                        }
                    }
                    var_31 = ((((((arr_16 [i_4 - 1] [i_1] [i_4] [i_4 - 1] [i_4] [i_4]) - (arr_9 [i_4 - 1] [i_1] [i_4])))) && (-9223372036854775807 / 26)));
                }
            }
        }
    }
    #pragma endscop
}
