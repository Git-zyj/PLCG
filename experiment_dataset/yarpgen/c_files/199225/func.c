/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199225
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
    var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((var_15) - (((/* implicit */int) ((short) -2488915365978951323LL)))))) : (var_7)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [(short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6)))) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_3 [i_0])))))) : (2488915365978951322LL)));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_22 = ((/* implicit */long long int) var_2);
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    for (short i_4 = 4; i_4 < 8; i_4 += 4) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_14))));
                            var_24 = (+(((int) (short)1)));
                            arr_15 [i_0] [i_3] [i_1] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
            }
            for (int i_5 = 3; i_5 < 8; i_5 += 4) /* same iter space */
            {
                arr_18 [i_5] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (_Bool)1))))) << (((var_11) + (2050395194)))));
                var_25 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            }
            for (int i_6 = 3; i_6 < 8; i_6 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 8; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            arr_28 [i_0] [i_6] [i_6] [i_8] = ((/* implicit */short) ((2488915365978951326LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                            var_26 -= ((/* implicit */unsigned long long int) 484941750U);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_14 [i_0] [i_1] [i_6 - 3] [i_7 - 1] [i_7 - 1] [i_1] [i_6]))));
                            arr_29 [i_6] [i_7] [i_6] [i_0] [i_1] [i_1] [i_6] = var_4;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 4; i_9 < 9; i_9 += 4) 
                {
                    for (unsigned char i_10 = 2; i_10 < 6; i_10 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) var_10))))) ? (var_18) : (arr_24 [i_0] [i_6 - 2] [i_9 - 3] [i_10 + 4])));
                            arr_37 [i_1] [i_6 - 3] [i_6] = ((/* implicit */unsigned short) var_12);
                            var_29 = ((/* implicit */int) (+(2488915365978951326LL)));
                            arr_38 [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [4LL] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (unsigned char)0)))))) : (-5661891693762331231LL)));
                            arr_39 [i_6] [i_9] [i_6] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((arr_36 [i_0] [i_6]) / (arr_36 [i_9 - 3] [i_6])));
                        }
                    } 
                } 
                arr_40 [i_6] [i_1] [i_0] [i_6] = ((/* implicit */unsigned int) ((short) arr_4 [i_1] [i_1] [i_6 - 2]));
            }
        }
        for (short i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            /* LoopSeq 4 */
            for (long long int i_12 = 1; i_12 < 8; i_12 += 2) 
            {
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) var_5))));
                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) == (1152358554653425664LL))))));
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_33 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 + 1])) | (arr_46 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 + 1]))))));
            }
            for (int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_11] [i_13])) ? (arr_19 [0LL] [i_11] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6)))));
                var_34 *= arr_47 [i_11];
                var_35 -= ((/* implicit */short) ((var_3) | (((/* implicit */long long int) 484941750U))));
            }
            for (unsigned char i_14 = 1; i_14 < 7; i_14 += 2) 
            {
                var_36 &= ((/* implicit */int) var_12);
                arr_51 [i_0] [i_11] [i_14] = ((((/* implicit */_Bool) arr_4 [9U] [i_14 + 1] [i_14])) ? (var_2) : (((/* implicit */int) arr_4 [i_14] [i_14 + 1] [i_14])));
            }
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 1; i_16 < 8; i_16 += 2) 
                {
                    var_37 = ((/* implicit */unsigned char) ((67108863LL) == (9175274789078455923LL)));
                    arr_58 [i_16] [i_16] [i_16] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (var_10)));
                }
                arr_59 [i_0] [2] [i_15] [i_15] = ((/* implicit */unsigned int) arr_54 [i_0] [i_11] [i_15]);
            }
            /* LoopNest 3 */
            for (unsigned int i_17 = 2; i_17 < 9; i_17 += 1) 
            {
                for (long long int i_18 = 3; i_18 < 8; i_18 += 2) 
                {
                    for (short i_19 = 2; i_19 < 9; i_19 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) arr_60 [i_0] [i_0] [i_18 + 1]))));
                            var_39 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                        }
                    } 
                } 
            } 
            arr_67 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_11] [i_0]))));
        }
    }
    /* vectorizable */
    for (unsigned short i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
    {
        var_40 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_12)) : (var_0)))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_17)))))));
        /* LoopNest 3 */
        for (unsigned char i_21 = 1; i_21 < 8; i_21 += 4) 
        {
            for (short i_22 = 0; i_22 < 10; i_22 += 4) 
            {
                for (int i_23 = 0; i_23 < 10; i_23 += 4) 
                {
                    {
                        arr_77 [i_20] [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_22] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_11))) || (((/* implicit */_Bool) var_7))));
                        /* LoopSeq 1 */
                        for (short i_24 = 1; i_24 < 9; i_24 += 4) 
                        {
                            var_41 = ((/* implicit */long long int) ((short) arr_12 [i_24 + 1] [8U] [i_21 + 2] [i_23] [6U]));
                            arr_82 [i_24] [i_24] [i_22] [i_23] = ((/* implicit */int) arr_32 [i_24 - 1] [i_24 - 1] [i_23] [i_21 + 1] [(short)1] [i_21 + 1]);
                            var_42 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1152358554653425652LL)))))) % ((~(4357709465801878201LL)))));
                            arr_83 [i_20] [i_20] [i_20] [i_22] [i_23] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_21 - 1] [i_21 - 1])))));
                            arr_84 [i_20] [i_21 + 1] [i_22] [i_23] [i_21 + 1] [i_24] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) -1152358554653425681LL)) ? (arr_65 [i_20] [i_21] [i_22] [i_20] [i_24] [i_23]) : (((/* implicit */int) arr_57 [i_20] [i_24])))));
                        }
                        var_43 = ((/* implicit */short) ((unsigned short) ((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
                        var_44 = ((/* implicit */unsigned long long int) var_17);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_25 = 0; i_25 < 10; i_25 += 1) 
        {
            for (signed char i_26 = 0; i_26 < 10; i_26 += 4) 
            {
                {
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) var_16))));
                    /* LoopSeq 1 */
                    for (unsigned char i_27 = 0; i_27 < 10; i_27 += 4) 
                    {
                        var_46 = ((/* implicit */int) arr_61 [i_20] [i_25] [i_27]);
                        /* LoopSeq 2 */
                        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
                        {
                            var_47 = ((/* implicit */int) var_0);
                            var_48 = ((/* implicit */long long int) arr_66 [i_20] [i_20] [i_20] [(unsigned short)2] [i_20]);
                            var_49 = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)39578));
                        }
                        for (int i_29 = 0; i_29 < 10; i_29 += 2) 
                        {
                            var_50 = ((/* implicit */unsigned int) ((short) arr_91 [i_20] [i_26] [i_27] [i_26]));
                            var_51 = ((/* implicit */short) var_7);
                            arr_99 [i_20] [i_20] [i_20] [i_27] [i_29] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17))));
                            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) (~(-1152358554653425664LL))))));
                        }
                        arr_100 [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_25 [i_20])) : (((/* implicit */int) (unsigned char)59)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_62 [i_25])))))));
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_27])) ? (((/* implicit */int) arr_9 [i_27])) : (((/* implicit */int) var_10))));
                    }
                }
            } 
        } 
        var_54 = ((/* implicit */short) -1152358554653425665LL);
        var_55 |= ((/* implicit */unsigned char) arr_16 [i_20] [i_20] [i_20] [(short)0]);
    }
    for (unsigned short i_30 = 0; i_30 < 10; i_30 += 4) /* same iter space */
    {
        var_56 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */int) arr_94 [i_30] [9] [i_30] [i_30] [i_30] [i_30])) % (((/* implicit */int) arr_5 [i_30] [i_30] [i_30] [i_30])))) >= (((/* implicit */int) var_17)))));
        var_57 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_102 [i_30] [i_30])) ? ((~(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_30]))))))))) ? (((/* implicit */long long int) var_8)) : (max((var_3), (((/* implicit */long long int) (signed char)118))))));
        /* LoopNest 3 */
        for (signed char i_31 = 0; i_31 < 10; i_31 += 4) 
        {
            for (unsigned short i_32 = 1; i_32 < 8; i_32 += 2) 
            {
                for (unsigned short i_33 = 0; i_33 < 10; i_33 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_34 = 0; i_34 < 10; i_34 += 4) 
                        {
                            var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) var_0))));
                            var_59 = max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)1)) && (((/* implicit */_Bool) arr_108 [i_32 - 1] [i_34] [i_34] [i_34]))))), (((unsigned short) (unsigned short)65535)));
                        }
                        var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */int) (unsigned char)89)) : (var_2)));
                    }
                } 
            } 
        } 
        var_61 = ((/* implicit */long long int) min((var_61), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)65535)))) : (min((((/* implicit */long long int) arr_21 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2])), (arr_75 [i_30] [(short)0])))))) ? (((/* implicit */unsigned long long int) min((arr_79 [i_30] [i_30] [i_30] [i_30] [i_30]), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_10 [(_Bool)1] [i_30] [i_30] [i_30] [8U])))))) : (((((/* implicit */_Bool) arr_60 [i_30] [i_30] [i_30])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_11)))))))));
    }
    for (long long int i_35 = 2; i_35 < 9; i_35 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_36 = 0; i_36 < 0; i_36 += 1) 
        {
            for (short i_37 = 0; i_37 < 11; i_37 += 3) 
            {
                {
                    var_62 = ((/* implicit */unsigned int) arr_116 [i_35]);
                    var_63 &= ((/* implicit */long long int) ((((((/* implicit */int) var_17)) < (((/* implicit */int) ((short) (unsigned char)166))))) ? ((-(((unsigned long long int) var_13)))) : ((-(((0ULL) / (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                    arr_122 [i_37] [i_35] [i_35] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_118 [i_35 + 1] [i_35 + 1]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))));
                }
            } 
        } 
        var_64 *= var_8;
        arr_123 [i_35] [i_35 - 2] = ((/* implicit */int) min((((/* implicit */long long int) (short)8191)), (max((((/* implicit */long long int) (short)255)), (var_3)))));
        var_65 -= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_7)), (var_9))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(var_12))))))));
        var_66 = arr_116 [i_35 + 2];
    }
    var_67 = ((/* implicit */short) ((_Bool) -2488915365978951335LL));
}
