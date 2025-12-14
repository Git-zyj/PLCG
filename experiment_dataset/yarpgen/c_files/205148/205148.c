/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] = (min((min(((var_13 ? (arr_8 [i_1] [i_3 + 1] [i_2] [2] [i_1]) : 24969)), (arr_6 [i_1] [i_4]))), -843862339));
                                arr_12 [i_0] [i_4] = ((((6300512860935010525 ? var_3 : (arr_0 [i_1] [i_1])))) ? (((arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (arr_8 [i_2] [i_2] [i_3] [i_4 + 3] [i_4]) : (min((arr_8 [8] [i_1] [i_2] [i_0] [i_4]), 40540)))) : (((arr_5 [i_1] [i_1] [6]) ? 1375830899 : ((var_6 ? var_9 : 843862343)))));
                                arr_13 [i_0] [i_2] [i_0] = (((((var_1 ? 43217 : (arr_9 [10] [i_1] [i_4 - 1] [i_3] [i_0] [i_3])))) ? (min(((min(-15196, var_7))), ((255 ? 17 : 1073733632)))) : ((min(3, var_8)))));
                                arr_14 [i_0] [i_0] [i_2] [i_3 + 1] [i_4 + 1] = ((-11 ? (min(((var_3 ? var_5 : (arr_10 [7] [i_0] [i_2] [i_3] [i_0] [i_0] [i_0]))), var_15)) : (((min(9, (-32767 - 1)))))));
                            }
                        }
                    }
                    arr_15 [2] [i_1] |= ((!((min((-9223372036854775807 - 1), (!8))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_25 [18] [i_5 - 1] [i_5 - 1] = ((((min(var_17, (((var_13 ? 243 : var_3)))))) ? (((arr_23 [i_5 - 1] [i_6 - 1]) ? var_15 : (arr_23 [i_5 - 1] [i_7]))) : (((((min((arr_21 [i_6]), 843862359))) ? (!3111754186) : 46977)))));
                    arr_26 [i_7] [i_5] |= ((((arr_16 [i_5] [i_6]) ? var_0 : 2640141398771255321)));
                    arr_27 [i_6] [i_6 + 1] [i_6] [i_6] = (!(((((min((arr_19 [i_5]), var_10))) ? var_12 : (((min(31524, 2453))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    arr_37 [i_8] [i_8] [i_8] = (min(((min((arr_33 [i_8] [i_9] [i_10]), var_11))), (~var_14)));
                    arr_38 [i_10] [i_9] [i_10] &= 22329;
                    arr_39 [i_8] [i_9] [i_10] [i_10] = ((!(((-((-(arr_16 [i_8] [i_9]))))))));
                    arr_40 [i_8] [i_9] [i_8] = 43213;
                }
            }
        }
    }
    #pragma endscop
}
