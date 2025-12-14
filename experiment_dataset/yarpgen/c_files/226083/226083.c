/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = -84;

                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [i_1 - 2] [i_2] [i_3] [i_3] = var_14;
                        arr_11 [i_0] [i_0] [i_2] [14] = ((-(((!(((var_6 ? var_4 : (arr_2 [i_2])))))))));
                        arr_12 [i_0] [i_2] [i_2] [i_1] [i_2] [i_0] = (((~-23866) & (arr_3 [i_0] [i_2] [i_0])));
                        arr_13 [i_2] [i_2] = min((arr_2 [i_0 + 2]), (((var_13 - ((32767 | (-127 - 1)))))));
                    }
                    arr_14 [i_1 + 1] [8] |= var_3;
                    var_19 = (min(var_19, (((23866 ? 25 : 0)))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_17 [i_4] = (((arr_16 [i_4] [i_4]) / 12893696205435643245));
        arr_18 [i_4] = (-((((!(arr_8 [i_4]))) ? 92 : var_12)));
        var_20 -= ((~((~((13 ? var_8 : 2130706432))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                {
                    arr_25 [i_5] = ((71154217 / (-127 - 1)));
                    var_21 = (((((arr_7 [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7]) ? var_12 : var_8))) + ((210 ? 1023 : 1086662063)));
                }
            }
        }
        arr_26 [i_5] = var_6;
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] = (min(((((arr_0 [i_8] [i_8]) == (((!(arr_9 [4] [i_8] [i_8] [4]))))))), ((-6027379166032676754 ? 231 : var_2))));
        arr_30 [i_8] [i_8] = ((+(((~var_9) ? var_2 : ((((arr_15 [i_8]) ? var_12 : var_12)))))));
    }
    #pragma endscop
}
