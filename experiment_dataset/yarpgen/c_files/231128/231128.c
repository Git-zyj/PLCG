/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(((var_9 ? (arr_3 [i_1] [i_1] [i_2]) : 1)), ((~(arr_5 [i_2] [i_2] [i_1] [4])))));
                    arr_8 [i_0] |= ((!41246) ? (min((max(254, var_6)), ((65535 ? 5834 : 254)))) : (((!(var_11 && 134217727)))));
                    var_17 = (((((238 ? (!6270350407054045215) : -24536))) ? ((1 ? ((min(254, 22760))) : ((var_3 ? -22759 : (arr_5 [i_0] [i_1] [i_2] [i_2]))))) : (((arr_5 [i_0] [i_1] [10] [i_1]) ? 22760 : ((max(147, 1)))))));
                    arr_9 [i_0] [i_0] = ((-((((((arr_3 [i_0] [i_2] [i_2]) ? 1073741823 : var_4))) ? (!2226193370) : (~0)))));
                }
            }
        }
    }
    var_18 = -var_5;
    var_19 = (22750 + 65535);
    var_20 = ((~((-(var_15 <= var_2)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_21 = var_13;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_27 [i_7] [i_3] [i_3] [i_3] [i_3] [i_3] = 0;
                                arr_28 [i_4] [i_4] [i_5] [i_7] [i_4] = ((((var_4 < (min(127, (arr_19 [i_3] [i_3] [i_3] [i_3]))))) && ((((arr_25 [i_4] [i_4] [i_4] [i_6] [i_7] [i_4]) - ((((arr_21 [i_3] [i_4] [i_5] [i_6]) == var_7))))))));
                            }
                        }
                    }
                    arr_29 [1] [i_4] [1] [i_4] = ((var_5 ? (arr_22 [i_3] [i_3] [i_5] [i_5] [i_3] [16]) : (arr_22 [i_3] [i_4] [i_5] [i_3] [i_3] [i_4])));
                }
            }
        }
    }
    #pragma endscop
}
