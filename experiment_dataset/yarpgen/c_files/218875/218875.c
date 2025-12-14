/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (-60534 & (arr_5 [i_2 - 1]));
                    arr_7 [i_0] [i_2] [5] [i_2] = (((arr_3 [i_0] [i_2]) <= (arr_6 [i_0] [i_2])));
                    var_15 = (((arr_5 [i_2 - 2]) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_5 [i_2 - 1])));
                }
            }
        }
        var_16 = (max(var_16, (((arr_5 [i_0]) % (arr_0 [i_0] [i_0])))));
        var_17 ^= (0 * var_13);
    }

    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_18 = (max(var_18, (((arr_3 [i_3 - 1] [i_3]) * (1 < 1)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_20 [i_5] [i_4] [i_4] [i_3] = ((!(arr_2 [i_3] [i_3] [i_6])));
                        var_19 = (min(var_19, (((((var_12 / (arr_0 [i_3 - 1] [i_3 - 1]))) / (min((arr_0 [i_3 - 1] [i_3 - 1]), (arr_0 [i_3 - 1] [i_3 - 1]))))))));
                    }
                }
            }
        }
        arr_21 [i_3] [10] = (arr_2 [i_3] [i_3] [i_3]);
        var_20 += ((8467 >> ((((min(102, (arr_3 [i_3] [i_3 - 1])))) - 79))));
        arr_22 [i_3] = -1802906343;
    }
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_21 = (min((((((min(var_13, var_5))) << ((min(var_11, 17219)))))), (((var_3 ? (arr_24 [i_7 + 1]) : (arr_31 [i_7]))))));
                    var_22 *= (min(-2067922988, (arr_27 [i_7 - 2])));
                    var_23 = (arr_30 [i_7] [i_8] [i_7] [i_9]);
                    var_24 = (((min(((var_3 / (arr_29 [i_7 - 2] [i_8] [i_7 - 2]))), (arr_25 [i_7 - 2]))) << (((min((~var_12), (!185))) + 1395006544))));
                }
            }
        }
        var_25 = (((!(((-(arr_27 [i_7 + 1])))))));
    }
    #pragma endscop
}
