/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~4088) ? var_2 : -var_13));
    var_17 = ((-(((!(~var_8))))));
    var_18 = ((~((((!var_0) <= (9223372036854775807 != 208))))));
    var_19 = (max((((var_3 - ((60326 ? var_2 : var_3))))), var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((~(23729 / -13321))))));
                                var_21 = ((~((var_9 ? 0 : var_3))));
                                arr_14 [4] [i_1] [i_2 + 1] [i_2] [i_3] [i_3] [12] |= ((~(((var_0 && (arr_10 [i_0 + 1] [i_0 + 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0 + 1] = (((13320 + 1987209669) ? ((459765163101711434 | (((-(arr_17 [i_0 - 1] [i_1] [i_2] [i_5] [i_6])))))) : ((35886 ? 1 : -2732053531808941238))));
                                var_22 = 4081;
                            }
                        }
                    }
                    var_23 = (max(var_23, ((((var_14 <= (arr_11 [i_0 + 1] [i_2 + 1] [i_2] [i_1]))) ? ((((!var_3) ? (arr_9 [i_0] [1] [i_1] [i_1] [i_2 - 1]) : 1))) : ((var_0 ? 1876941067 : ((-344077706 ? 1987209644 : var_0))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [i_2] [i_0] [i_8] [5] = (min((((~(arr_24 [i_0])))), (max((-13300 < var_10), var_12))));
                                var_24 = ((((~(min(var_0, (arr_23 [6] [i_0] [i_7] [i_7] [i_7]))))) <= ((min(-13320, (arr_24 [i_0]))))));
                                var_25 = ((-((11498 ? 1 : 16292))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
