/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_15 = ((-(min(((var_1 ? var_6 : var_6)), var_10))));
                    var_16 = var_10;
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    var_17 = (((((var_4 ? var_9 : var_1))) ? var_13 : ((var_10 ? var_13 : var_5))));
                    var_18 = var_4;
                }
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_19 [i_1] = (min(((((((var_0 ? var_7 : var_13))) ? (!var_8) : (!var_3)))), var_9));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_19 |= var_12;
                            arr_22 [i_0] [16] [i_0] [i_4 - 1] [i_5 + 1] [i_5 + 1] [i_6] = var_3;
                            var_20 = (((((var_11 ? var_13 : var_9))) ? (((1 ? 1 : 1))) : ((var_7 ? var_12 : var_9))));
                            arr_23 [i_0] [i_1] [i_4 - 1] [i_5 + 1] [i_6] = ((var_2 ? (!var_13) : var_13));
                        }

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_21 = (max(var_21, (((((var_6 ? (((min(var_6, var_6)))) : var_7))) ? (min(((var_9 ? var_9 : var_10)), ((var_8 ? var_0 : var_2)))) : ((min(((var_11 ? var_10 : var_11)), ((1 ? 1 : 8192)))))))));
                            arr_26 [i_7] [i_7] = (((((var_11 ? var_6 : ((var_4 ? var_5 : var_8))))) ? ((((((var_3 ? var_13 : var_6))) ? (~var_4) : (((min(var_1, var_10))))))) : (((~var_4) ? (((var_0 ? var_8 : var_1))) : var_9))));
                            var_22 = ((((((((var_13 ? var_2 : var_1))) ? -27094 : ((var_11 ? var_4 : var_9))))) ? (max((~var_9), var_13)) : (((-9883282585062232255 ? (min(var_4, var_5)) : ((var_3 ? var_4 : var_0)))))));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_23 *= -var_3;
                            arr_29 [i_0] [i_8] [18] [i_0] [i_8] [i_4 - 3] = (((((8563461488647319342 ? 85 : -10))) ? var_6 : (((var_8 ? 1 : var_9)))));
                            var_24 = var_5;
                            var_25 = min((((-(min(3025254758, 1))))), (min(((min(var_13, var_13))), var_2)));
                            var_26 -= ((-(min(((var_3 ? var_8 : var_5)), ((var_2 ? var_3 : var_3))))));
                        }
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            arr_33 [6] [i_9] = (min(((-var_11 ? (((var_9 ? var_1 : var_1))) : ((var_2 ? var_6 : var_9)))), (max(((var_9 ? var_7 : var_12)), (!var_0)))));
                            var_27 *= var_9;
                            var_28 |= (min((((((var_10 ? var_12 : var_5))) ? (((var_3 ? var_6 : var_1))) : (max(var_3, var_9)))), var_1));
                            arr_34 [i_0] [i_1] [i_1] [i_4 + 1] [i_9] [i_9 + 1] = ((~((var_12 ? 1 : (min(var_9, var_0))))));
                        }
                    }

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_29 = ((~(max(-8563461488647319371, (((var_6 ? var_3 : var_11)))))));
                        var_30 = (((((var_6 ? (((var_12 ? var_4 : var_10))) : ((var_1 ? var_13 : var_7))))) ? ((~(~var_11))) : (((min(var_1, var_8))))));
                        var_31 = (max(var_31, -var_6));
                        arr_37 [i_0] = ((-var_0 ? ((((((1 ? 32759 : 1))) ? ((max(var_0, var_1))) : ((var_6 ? var_0 : var_0))))) : -var_4));
                        var_32 = (!1370097537);
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_41 [i_0] [i_1] [i_4] [i_11] = var_10;
                        var_33 = var_9;
                        arr_42 [i_0] [1] [14] [i_4] [16] = ((-((-((min(0, 1)))))));
                        var_34 *= (((~var_10) ? (((((var_8 ? var_5 : var_10))) ? ((var_5 ? var_12 : var_13)) : var_13)) : (((((var_13 ? var_8 : var_13))) ? ((min(var_3, var_1))) : -var_1))));
                    }
                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        var_35 *= var_2;
                        arr_45 [i_4] [3] [10] [i_12 - 1] = ((((((((var_9 ? 1 : 13197964578428452064))) ? 3524597382 : (max(1269712537, 1))))) ? (((((var_3 ? var_3 : var_13))) ? (~1) : ((var_12 ? var_7 : var_13)))) : ((((!(((var_12 ? var_9 : var_4)))))))));
                        var_36 = ((-15697 ? var_5 : 1744));

                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            var_37 = var_0;
                            var_38 = ((((min(((var_2 ? var_4 : var_7)), ((var_12 ? var_7 : var_6))))) ? var_1 : var_10));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            arr_53 [i_14] [i_1] [i_4] [i_12] [i_14] = var_1;
                            var_39 = ((-((var_8 ? var_11 : var_11))));
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_40 = ((~((-var_3 ? var_9 : var_3))));
                            var_41 = ((!(((~((var_9 ? var_10 : var_12)))))));
                        }
                        var_42 -= ((((((var_1 ? var_3 : var_2)))) ? var_0 : (((((var_10 ? var_4 : var_4))) ? ((min(var_13, var_6))) : 25819))));
                    }
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {

                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            var_43 = var_11;
                            arr_60 [i_16] [i_16] [i_16] [2] [i_16] = (9223372036854775807 ? (((((var_2 ? var_5 : var_12))) ? -359059936 : var_12)) : (((((var_10 ? var_13 : var_5))) ? var_11 : var_1)));
                            var_44 = ((var_0 ? var_2 : ((((var_6 ? var_13 : var_0))))));
                            var_45 = ((((!(((var_12 ? var_0 : var_0))))) ? (max(6401, 1257207032)) : (~-8)));
                            var_46 = (((((-((var_0 ? var_1 : var_13))))) ? (((var_0 ? var_4 : var_2))) : (max(var_7, (((var_11 ? var_8 : var_6)))))));
                        }
                        var_47 = (max(var_47, ((min(((min((!var_13), (min(var_12, var_0))))), -1)))));
                        var_48 = ((~(max(((var_12 ? var_9 : var_4)), ((min(var_3, var_11)))))));
                        var_49 -= (min(31290, (((min(var_6, var_0))))));
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            {
                                arr_66 [i_0] [11] [i_1] [5] [i_18] [i_19] = ((((max(-var_12, ((var_9 ? var_10 : var_10))))) ? ((var_13 ? (max(var_11, var_7)) : (((var_5 ? var_5 : var_1))))) : ((var_6 ? var_9 : (((var_10 ? var_8 : var_4)))))));
                                arr_67 [i_0] [i_1] = var_5;
                            }
                        }
                    }
                }

                for (int i_20 = 1; i_20 < 18;i_20 += 1)
                {
                    var_50 = var_8;
                    var_51 = ((var_7 ? (~var_5) : (((((var_6 ? var_4 : var_1))) ? (((min(var_10, var_5)))) : (max(var_7, var_8))))));
                }
                var_52 -= (((((((min(var_13, var_3))) ? (~var_8) : (!var_13)))) ? (((((var_13 ? var_6 : var_5))) ? ((var_2 ? var_2 : var_11)) : (!var_9))) : ((var_9 ? (~var_12) : (min(var_8, var_9))))));
            }
        }
    }
    var_53 |= ((((((!var_3) ? -var_2 : -var_0))) ? ((-((max(var_3, var_12))))) : var_10));
    var_54 = var_10;
    #pragma endscop
}
