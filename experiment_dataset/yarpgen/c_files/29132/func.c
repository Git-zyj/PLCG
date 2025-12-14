/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29132
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
    var_15 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)16), ((signed char)(-127 - 1))))))))) < (max((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (var_0)))));
    var_16 = ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) 511U);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 6; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [9U] [i_4] [i_4] = ((/* implicit */long long int) (~(arr_6 [i_3] [i_1] [i_1] [7LL])));
                                var_18 = ((/* implicit */unsigned char) ((signed char) var_14));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (86525239)))), (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) -1286364595831244914LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_0 + 1]))) : (((((/* implicit */_Bool) (+(arr_6 [i_0] [i_1] [7LL] [i_0])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -8445803956236808518LL)) : (arr_6 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90)))))));
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((var_11) < (max((945612867), (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [(signed char)1] [i_5]))))))) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) 86525230)), (arr_6 [i_2] [9LL] [i_2] [i_2]))) < (((/* implicit */unsigned long long int) (-(arr_12 [i_0] [i_1] [(signed char)7] [i_5])))))))));
                        /* LoopSeq 2 */
                        for (short i_6 = 2; i_6 < 9; i_6 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) ((long long int) var_2));
                            var_21 = ((/* implicit */int) arr_1 [i_5]);
                            var_22 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (short)-14611))) / (((8445803956236808518LL) << (((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) - (1)))))))));
                            var_23 |= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (arr_15 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 2; i_7 < 9; i_7 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) arr_1 [i_7 + 1]);
                            arr_24 [i_1] [8] [8] [8] [8] = ((/* implicit */int) ((long long int) arr_21 [i_7 - 2] [i_2 - 1] [i_2] [i_1 + 2] [i_0 + 1]));
                            arr_25 [i_0 - 3] [i_0] [i_1] [i_1] [i_1] [i_7 - 1] = ((/* implicit */unsigned int) var_3);
                        }
                        var_25 ^= ((/* implicit */signed char) var_11);
                    }
                    for (signed char i_8 = 3; i_8 < 7; i_8 += 2) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_1] [i_1 + 1] [4LL] [i_2 - 1] [i_2 - 1]);
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 86525239)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_8 - 2] [i_2] [i_8 + 1]))) : (arr_19 [i_0] [i_8 - 2] [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : (arr_19 [i_0] [i_8 - 2] [i_2] [i_1] [i_8 - 2] [i_8]))))));
                    }
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (((-(4147901759U))) << (((((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_8 [i_2 - 1] [(short)1] [i_2] [(short)1] [i_0])) ? (36028796482093056ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) - (18446744073709551511ULL))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_10 = 1; i_10 < 8; i_10 += 4) 
                        {
                            var_28 &= ((/* implicit */short) (-(((1125899906842620ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])) ? (4380953777673770054ULL) : (1810804616528987700ULL)));
                            arr_34 [i_2] [i_1] [i_2 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_1] [i_10 - 1]))));
                        }
                        for (int i_11 = 1; i_11 < 8; i_11 += 2) 
                        {
                            arr_37 [(short)0] [(short)0] [5U] [i_9] [i_9 - 1] [(signed char)1] [i_1] = ((/* implicit */unsigned char) (+(arr_5 [i_1])));
                            var_30 = ((/* implicit */int) ((var_9) > (var_7)));
                            var_31 = ((/* implicit */unsigned short) arr_1 [i_0 + 2]);
                            var_32 = ((/* implicit */unsigned int) arr_16 [i_1 + 1] [i_1 + 1] [i_0 - 4] [i_0 - 2]);
                            arr_38 [i_11] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (-(arr_23 [i_11 + 2] [i_11 + 1] [i_11 - 1])));
                        }
                        for (long long int i_12 = 2; i_12 < 8; i_12 += 4) 
                        {
                            var_33 = (i_1 % 2 == zero) ? (((/* implicit */signed char) (~(((((/* implicit */int) (signed char)122)) << (((((/* implicit */int) arr_18 [i_1] [i_9] [i_9] [(short)0] [i_1 + 2] [6] [i_1])) - (19049)))))))) : (((/* implicit */signed char) (~(((((/* implicit */int) (signed char)122)) << (((((((/* implicit */int) arr_18 [i_1] [i_9] [i_9] [(short)0] [i_1 + 2] [6] [i_1])) - (19049))) + (45749))))))));
                            var_34 = ((/* implicit */long long int) var_2);
                            var_35 &= ((/* implicit */unsigned int) var_5);
                        }
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_11)) : (var_3)))) ? (var_0) : (((/* implicit */long long int) ((unsigned int) var_0)))));
                        arr_42 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 524288LL)) : (arr_21 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 2; i_13 < 7; i_13 += 3) 
                    {
                        var_37 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-23)) ^ (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_38 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_36 [i_13 + 1] [i_1 + 1] [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_1]))));
                        arr_47 [i_1] = ((((/* implicit */long long int) var_11)) > (arr_9 [i_0 + 2] [i_0] [i_0] [i_0]));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_14 = 2; i_14 < 9; i_14 += 4) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_16 = 2; i_16 < 9; i_16 += 2) /* same iter space */
                    {
                        arr_56 [i_0] [i_15] [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)122)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_14] [i_15] [i_16] [5])), (var_3)))) ? (var_7) : (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_16] [i_14] [i_14] [i_0]))))))) : (((((/* implicit */_Bool) (-(3647586932799594187LL)))) ? (arr_43 [i_0] [i_16] [3U] [i_16 + 1] [i_0 + 2] [i_14 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)120)))))));
                        var_39 -= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) max(((-(((/* implicit */int) (signed char)5)))), (((/* implicit */int) max((var_4), (arr_45 [i_0] [i_16] [i_0] [i_16]))))))) : ((((-(var_14))) | (arr_43 [i_0] [i_14] [i_15] [i_16 + 1] [i_16] [i_15])))));
                    }
                    for (int i_17 = 2; i_17 < 9; i_17 += 2) /* same iter space */
                    {
                        arr_60 [i_17] [i_15] [i_15] [i_15] [i_14] [i_0 - 1] = max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (8445803956236808518LL)))))), ((!(((/* implicit */_Bool) ((-1297135718) / (((/* implicit */int) var_1))))))));
                        arr_61 [(unsigned short)2] [i_0] [i_15] [i_15] [i_0] [i_0] = ((/* implicit */signed char) var_0);
                        arr_62 [i_14] [i_14] [i_15] [i_0] [(unsigned short)8] [i_15] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_17] [i_17])) ? (((((/* implicit */int) arr_51 [3])) + (((/* implicit */int) arr_10 [i_15] [i_15] [i_14] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)2443)))))))) ? (max((((7335874575664073682LL) + (((/* implicit */long long int) 1145497658U)))), (((/* implicit */long long int) var_12)))) : (8445803956236808518LL)));
                    }
                    /* vectorizable */
                    for (long long int i_18 = 1; i_18 < 9; i_18 += 4) /* same iter space */
                    {
                        arr_65 [i_15] [i_14] [i_14] [i_14] [6ULL] [6ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_0 - 3] [i_15] [i_0] [i_0])) || (((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_0] [i_18 + 1]))));
                        arr_66 [i_15] [i_15] = ((/* implicit */_Bool) ((signed char) var_5));
                        arr_67 [(short)4] [i_15] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8786573494164335392LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)25144)) + (((/* implicit */int) var_4))))) : (3403859605U)));
                        var_40 = ((/* implicit */unsigned int) ((var_11) >> (((((/* implicit */int) ((short) (signed char)-121))) + (138)))));
                        arr_68 [i_0 - 1] [i_15] [i_15] [i_18 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)5184))));
                    }
                    /* vectorizable */
                    for (long long int i_19 = 1; i_19 < 9; i_19 += 4) /* same iter space */
                    {
                        arr_72 [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)15055))));
                        var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-32))));
                        var_42 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)15))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 1; i_20 < 9; i_20 += 4) 
                    {
                        var_43 = ((/* implicit */long long int) max((var_43), (((((arr_11 [i_20 - 1] [i_14] [i_14] [i_20 + 1]) || (arr_11 [i_20 - 1] [i_0] [0LL] [i_20 - 1]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_0)))) ? (((((/* implicit */_Bool) arr_44 [i_15] [i_14 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_14] [i_14] [i_14]))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_70 [i_0] [i_14] [i_0] [i_0])))))) : (((/* implicit */long long int) 891107690U))))));
                        arr_76 [i_15] [i_15] [i_14] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) (unsigned short)4064)))));
                        /* LoopSeq 3 */
                        for (long long int i_21 = 1; i_21 < 8; i_21 += 2) 
                        {
                            arr_80 [i_15] = ((/* implicit */int) (signed char)-22);
                            arr_81 [i_0 - 3] [i_0 - 3] [1U] [i_15] [i_21] = ((/* implicit */unsigned int) 705022135866532289ULL);
                            arr_82 [i_14] [i_15] [i_21 + 1] = ((/* implicit */int) (~(max((4494697243319203231ULL), (((/* implicit */unsigned long long int) 288195191779622912LL))))));
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2028)) ? (((/* implicit */int) (signed char)-32)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-57)) : ((-(((/* implicit */int) (short)-2443))))))));
                        }
                        for (short i_22 = 4; i_22 < 9; i_22 += 4) 
                        {
                            var_45 *= var_1;
                            arr_85 [i_15] [i_15] [i_15] = ((/* implicit */signed char) var_9);
                        }
                        for (int i_23 = 2; i_23 < 8; i_23 += 3) 
                        {
                            arr_88 [(signed char)0] [7ULL] [7ULL] [i_15] [(unsigned short)4] = ((/* implicit */int) var_5);
                            var_46 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_39 [i_14] [2LL] [i_14] [i_14] [i_0] [i_0])))))) / ((-((((_Bool)0) ? (-288195191779622905LL) : (((/* implicit */long long int) -2092164989))))))));
                            var_47 = (short)18470;
                            arr_89 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-113)) || (((/* implicit */_Bool) 3820730117U))));
                            arr_90 [i_15] [i_14] [i_15] [i_14] [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_77 [i_23 + 2] [i_20] [i_15] [i_14 - 1] [i_14] [i_14])))));
                        }
                        var_48 = ((/* implicit */short) ((var_0) / ((~(arr_33 [i_15] [i_14] [i_15])))));
                    }
                    var_49 = ((/* implicit */signed char) max((arr_57 [i_15] [i_0] [i_14 - 1] [i_0]), (((/* implicit */short) var_12))));
                    arr_91 [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)1920)), ((unsigned short)63416))))));
                }
            } 
        } 
    }
    var_50 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)52747))))))))) != (var_8)));
}
