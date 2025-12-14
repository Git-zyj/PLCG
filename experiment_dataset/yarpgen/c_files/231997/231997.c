/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((56828 ? 65504 : 8706))) ? (((var_2 < ((2227748199 ? 6 : 21300))))) : (((((var_14 ? var_10 : var_17))) ? (!var_19) : var_13))));
    var_21 = (!(((var_8 ? ((var_17 ? var_19 : var_19)) : var_0))));
    var_22 = ((var_4 ? ((((var_9 ? var_15 : var_2)) | ((var_5 ? var_13 : var_2)))) : (((!2067219125) * ((var_7 ? var_8 : var_17))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_4 [i_1] = (((((var_5 ? (((var_15 ? var_14 : var_10))) : var_7))) ? var_13 : ((((var_5 ? var_6 : var_3)) & ((var_3 ? var_12 : var_3))))));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_7 [3] [i_1] [2] = var_7;
                arr_8 [10] [i_1] [i_2] = ((var_18 ? var_13 : ((var_9 ? var_7 : var_15))));
                arr_9 [i_2] = ((var_18 ? ((var_11 ? ((var_17 ? var_10 : var_16)) : var_17)) : var_2));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [2] [i_1] [9] [2] [2] = (((((((var_6 ? var_2 : var_5))) + var_14))) ? ((-(var_7 >> var_10))) : ((((((var_19 ? var_8 : var_7))) ? (var_8 && var_15) : var_10))));
                            arr_18 [8] [i_1] [1] [i_2] [i_1] [8] = 1;
                            arr_19 [i_3] = ((((var_10 - var_15) ? -var_8 : ((var_11 ? var_17 : var_12)))));
                            arr_20 [i_2] [i_2] = (((((var_19 ? ((var_0 ? var_5 : var_2)) : var_4))) ? ((206 ? -16384 : -72057593769492480)) : ((((((var_11 ? var_3 : var_8))) ? var_10 : ((var_4 ? var_19 : var_6)))))));
                            arr_21 [4] [i_1] [i_1] [i_2] [6] [i_1] [10] = ((((((var_1 ? var_15 : var_8)))) ? (((((var_11 ? var_19 : var_19))) ? -63 : (var_13 - var_10))) : (((var_11 > (var_1 == var_0))))));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_25 [10] [i_5] [i_1] [i_2] [i_5] = (((((((var_4 ? var_16 : var_17))) ? var_19 : var_10)) != var_2));
                    arr_26 [i_1] = ((var_0 ? var_5 : (((var_16 - var_16) ? ((var_12 ? var_5 : var_3)) : ((var_2 ? var_4 : var_2))))));
                    arr_27 [i_1] [i_1] = ((-var_16 % (((var_14 ? ((var_4 ? var_8 : var_19)) : ((var_12 ? var_17 : var_13)))))));
                }
            }
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_37 [3] [i_7] [i_8] = ((((((var_6 << (var_3 - 23318)))) ? (((var_11 ? var_15 : var_11))) : ((var_6 ? var_16 : var_13)))));
                        arr_38 [i_0] [i_6] [i_7] [10] = ((((((var_1 ^ var_16) ? var_1 : (((var_14 ? var_2 : var_3)))))) ? (((var_9 ? var_0 : var_13))) : var_15));
                        arr_39 [9] [7] [4] [8] [4] = (((((var_11 ? var_9 : var_5))) * var_10));
                        arr_40 [8] [8] [i_7] [1] [5] = (var_18 ? (~var_14) : (var_13 == var_11));
                    }
                }
            }

            /* vectorizable */
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                arr_44 [i_0] [2] [5] [i_9] = (var_12 | var_13);
                arr_45 [i_0] [i_6] [i_9] = (((((var_18 ? var_5 : var_0))) ? -var_13 : var_0));
                arr_46 [5] = -var_18;
            }
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_57 [i_0] [i_11] [i_10] [3] [i_12] [i_6] [i_11] = (((((-((1 ? 31099 : var_19))))) ? (((((var_12 ? var_13 : var_9))) ? ((877391915437191516 ? 3 : 31)) : var_18)) : var_1));
                            arr_58 [i_6] [i_11] [i_11] [0] = var_4;
                            arr_59 [1] [i_6] [4] [4] [i_10] &= var_19;
                        }
                    }
                }
                arr_60 [1] [i_0] [i_6] [i_10] = (((((var_5 ? (((var_17 ? var_5 : var_17))) : ((var_10 ? var_7 : var_1))))) ? var_10 : ((var_12 ? 27 : var_1))));
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 8;i_14 += 1)
                {
                    {
                        arr_66 [i_0] [i_6] [i_13] [i_14] = (((((1 ? 49574 : 13200158874880274308))) ? var_13 : ((var_12 << (((var_13 + 11003) - 12))))));
                        arr_67 [6] [i_0] [i_6] [i_13] [i_13] [i_14] = (((var_8 ? ((var_15 ? var_16 : var_11)) : (((var_4 ? var_6 : var_10))))));
                        arr_68 [i_0] = (var_6 ? (-20701 || 2113221915) : (((((var_10 ? var_15 : var_13))) ? ((var_0 ? var_4 : var_18)) : ((var_14 ? var_18 : var_19)))));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
        {
            arr_72 [i_15] [6] [10] = ((((var_19 ? var_15 : var_1))) ? ((var_18 ? var_0 : (!var_6))) : (((var_11 & var_8) | ((var_8 ? var_4 : var_17)))));
            arr_73 [i_0] = 1527743791;
            arr_74 [1] [1] = ((((((((var_3 ? var_16 : var_3))) ? (3 == 142) : var_13))) ? var_9 : var_1));
        }
        arr_75 [1] = (((!var_17) ? ((var_3 ? var_12 : ((var_13 ? var_12 : var_0)))) : var_9));
        arr_76 [i_0] = (((((~var_13) <= var_4)) ? (((var_1 ? var_4 : var_5))) : ((var_1 ? (((var_16 ? var_6 : var_2))) : ((var_19 ? var_1 : var_15))))));
        arr_77 [9] = -4;
    }
    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        arr_81 [i_16] [i_16] = ((((((((var_19 ? var_9 : var_13))) ? ((var_15 ? var_19 : var_3)) : (-77 || -2113221931)))) ? (((((var_13 ? var_5 : var_5))) ? var_8 : ((var_3 ? var_5 : var_6)))) : var_19));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 8;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 10;i_20 += 1)
                        {
                            {
                                arr_90 [i_20] [i_17] [2] [i_18] [i_18] [i_17] [i_16] = ((var_16 ? (((((var_1 ? var_12 : var_2))) ? var_7 : (var_8 && var_4))) : ((((-var_4 != ((-4 ? 65535 : 4095))))))));
                                arr_91 [i_17] [i_18] [i_19] [1] = ((((((var_15 ? var_4 : var_4)) ? ((var_17 ? var_13 : var_2)) : 1))));
                                arr_92 [i_16] [1] [i_17] = (((((3720391838 ? var_11 : 3908160151))) ? 15997785376192173931 : ((142 ? 2147483641 : ((1551793641 ? 15021150063736671325 : (-9223372036854775807 - 1)))))));
                            }
                        }
                    }
                    arr_93 [i_17] = ((var_6 ? var_3 : -16488));
                    arr_94 [i_16] [i_16] [6] [i_18] = ((((var_15 ? ((var_13 ? var_8 : var_16)) : (((var_11 ? var_17 : var_6))))) <= (((var_15 ? var_8 : var_8)))));
                    arr_95 [i_17] = var_11;
                    arr_96 [5] [i_17] [i_18] = (((((var_16 ? var_18 : var_1))) ? ((((var_6 ? var_13 : var_19)))) : (((!(var_9 ^ var_5))))));
                }
            }
        }
        arr_97 [3] = var_19;
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 1;i_21 += 1)
    {
        arr_101 [17] = ((var_5 ? var_13 : var_2));
        arr_102 [i_21] = (386807150 & 16508);
    }
    #pragma endscop
}
