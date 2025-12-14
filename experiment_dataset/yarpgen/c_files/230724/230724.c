/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((((((arr_0 [i_2 + 1] [i_2 + 1]) & (arr_0 [i_2] [i_2 - 3])))) ? -var_10 : (((arr_0 [0] [i_2 + 1]) / (arr_0 [i_2 - 1] [i_2 + 1]))))))));
                    var_21 += (arr_3 [i_2]);
                }
            }
        }
    }
    var_22 += (((!var_17) ? (((var_17 / var_15) ? ((var_19 ? 16140901064495857664 : 24)) : (((var_7 ? var_7 : 145))))) : var_18));
    var_23 = (max(var_23, var_17));
    var_24 = (max(var_24, var_8));

    for (int i_3 = 3; i_3 < 7;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_17 [i_3] [i_4] [i_3] [i_5] = ((784512122197406214 ? var_1 : (((arr_0 [i_3] [0]) * var_3))));
                arr_18 [i_3] = 65531;
                arr_19 [i_5] [i_5] [i_5] [i_3] = (((!2179666608204399503) >= (65514 & 10185)));

                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    var_25 |= ((-var_1 ? -52228 : (arr_10 [i_4])));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_27 [i_3] [7] = ((arr_25 [i_5]) / var_10);
                        arr_28 [i_6] [i_7] [i_6] [0] [i_4] [4] [i_6] |= ((573 && (arr_20 [i_4] [2] [i_5] [4])));
                        var_26 = (!65531);
                    }
                }
                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    var_27 = -var_10;
                    var_28 ^= (((arr_22 [i_3 + 3] [i_3 + 1] [i_4] [i_8 - 2]) != ((4210042168246462475 ? 5 : (arr_6 [i_3] [i_3] [i_3] [0])))));
                    var_29 += (((arr_3 [i_4]) ^ 3));
                }
            }
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                arr_35 [i_3] = (((((((65514 ? 65530 : 65530))) ? (-2147483647 - 1) : 6330))) ? (arr_16 [i_9 + 1] [i_3] [i_3 - 3] [i_3 + 2]) : (max((((arr_34 [1] [i_3] [i_4]) / (arr_20 [i_3] [i_4] [i_4] [0]))), (((var_1 != (arr_11 [i_3] [i_4])))))));
                var_30 -= ((!((!(arr_24 [i_4])))));
                var_31 = (max(var_31, (((((((((var_3 ? (arr_31 [i_3 - 1] [0] [i_9 - 1] [8] [i_4] [i_3]) : (-9223372036854775807 - 1)))) ? 65530 : ((((arr_3 [i_4]) < 5)))))) ? (((!(arr_7 [i_9 - 1] [i_9 - 1] [i_3 + 4] [i_3 + 4])))) : (arr_2 [i_4] [i_4]))))));
            }
            var_32 *= ((1 > (((arr_23 [1] [i_3 + 3] [i_3 - 1] [i_3 - 1] [i_3 + 3] [i_3 + 3]) % ((-(arr_5 [i_3] [i_4] [i_4] [i_3])))))));
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            arr_39 [3] [i_3] = ((((min(var_14, (arr_38 [i_3] [i_3] [i_3])) - 4168896874156238313))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    {
                        arr_45 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = 1;
                        arr_46 [i_11] [i_3] = ((-((min((arr_32 [i_3 - 2] [i_3 - 1] [i_3 + 4]), 65530)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 3; i_13 < 9;i_13 += 1)
        {
            var_33 = (((arr_23 [i_3] [i_3] [i_13] [i_13] [i_13 - 3] [i_13]) >= (((arr_25 [7]) ? 1 : (arr_43 [i_3 + 2] [i_3] [i_3] [6])))));
            var_34 ^= var_19;
            arr_50 [i_3 - 3] [0] [i_3] = (--235);
        }
        var_35 |= (max(((max(((max(17522, (arr_0 [i_3] [i_3])))), var_12))), (arr_42 [i_3 - 1] [i_3 - 3] [0] [i_3 + 2])));
    }
    #pragma endscop
}
