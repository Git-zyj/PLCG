/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_17 = ((!(arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] [i_1] = (min(((~(arr_4 [i_0 + 1] [i_1] [7]))), ((((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : (arr_1 [i_0 + 3] [i_0 + 3]))))));
            var_18 = ((!((min((min(6944419016096866126, 51508)), (arr_1 [i_1] [i_0]))))));
            var_19 ^= ((arr_2 [10]) ? ((((arr_3 [i_0 + 2] [i_0 + 2]) ? ((((!(arr_2 [i_1]))))) : ((3380330837 ? 721374993 : 1))))) : -5944461238952502026);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_8 [12] [i_2] [14] = (((((max((-9223372036854775807 - 1), var_5))) ? (914636458 || var_11) : (max(9004854821862744772, (arr_3 [i_0] [i_2]))))));
            var_20 = (min(914636461, (max((~var_7), (~20760)))));
            var_21 = var_0;
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_3] = var_3;
            arr_12 [0] [i_3] = ((1 ? ((~((9889817767957394423 >> (((arr_3 [i_0] [15]) - 36)))))) : ((var_9 ? (!13005415783502761849) : ((-(arr_9 [i_3])))))));
            var_22 ^= -var_1;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_16 [16] [i_4] [i_4] = (((var_0 ? var_6 : var_8)));
            arr_17 [i_0] [i_0] [i_4] = (~1);
            var_23 ^= (~-4);

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [4] [i_5] [8] = (arr_10 [11] [12] [i_5]);
                            var_24 = ((+(min(1697701070, (((1 ? (arr_24 [i_6] [i_5] [i_0]) : 30746)))))));
                            var_25 = (max(var_25, 65535));
                        }
                    }
                }
                var_26 *= (!-3);
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                var_27 = (arr_14 [12]);
                var_28 = (((arr_4 [i_8] [i_8 + 1] [i_8]) ? (arr_14 [i_8 - 2]) : 13551269343722344143));
                var_29 ^= ((var_11 ? 3380330837 : (arr_22 [i_8 + 2] [i_8] [i_8 - 1] [i_0 + 2] [i_0])));
                var_30 += (((arr_23 [14] [i_4] [i_4] [i_4] [i_8]) * (arr_0 [i_0 - 1])));
            }
        }
        arr_30 [i_0] = ((((var_12 ? (max(2430112990, 11)) : ((max(253581531, (arr_13 [i_0] [i_0] [i_0])))))) | (((max(-107, 62999))))));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        arr_33 [i_9] [i_9] = ((30910 < (arr_32 [i_9])));
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_31 = ((var_16 ? var_12 : (20760 % var_15)));
                        arr_43 [i_9] = var_9;
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_32 *= (arr_39 [1] [20]);
                        var_33 = 16356;
                    }
                    var_34 = (((((~(arr_40 [0] [i_9] [i_10] [i_11])))) ? var_12 : ((~(arr_40 [i_9] [i_9] [20] [i_9])))));
                }
            }
        }
        var_35 += (((max((arr_34 [i_9]), (arr_34 [i_9]))) ? (((var_5 >= (arr_34 [i_9])))) : (var_10 != 3221)));
        arr_47 [i_9] = ((~(((arr_46 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) / var_14))));
        var_36 = (max((arr_36 [i_9] [i_9]), (((!(arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
    }
    var_37 = (min(65524, var_7));
    #pragma endscop
}
