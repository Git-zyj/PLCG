/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217947
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
    var_17 -= ((/* implicit */unsigned long long int) var_3);
    var_18 -= ((/* implicit */unsigned char) max((((/* implicit */int) (short)14597)), (1380142943)));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))) / (2460812100181970884ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((unsigned int) (_Bool)0));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0]))))));
        var_22 = 692473427;
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (0ULL)));
            var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (unsigned short)35948))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (short i_4 = 3; i_4 < 17; i_4 += 3) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)2680))))));
                            arr_13 [i_0] = ((/* implicit */short) ((arr_8 [i_3] [i_4 - 1] [i_3] [i_4 - 1] [i_4 + 1] [i_4 - 2]) << (((/* implicit */int) var_3))));
                            var_25 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_26 -= ((/* implicit */long long int) arr_6 [i_6] [i_1] [13LL]);
                            arr_18 [i_0] [(_Bool)1] [i_6] = arr_2 [i_0] [i_1];
                        }
                    } 
                } 
            }
            for (int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                var_27 = ((unsigned char) var_0);
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                {
                    var_28 -= ((/* implicit */unsigned char) var_13);
                    var_29 -= ((/* implicit */unsigned int) (unsigned char)82);
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) arr_7 [(_Bool)1] [(_Bool)1] [(short)3] [i_8 + 2]);
                        arr_25 [i_0] [i_1] [i_7] [i_7] [i_7] [i_9] |= ((/* implicit */unsigned short) (-(arr_21 [i_1] [i_8 + 1] [(_Bool)1] [(_Bool)1] [6ULL])));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4032)) ? (arr_21 [i_8] [(short)15] [i_8 + 2] [i_8] [i_8 + 2]) : (arr_21 [i_8 + 2] [(unsigned char)13] [i_8 + 2] [(unsigned char)13] [i_8 + 3]))))));
                    }
                    arr_26 [i_0] [i_0] [i_7] [i_8 - 1] = ((/* implicit */short) var_3);
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_10)))) + (((/* implicit */int) arr_14 [i_10 - 1] [i_7] [i_0] [i_1] [i_0]))));
                    arr_29 [i_0] [i_0] [i_7] [4] = ((/* implicit */short) var_13);
                    /* LoopSeq 1 */
                    for (short i_11 = 2; i_11 < 16; i_11 += 3) 
                    {
                        var_33 &= ((/* implicit */unsigned char) var_2);
                        arr_32 [(unsigned char)9] [(unsigned char)9] [1U] [i_0] [(unsigned short)17] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (unsigned char)233)) & (((/* implicit */int) arr_7 [i_0] [14ULL] [17LL] [14ULL])))));
                        arr_33 [i_0] [(_Bool)1] = ((/* implicit */short) ((unsigned char) var_9));
                        var_34 = ((/* implicit */long long int) arr_31 [i_11 - 1] [i_10 - 1] [i_7] [i_1] [(unsigned char)6]);
                    }
                    var_35 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7]))) : (arr_8 [(unsigned short)13] [i_1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])));
                    var_36 = ((/* implicit */short) ((_Bool) (unsigned char)93));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_37 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-1972057894795053583LL)))) ? (arr_8 [i_7] [i_7] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_7]) : (((((/* implicit */_Bool) arr_21 [i_0] [(_Bool)1] [(unsigned short)10] [(_Bool)1] [(unsigned short)16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551615ULL)))));
                    var_38 = (!(((/* implicit */_Bool) arr_8 [6LL] [i_12 - 1] [i_7] [i_7] [4LL] [i_12 - 1])));
                    arr_38 [i_0] [13LL] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))));
                    arr_39 [i_0] [i_7] [i_1] [(short)5] [i_0] = ((((((/* implicit */_Bool) (unsigned char)218)) ? (2460812100181970884ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) < (((unsigned long long int) (unsigned char)112)));
                    arr_40 [5] [(_Bool)1] [i_0] [i_12] = ((/* implicit */short) (_Bool)0);
                }
            }
            for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                var_39 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_13]))));
                var_40 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1644690586)) ? ((-9223372036854775807LL - 1LL)) : (-5902870558376659651LL)));
                var_41 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))));
            }
            for (short i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                arr_48 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_19 [i_0] [i_0] [i_1] [(unsigned short)9]));
                var_42 = ((/* implicit */long long int) ((unsigned short) (short)-31147));
            }
            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            arr_52 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56190)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned char i_16 = 1; i_16 < 15; i_16 += 4) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                {
                    {
                        arr_59 [i_0] [(unsigned char)16] [(unsigned short)8] [i_17] &= ((/* implicit */long long int) ((int) arr_41 [i_16 + 3] [i_16 + 1] [i_16 + 2]));
                        /* LoopSeq 2 */
                        for (long long int i_18 = 0; i_18 < 18; i_18 += 1) 
                        {
                            arr_64 [i_0] [i_0] [10LL] [i_17] [8ULL] [i_18] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (_Bool)1)))) << (((arr_50 [i_16 + 1] [(unsigned short)3] [i_0]) - (1212516323)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (_Bool)1)))) << (((((arr_50 [i_16 + 1] [(unsigned short)3] [i_0]) + (1212516323))) - (209029631))))));
                            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) (unsigned char)198))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 3) 
                        {
                            var_45 = ((/* implicit */unsigned int) (-(arr_8 [13ULL] [(unsigned char)16] [(unsigned short)3] [i_16 - 1] [i_19] [i_19])));
                            var_46 -= ((/* implicit */unsigned int) arr_42 [1U] [i_15] [(unsigned short)3] [i_15]);
                        }
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
                        arr_67 [i_0] [i_15] [(unsigned char)0] [i_0] = ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
            var_48 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_57 [i_15] [(unsigned short)16] [(unsigned short)16])) ? (2460812100181970884ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            var_49 = ((((/* implicit */int) arr_62 [i_0] [16U] [i_15] [i_15] [i_15])) * (((/* implicit */int) (_Bool)0)));
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 2) 
            {
                for (int i_21 = 1; i_21 < 17; i_21 += 3) 
                {
                    for (unsigned short i_22 = 1; i_22 < 17; i_22 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned short) (+(arr_78 [i_0] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 + 1] [i_21 - 1])));
                            var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) (-(var_4))))));
                            var_52 *= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_51 [i_0] [i_0] [i_20]))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_23 = 0; i_23 < 18; i_23 += 3) 
        {
            var_53 += ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_11))));
            /* LoopSeq 1 */
            for (unsigned char i_24 = 0; i_24 < 18; i_24 += 2) 
            {
                var_54 = ((/* implicit */_Bool) max((var_54), ((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_24] [i_24] [i_0])))))))));
                arr_85 [i_24] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((long long int) (_Bool)1)));
                var_55 += ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_57 [i_24] [i_24] [i_24])) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) var_10))));
                var_56 = ((/* implicit */int) max((var_56), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_25 = 0; i_25 < 18; i_25 += 3) 
            {
                var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_87 [i_0] [i_23] [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_0] [i_23] [i_25]))) : (8878646810918113767LL))))));
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    arr_91 [i_0] [(unsigned short)14] [i_25] [i_25] [i_23] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_16 [(_Bool)1] [i_23] [i_25] [i_26] [i_26]))));
                    var_58 = (unsigned short)65535;
                }
                arr_92 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_68 [i_0] [(unsigned short)16]))));
                var_59 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)35077)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_56 [i_0] [i_23] [i_0]))));
            }
        }
        for (unsigned long long int i_27 = 3; i_27 < 16; i_27 += 2) 
        {
            var_60 = ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [(unsigned short)6]);
            /* LoopNest 2 */
            for (long long int i_28 = 3; i_28 < 15; i_28 += 3) 
            {
                for (unsigned short i_29 = 2; i_29 < 17; i_29 += 4) 
                {
                    {
                        var_61 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) : (var_0)));
                        arr_102 [4U] [11LL] [(unsigned short)0] [i_29 + 1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_42 [i_27 - 3] [i_27 - 1] [i_27 + 2] [i_27 + 2]))));
                    }
                } 
            } 
            arr_103 [(unsigned short)12] [i_0] [(unsigned short)12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_86 [i_27 - 2] [i_27 - 2] [i_27 + 2])) ? (((/* implicit */int) arr_86 [i_27 - 3] [i_27 - 1] [i_27 - 3])) : (((/* implicit */int) arr_86 [i_27 + 2] [i_27 - 3] [i_27 - 2]))));
            var_62 = ((/* implicit */int) max((var_62), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_93 [16ULL]))))));
        }
    }
    var_63 = ((/* implicit */int) min((var_63), (((/* implicit */int) 3627115689085887409LL))));
}
