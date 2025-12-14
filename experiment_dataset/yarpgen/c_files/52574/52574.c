/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (arr_0 [i_0] [i_0]);
        var_13 = (arr_1 [i_0]);
        var_14 = ((-((((-13932 && 63) || (arr_0 [i_0] [4]))))));
        var_15 = (min(var_15, ((63 ? (((192 ? 230169592 : -0))) : 1988305426692580485))));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 = (max(var_16, (arr_6 [i_1])));
        var_17 = 1002439447;
        var_18 = (-4064797703 ? (arr_8 [i_1]) : (arr_8 [i_1]));
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_19 = (max(((max(var_0, (!230169592)))), 106));
        arr_11 [i_2] [i_2] = (arr_9 [i_2]);
        arr_12 [i_2] = (((arr_10 [i_2] [i_2]) != (arr_10 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = (min(var_20, ((min(((~(arr_6 [i_3]))), (((arr_15 [i_3] [i_3]) - -var_10)))))));

        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            var_21 = (min(var_21, ((((~var_0) ? (((arr_16 [i_4 - 1]) - 59)) : ((~(arr_16 [i_4 + 2]))))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_22 = ((!((min(var_10, (max(59, (arr_21 [i_6] [i_6] [i_6] [i_6] [i_6 + 3] [i_6]))))))));
                            var_23 = arr_7 [i_5] [i_4 - 1];
                            var_24 = (((max((arr_0 [i_5] [i_6]), (arr_0 [i_4] [i_6 + 1]))) < var_8));
                            var_25 = ((-((min((arr_10 [i_6 - 2] [i_4 - 2]), var_11)))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_26 [i_3] = (arr_9 [i_3]);
            var_26 *= ((!(!14284222879748241890)));
            var_27 += var_2;
        }

        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_28 -= var_5;
                            var_29 = (arr_31 [i_11] [i_9]);
                            var_30 += -var_2;
                        }
                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 11;i_13 += 1)
                        {
                            arr_39 [i_13] [1] [i_10] [1] [i_3] |= -var_8;
                            var_31 = (arr_34 [i_11 + 2] [i_11 + 2] [i_13 + 2] [i_13 - 2]);
                            var_32 -= (((arr_6 [i_13 - 1]) < ((~(arr_0 [i_10] [12])))));
                            arr_40 [i_9] [i_9] [i_10] [i_9 - 3] [i_9] = ((((47 | (arr_1 [i_10]))) - ((~(arr_29 [i_10])))));
                            var_33 &= (arr_27 [i_3] [i_9] [i_10]);
                        }

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_34 = ((((((max((arr_23 [i_3] [i_3] [i_10] [i_10] [i_14]), var_2))) >= var_5)) && (arr_9 [i_3])));
                            arr_44 [i_3] [i_3] [i_10] [i_10] [i_14] = 216;
                        }
                        arr_45 [i_10] [i_9] [i_10] [i_10] = ((((!((min(var_6, var_7))))) && (((((3953148350 - (arr_34 [i_3] [i_3] [i_3] [i_3]))) - ((min((arr_24 [i_3] [i_3]), 55))))))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            arr_56 [i_3] [i_9 - 1] [i_15] [i_16] [i_17] [i_15] [i_16] = var_4;
                            var_35 = ((~(min((arr_33 [i_3] [i_3] [i_9 + 2]), (arr_48 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_17] [i_9 - 1])))));
                        }
                    }
                }
            }
            var_36 = var_8;
        }
    }
    var_37 = var_7;
    #pragma endscop
}
