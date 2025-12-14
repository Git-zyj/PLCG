/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_8 [i_0] [i_1] = (arr_3 [i_0]);
            var_14 = (arr_2 [i_0]);
            arr_9 [i_1] = 8687615788487306159;
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_18 [i_0] [i_2 + 2] [i_2] [i_4] = ((((-(arr_7 [4] [i_2]))) & (arr_6 [i_2])));
                        var_15 = (arr_0 [i_0]);
                        var_16 = (-9223372036854775807 - 1);
                        var_17 = ((!(arr_13 [i_4] [i_4] [i_4] [i_4])));
                    }
                }
            }
            arr_19 [i_2] [i_2] = (arr_11 [i_0] [i_0] [i_0]);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_18 = (arr_16 [i_0] [i_6]);
                    var_19 = (arr_22 [i_6]);
                }
            }
        }
        arr_25 [i_0] = (((!114) || 1152921504606846975));
        arr_26 [i_0] [i_0] = (((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) && 58903)) ? 9022003513345554550 : ((((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_10 [i_0]))))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_30 [0] |= -58885;
        arr_31 [i_7] = ((~(arr_29 [i_7])));
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        var_20 = ((1 ? ((max((arr_32 [i_8 + 1]), (arr_32 [i_8 + 1])))) : (arr_32 [i_8 - 1])));
        arr_34 [18] [18] &= (arr_32 [i_8]);
        var_21 = (-9223372036854775807 - 1);
        var_22 = (arr_32 [i_8]);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    arr_40 [i_9] [i_9] [i_10] = (arr_38 [i_8] [1] [i_8] [i_9]);
                    var_23 = (!((((arr_39 [i_9] [i_10] [i_9] [i_9]) ? (arr_35 [i_10]) : (min(16384, -8388844446211858352))))));
                    var_24 *= (max((arr_35 [i_8]), ((-(((arr_35 [i_9]) ? 8687615788487306153 : (arr_36 [i_8 - 1])))))));
                }
            }
        }
    }
    for (int i_11 = 3; i_11 < 10;i_11 += 1)
    {
        arr_43 [i_11] = ((arr_10 [i_11]) ? (min((arr_20 [i_11 - 2] [i_11] [i_11 - 2]), (arr_42 [0] [i_11 - 3]))) : -8388844446211858352);
        arr_44 [4] [4] |= (((arr_37 [i_11]) > (((-((max(0, (arr_41 [6])))))))));
        var_25 *= 9223372036854775793;
        var_26 = ((~(arr_38 [i_11] [i_11] [i_11] [i_11])));
    }
    var_27 += var_1;
    #pragma endscop
}
