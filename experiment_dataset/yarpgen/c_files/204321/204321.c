/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_1] [11] [i_4] &= (16381656928340206460 >= 16381656928340206460);
                                var_18 = ((0 - (max((arr_10 [i_0] [i_1] [i_4]), (arr_14 [i_2] [i_0] [i_0])))));
                            }
                        }
                    }
                    var_19 = ((-((min((!var_5), (var_1 && var_15))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_25 [i_6] [i_6] [i_7] = (((max((max(255, 253)), 2))) || ((((max(17530561117363203605, 2065087145369345156)) ^ (((max(29, var_7))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_20 = 61389;
                                var_21 = ((((((!(arr_9 [i_7] [i_8]))))) > var_1));
                                var_22 = ((var_17 || (((2855889625 % (arr_29 [i_6 - 1] [1] [i_6] [i_6] [i_6 - 2] [i_6]))))));
                            }
                        }
                    }
                    var_23 = (((arr_22 [i_5] [i_5] [i_7]) / (var_1 & var_3)));
                    var_24 |= ((!(((((arr_6 [i_5]) ? var_1 : (arr_0 [i_7]))) < (arr_9 [i_5] [i_5])))));
                }
            }
        }
    }
    #pragma endscop
}
