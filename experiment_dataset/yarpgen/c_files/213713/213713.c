/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_6, ((((max(84, var_7))) ? var_13 : (var_15 == var_7)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = (((-(arr_2 [i_0]))));
        var_22 = ((-((103 ? -1136586549239043779 : (((~(arr_2 [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                var_23 = ((-1 ? (arr_7 [i_0] [i_0]) : ((4294967278 ? var_13 : (arr_9 [i_0] [i_0])))));
                arr_10 [i_1] [5] [i_2] = (((((1136586549239043805 ? (arr_5 [i_1] [4] [12]) : (arr_4 [i_0] [i_0] [15])))) ? 11 : (arr_6 [i_1 + 1] [i_2 - 1])));
                var_24 = (5 ? 120 : var_12);
                arr_11 [i_1] = (((arr_0 [i_2 + 1] [i_1 + 1]) >= (arr_4 [i_1 - 1] [12] [i_2])));
                var_25 = var_17;
            }
            var_26 = (((arr_8 [i_1] [16]) ? var_18 : (((((arr_8 [i_1] [i_1]) && 103))))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_14 [16] [7] = (arr_4 [7] [7] [i_3]);
            var_27 = (((((arr_6 [i_0] [i_0]) | var_8))) ? 0 : (((((-(arr_0 [16] [i_0]))) < (arr_2 [i_3])))));
            var_28 += (((arr_5 [i_3] [i_3] [i_3]) ? ((((var_8 ? var_9 : -1192598819)) ^ ((103 ? var_19 : (arr_4 [7] [5] [7]))))) : (max((arr_2 [3]), (arr_6 [12] [i_3])))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_29 = ((arr_8 [i_4] [i_4]) - (arr_2 [i_0]));
            arr_17 [7] [7] = ((~(arr_13 [i_0])));
        }
        var_30 = ((((max((max((arr_16 [i_0] [i_0]), 103)), (((2048848412 == (arr_15 [i_0] [i_0] [i_0]))))))) + (15 >= 4294967295)));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_21 [15] = (max((((!(((arr_5 [10] [10] [10]) || (arr_7 [i_5] [i_5])))))), (arr_9 [i_5] [i_5])));
        var_31 *= (((0 / 1067857697182234934) ? (min((arr_9 [i_5] [6]), (((arr_20 [i_5] [i_5]) ? var_1 : var_0)))) : ((((-(arr_16 [11] [9])))))));
        arr_22 [i_5] = (arr_2 [i_5]);
    }
    var_32 = var_2;
    var_33 = (((((((var_3 ? 209 : var_0)) >> (var_7 - 1640868134967684725)))) ? ((max((~var_2), (max(var_17, 161363186))))) : var_1));
    #pragma endscop
}
