/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min((-1120887759 == var_12), (min(var_9, 16711680))))) ? (min((min(var_12, var_10)), ((-25199 ? var_7 : var_0)))) : -475670551));
    var_17 = (max(var_17, (((-(((var_10 % 65531) - var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_18 = var_5;
                    arr_6 [i_0] [i_1] [i_2] = (min(((max(((var_12 ? var_12 : 89)), (((52285 >> (var_7 - 1674845986))))))), var_14));
                    var_19 = (((((((min(var_2, var_7))) ? ((var_0 ? var_13 : var_12)) : (((var_4 << (var_3 - 16067817215143950817))))))) && ((min(var_12, var_1)))));
                    arr_7 [i_2] [i_1] [i_0] |= (min(((((min(var_9, var_8))) ^ var_5)), var_6));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = (var_11 ^ var_9);
                    arr_13 [i_0] [i_1] [i_3] = -var_0;
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    var_20 = ((62272 == (var_12 != var_7)));
                    arr_16 [i_0] [i_1] [i_4] = ((var_7 ? ((7 ? var_3 : var_4)) : (!var_13)));
                    var_21 = (((var_8 ? var_2 : var_2)));
                    var_22 = ((~(~var_8)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] = var_5;

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_7] [i_5] [i_1] [i_7] = (475670550 + var_13);
                            var_23 *= -var_6;
                            var_24 = (!var_13);
                            var_25 += ((-(var_8 >= var_11)));
                            var_26 = (max(var_26, (((var_12 << (var_13 - 10297627894169391083))))));
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_27 = (((var_11 != var_0) ? (89 || var_14) : ((var_9 ? var_2 : var_14))));
                            arr_31 [i_8] [i_6] [i_5] [i_1] [i_8] = ((var_0 ? var_7 : var_10));
                            var_28 = (max(var_28, ((((~var_8) / -75)))));
                            var_29 = -var_2;
                            var_30 = (((!475670547) >> (var_4 - 6573563359218386383)));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_31 = ((var_11 ? var_13 : var_0));
                            var_32 = (max(var_32, (-var_11 == var_6)));
                            var_33 = var_8;
                            arr_35 [i_9] [i_9] [i_5] [i_9] [i_0] = var_4;
                        }
                        var_34 = (((-8 > 10) >> 18));
                        var_35 = (max(var_35, (var_5 || var_5)));
                    }

                    for (int i_10 = 3; i_10 < 22;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            arr_43 [i_0] [i_10] [i_5] [i_10] [i_11] = (((var_10 ? var_11 : var_0)));
                            var_36 -= (((var_9 > 3) | ((-8620504968955579284 ? 2751312951 : var_4))));
                        }
                        var_37 = var_6;
                    }
                    for (int i_12 = 3; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] = ((var_2 ? var_8 : ((var_1 ? var_5 : var_8))));
                        var_38 -= (((!var_15) | var_10));
                    }
                    for (int i_13 = 3; i_13 < 22;i_13 += 1) /* same iter space */
                    {

                        for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                        {
                            arr_53 [i_0] [i_14] = ((((var_1 << (var_5 - 54009))) ^ -var_11));
                            var_39 = var_2;
                        }
                        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                        {
                            var_40 = (max(var_40, (((var_12 ? var_3 : var_11)))));
                            arr_57 [i_15] = (var_4 | var_5);
                            arr_58 [i_0] [i_0] [i_5] [i_13] [i_15] |= ((-((var_9 ? 475670527 : var_4))));
                        }
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            var_41 |= ((var_4 ? var_9 : -475670525));
                            var_42 = (((var_2 < var_3) < var_14));
                        }
                        arr_62 [i_13] [i_5] [i_1] [i_0] [i_0] [i_0] = (~var_4);

                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            var_43 = var_11;
                            var_44 += (var_6 <= var_4);
                            arr_67 [i_1] = (var_15 | var_13);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 23;i_19 += 1)
                        {
                            {
                                var_45 = (max(var_45, (var_0 <= var_0)));
                                var_46 = (var_8 ^ var_12);
                                var_47 = (((((4 ? var_10 : var_11))) || var_13));
                            }
                        }
                    }
                    arr_73 [i_5] [i_5] [i_1] [i_0] = var_12;
                }
                var_48 = ((((min(var_7, var_14))) ? (((((7 ? 65508 : var_2))) ^ var_3)) : 2));
            }
        }
    }
    var_49 = ((~(((var_4 & var_7) ^ (((max(var_6, var_9))))))));
    var_50 = ((((~(min(-11, var_2)))) * (((((max(var_2, var_5)))) ^ ((var_10 ? var_8 : var_4))))));
    #pragma endscop
}
