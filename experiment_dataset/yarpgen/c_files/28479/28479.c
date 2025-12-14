/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = (min((((arr_0 [i_0 - 1]) + var_12)), (max((!var_14), ((var_0 ? var_9 : var_13))))));
                                var_21 = (max(var_21, ((((((((max(var_13, -57))) ? (((var_7 ? -9148903409523792398 : -6))) : (var_12 << var_13)))) ? ((min(1, 80))) : -var_1)))));
                                var_22 -= (((max((((var_16 ? (arr_2 [1] [i_1] [i_1]) : (arr_1 [i_0] [1])))), var_6))) ? -var_0 : (((-(arr_1 [i_0] [11])))));
                                arr_12 [4] [i_3] [4] [4] = (min(((((arr_8 [10] [i_1] [1] [i_4]) || ((min(126, var_18)))))), ((-((var_7 + (arr_7 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_23 = var_11;
                                var_24 = (max(var_24, (((((max((15357 && 15), ((16 ? var_0 : (arr_14 [i_0] [i_0] [10] [i_2] [10] [i_2])))))) ? ((((max((arr_11 [i_0] [i_5] [i_0] [i_5] [i_6]), (arr_17 [4] [i_5] [7] [7] [i_5] [i_5])))) ? ((max(-96, var_11))) : (min(var_6, var_8)))) : (arr_7 [i_0] [2] [2] [i_0 - 1] [6] [i_0 - 1]))))));
                                var_25 ^= ((((((arr_13 [11] [i_2] [11] [8]) ? var_10 : var_13))) && ((min(var_2, (arr_2 [10] [i_0 - 1] [i_0 - 1]))))));
                            }
                        }
                    }
                    var_26 |= (min((-9122071437057205088 - var_14), ((((arr_6 [i_0 - 1] [0]) ? var_14 : (arr_6 [i_0 - 1] [i_0 - 1]))))));
                    var_27 = ((-(max(-81, var_4))));
                }
            }
        }
    }
    var_28 = (min(var_15, 1));
    var_29 = (min(var_29, var_12));
    #pragma endscop
}
