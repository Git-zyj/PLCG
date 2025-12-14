/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = -119;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = max((((((-(arr_10 [i_0])))) ? -158557688 : (max(var_11, (arr_11 [i_2 - 1] [i_2] [i_1] [i_2 - 1] [i_2] [i_0]))))), 83037713843714841);
                            var_19 = ((-(((!(((var_8 % (arr_10 [i_1])))))))));
                            arr_12 [i_3] [i_3] [i_2] = (-(!-2601932763335272851));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_5] = ((max(var_1, (arr_5 [i_6]))));
                                var_20 *= (!(arr_15 [i_0] [i_4] [i_4]));
                                var_21 += var_10;
                            }
                        }
                    }
                }
                arr_22 [i_0] [9] = ((((!(((~(arr_0 [i_0]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 8;i_9 += 1)
            {
                {
                    var_22 = ((-((((!13638254895210390757) == 2601932763335272851)))));
                    arr_31 [i_7] |= var_2;
                }
            }
        }
    }
    #pragma endscop
}
