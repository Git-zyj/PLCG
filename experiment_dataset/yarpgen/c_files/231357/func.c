/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231357
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(-1528707227211645911LL)));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] = ((unsigned short) var_1);
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                arr_14 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-5))));
                var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)51502)) ? (((/* implicit */int) (short)19)) : (((/* implicit */int) (unsigned short)51503)))));
                /* LoopSeq 4 */
                for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                {
                    var_21 *= ((/* implicit */unsigned int) var_3);
                    arr_19 [i_1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                    var_22 = (-(((/* implicit */int) arr_9 [i_3] [i_4])));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */short) (~(var_3)));
                        var_24 ^= ((/* implicit */short) ((unsigned int) var_9));
                        arr_23 [i_1 + 1] [i_2] [i_3] [i_4] [i_4] [i_5 + 1] = ((/* implicit */short) var_17);
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (((+(((/* implicit */int) var_14)))) > (var_17))))));
                        arr_24 [i_1] [i_2 + 1] [i_3] [i_4 + 2] = ((/* implicit */long long int) var_1);
                    }
                }
                for (unsigned int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) ((3393799742138094363ULL) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18)))))));
                        var_27 = ((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2] [i_6]);
                    }
                    arr_30 [i_6] [i_1 + 1] [i_2 - 2] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    var_28 = ((/* implicit */unsigned short) arr_12 [i_1 - 1] [(unsigned char)11]);
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 1; i_9 < 20; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_3 - 1]))));
                        arr_37 [i_1] [i_8 + 1] [i_3 - 1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)51512);
                    }
                    var_30 ^= ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_16))))));
                }
                /* vectorizable */
                for (unsigned short i_10 = 2; i_10 < 19; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 1; i_11 < 19; i_11 += 2) 
                    {
                        arr_44 [i_1] [i_1] [i_3] [(_Bool)0] [i_1] = ((/* implicit */unsigned int) ((arr_33 [i_11 + 1] [i_11] [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 1]) << (((/* implicit */int) ((unsigned char) 1962264966379152153ULL)))));
                        arr_45 [i_1 + 1] [i_2] |= ((/* implicit */int) arr_15 [i_1 + 1] [i_2] [i_10] [i_10]);
                        arr_46 [i_1 + 1] [i_11] [i_3] [i_10 + 1] [i_11] [i_2] = ((/* implicit */unsigned char) (unsigned short)51510);
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_50 [i_1] [i_2 - 1] [i_3] [i_3] [i_12] = ((/* implicit */signed char) ((unsigned short) arr_8 [i_10 - 2]));
                        arr_51 [i_2] = ((/* implicit */_Bool) ((unsigned short) (-(1311251102168448148ULL))));
                        var_31 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_1] [i_2 - 2] [i_3 - 1] [i_2 - 2] [i_12]))));
                        var_32 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_49 [i_1] [i_1] [i_1] [i_1] [i_1])) - (((/* implicit */int) var_10))))));
                    }
                    var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [10ULL]))));
                }
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        {
                            arr_58 [i_1] [i_2] [i_1] [i_13] [i_13] = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) arr_47 [i_1] [i_1] [i_13] [i_1] [(signed char)0] [i_3] [(unsigned char)15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))))));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_16))))))))) : (12259026280496172396ULL)));
                            arr_59 [i_1] [i_1] [i_13] [2ULL] [(unsigned short)0] [i_1] [i_14] = arr_31 [19ULL] [19ULL] [(unsigned char)14] [i_14] [(short)1];
                        }
                    } 
                } 
            }
            arr_60 [i_2] = ((/* implicit */int) arr_47 [(unsigned char)1] [i_2] [i_2 - 1] [(_Bool)1] [(signed char)12] [i_1] [i_1]);
            arr_61 [i_1] [i_1] = ((/* implicit */short) (((~(((/* implicit */int) arr_38 [i_1 + 1] [i_1 + 1] [i_2 - 2] [i_1])))) > (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_0)))))))));
            arr_62 [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((signed char) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (((unsigned int) (~(12259026280496172402ULL))))));
        }
        for (int i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            arr_67 [i_1] &= ((/* implicit */unsigned char) ((_Bool) ((unsigned int) max((var_18), (((/* implicit */unsigned char) var_5))))));
            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) 3939420767U))));
            arr_68 [i_1] &= var_0;
        }
        var_36 = ((/* implicit */unsigned char) (+(((unsigned int) max((arr_1 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) (unsigned short)51516)))))));
    }
    for (unsigned char i_16 = 1; i_16 < 20; i_16 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_17 = 0; i_17 < 21; i_17 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_18 = 0; i_18 < 21; i_18 += 2) 
            {
                var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
                arr_78 [i_16] [10U] [i_17] [i_17] = ((/* implicit */unsigned char) var_2);
                var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
            }
            for (short i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                arr_81 [(signed char)12] [i_16 - 1] [i_17] [i_19] = ((/* implicit */unsigned short) var_6);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_20 = 1; i_20 < 19; i_20 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) arr_54 [i_16] [i_17] [i_19] [i_20]))));
                        var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
                    }
                    for (unsigned short i_22 = 1; i_22 < 20; i_22 += 2) 
                    {
                        arr_90 [i_16] [i_16] [i_17] [i_19] [i_20] [i_22] [i_20] = ((/* implicit */signed char) arr_54 [i_16] [i_16 - 1] [i_16] [i_16 - 1]);
                        var_41 = ((/* implicit */unsigned long long int) var_6);
                        arr_91 [i_16] [i_17] [i_19] [i_20] [3ULL] = ((/* implicit */_Bool) (signed char)6);
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) 15052944331571457248ULL))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_23 = 2; i_23 < 17; i_23 += 2) 
                    {
                        arr_94 [13] [19ULL] [13] [13] [i_20] = (!(((/* implicit */_Bool) arr_1 [i_16 - 1] [i_23 - 2])));
                        arr_95 [i_16] [(short)15] [i_20] [i_19] = ((/* implicit */signed char) (~(var_2)));
                        arr_96 [i_19] [i_17] &= ((/* implicit */unsigned long long int) var_9);
                    }
                    for (int i_24 = 0; i_24 < 21; i_24 += 2) 
                    {
                        arr_100 [i_20] [i_20] [i_19] [i_19] [i_19] [i_20] [i_24] = ((/* implicit */int) var_7);
                        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((unsigned int) arr_76 [i_16 + 1] [i_20 - 1])))));
                    }
                    var_44 = ((unsigned char) var_0);
                }
                for (unsigned char i_25 = 0; i_25 < 21; i_25 += 2) 
                {
                    var_45 = var_13;
                    var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
                    arr_105 [i_16] [i_16 - 1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) arr_92 [i_16] [i_17] [i_16] [i_19] [i_25] [i_25] [i_17])) : (((/* implicit */int) var_5))))));
                }
            }
            /* LoopNest 3 */
            for (unsigned short i_26 = 4; i_26 < 17; i_26 += 2) 
            {
                for (unsigned short i_27 = 0; i_27 < 21; i_27 += 2) 
                {
                    for (unsigned long long int i_28 = 1; i_28 < 19; i_28 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) var_16))));
                            var_48 &= (unsigned short)877;
                            arr_114 [(signed char)8] [(signed char)8] [i_28 + 1] [i_28 - 1] [i_28] [i_28 + 1] [i_28 + 1] = ((/* implicit */short) var_12);
                        }
                    } 
                } 
            } 
            arr_115 [i_16 - 1] [i_16] [i_17] = ((/* implicit */int) arr_27 [(unsigned char)14] [4ULL] [i_16] [i_16] [i_17] [i_16 + 1] [i_16]);
        }
        for (unsigned long long int i_29 = 0; i_29 < 21; i_29 += 2) 
        {
            var_49 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_16] [i_16] [i_16 + 1] [i_16 + 1] [i_29] [i_29] [i_16]))));
            var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (~((+(((/* implicit */int) (short)-9)))))))));
            var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) var_13))));
            arr_118 [i_16 - 1] [(unsigned short)6] = (~(((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_16] [i_29]))))));
        }
        var_52 = ((/* implicit */unsigned short) (short)-17);
        /* LoopNest 2 */
        for (int i_30 = 0; i_30 < 21; i_30 += 2) 
        {
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_32 = 0; i_32 < 21; i_32 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_33 = 0; i_33 < 21; i_33 += 2) 
                        {
                            arr_134 [i_16 + 1] = ((/* implicit */signed char) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((12259026280496172417ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))) : (((unsigned long long int) arr_6 [i_31] [i_16]))));
                            arr_135 [i_16] [(unsigned char)5] [i_31] [i_33] [i_16] = var_14;
                            arr_136 [i_16] [i_30] [i_16] [i_32] [i_33] [i_33] = 6187717793213379217ULL;
                        }
                        arr_137 [i_16] [i_16] [i_31] [i_31] = ((/* implicit */signed char) ((max((((int) 273016067)), (((/* implicit */int) (_Bool)1)))) & ((-(((/* implicit */int) (short)0))))));
                        arr_138 [i_16 + 1] [i_16 + 1] [i_31] [i_32] = 1516781061901473248ULL;
                        var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_119 [(unsigned short)13]))) : (72057585447993344ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))))))));
                    }
                    for (signed char i_34 = 2; i_34 < 20; i_34 += 2) 
                    {
                        arr_141 [i_16] [i_16 - 1] |= ((unsigned long long int) (~((~(((/* implicit */int) var_16))))));
                        arr_142 [i_30] [i_30] = ((/* implicit */unsigned char) min((3393799742138094349ULL), (3115429952617504528ULL)));
                        arr_143 [i_16 - 1] [i_30] [i_31] [i_34 - 2] = arr_57 [i_16] [i_16] [i_34] [i_31] [2ULL];
                    }
                    var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) var_10))));
                    var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) ((short) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_14))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_35 = 2; i_35 < 20; i_35 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_36 = 0; i_36 < 21; i_36 += 2) 
            {
                var_56 = (!(((/* implicit */_Bool) (short)1)));
                arr_150 [i_16] [i_16] [(unsigned char)7] = ((/* implicit */signed char) arr_21 [i_16] [i_16] [(_Bool)1] [i_35] [14U] [14U] [i_36]);
            }
            arr_151 [i_16] = ((/* implicit */long long int) arr_76 [i_35] [(_Bool)1]);
        }
        for (long long int i_37 = 3; i_37 < 20; i_37 += 2) 
        {
            var_57 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) | ((+(var_7)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_38 = 1; i_38 < 19; i_38 += 2) /* same iter space */
            {
                var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) min((arr_47 [i_38 + 1] [7LL] [i_37] [i_37] [7LL] [i_16 + 1] [i_16]), (((/* implicit */unsigned long long int) ((unsigned char) var_4))))))));
                arr_158 [i_37] [i_37] [i_38] [i_38] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_27 [i_16] [i_37 + 1] [i_38 + 2] [i_38 - 1] [i_37] [i_38] [i_37 + 1])))));
            }
            for (unsigned long long int i_39 = 1; i_39 < 19; i_39 += 2) /* same iter space */
            {
                var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned char) 6888923209886757018ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_16] [i_16])) ? (arr_139 [i_39 - 1] [i_39] [i_37] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))))) : ((~(arr_98 [i_37 + 1] [(unsigned char)16] [(unsigned char)16] [i_37 - 2] [i_37 + 1]))))))))));
                arr_161 [i_37] = ((/* implicit */_Bool) var_4);
            }
        }
    }
    var_60 = ((/* implicit */_Bool) 2575388089416156701LL);
    var_61 = var_11;
}
