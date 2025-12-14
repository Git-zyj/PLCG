/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [1] = (~var_3);
                                arr_14 [i_0] = (~((-((max(1, (arr_6 [i_0] [i_2] [i_4])))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_24 [i_7] [i_0] [i_5] [i_0] [i_0] = (((((~(((arr_3 [i_0]) ? (arr_2 [i_1]) : 32764))))) + var_6));
                                var_11 |= (min(((~((-(arr_10 [i_0] [i_1] [14] [i_6] [i_7]))))), (((!((((arr_9 [10] [i_1] [i_5] [i_6] [1]) ? var_6 : var_8))))))));
                            }
                        }
                    }
                }
                var_12 = (min((((-(max(var_8, 32734))))), 0));
            }
        }
    }
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_14 = (min(((((-10 + 9223372036854775807) << (((arr_25 [i_8 - 3]) - 17414757077147485628))))), (((~(arr_36 [0] [i_11 - 2] [10] [i_11]))))));
                            var_15 = ((((max(24, (~1)))) ? ((((61576 <= (arr_28 [i_10] [i_11]))) ? (~var_6) : (((max((arr_33 [1] [i_10] [i_9] [i_8 - 3]), -3787)))))) : ((max((arr_26 [i_9]), 250)))));
                            arr_37 [i_8] [i_11] = (((var_7 ? var_8 : 16872211315330906856)) | ((min(((32762 ? var_2 : 1)), ((min(1, var_7)))))));
                            var_16 = (min(var_16, (max((arr_34 [i_11 - 1] [i_10] [i_9] [i_9] [6] [6]), ((((((arr_26 [i_9]) != var_5)) || (((arr_33 [0] [i_9] [i_9] [7]) > 1090170633209661970)))))))));
                            var_17 = ((min(var_8, (min(var_10, var_6)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_18 = (arr_25 [i_8]);
                            var_19 = (min(var_19, var_7));
                            var_20 = ((var_10 ? ((+((((arr_30 [i_8]) == 1514373960))))) : 32759));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_21 -= min((~257698037760), -var_1);
                            var_22 = (~var_5);
                            var_23 = var_6;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
