/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44429
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
    var_13 = ((((/* implicit */_Bool) var_5)) ? ((((+(((/* implicit */int) (unsigned char)48)))) << (((132944978) - (132944960))))) : (((/* implicit */int) var_10)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2]))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 3])) || (((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_10))))))))) + (min((((unsigned int) arr_1 [(unsigned short)8])), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)3)))))))));
    }
    for (unsigned int i_1 = 4; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_16 -= ((/* implicit */_Bool) arr_5 [i_1]);
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (short i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned char)243)) + (((/* implicit */int) arr_13 [i_5] [(signed char)1] [i_3] [i_5] [i_5]))))));
                            var_18 = ((/* implicit */signed char) var_2);
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [i_3] [(unsigned short)8] [i_1])) + (((((/* implicit */_Bool) (signed char)-126)) ? (arr_10 [(unsigned short)7] [i_3] [(unsigned char)4]) : (2107566817)))));
                            var_20 = ((/* implicit */short) (-(1143659011)));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) (unsigned char)3);
                            var_22 |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_3 - 1] [i_1 - 3]))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 8; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_7 + 1])) == (((/* implicit */int) arr_4 [i_4 - 1] [i_3 + 1]))))), (((arr_4 [i_3 - 2] [1LL]) ? (((/* implicit */int) arr_4 [i_3 - 2] [i_4])) : (((/* implicit */int) arr_4 [i_3 - 2] [i_1]))))));
                            var_24 -= ((/* implicit */int) (unsigned char)255);
                            var_25 = ((/* implicit */unsigned short) (~(max((arr_14 [i_3] [i_3] [i_3] [i_2 - 1] [i_7]), (((/* implicit */unsigned long long int) arr_1 [i_4 + 1]))))));
                        }
                        for (int i_8 = 4; i_8 < 9; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */int) var_0);
                            var_27 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1143659020)) ? (arr_10 [i_1] [i_3] [i_3]) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_2] [(unsigned short)7])))), (((((/* implicit */_Bool) -1143659020)) ? (((/* implicit */int) var_9)) : (arr_19 [i_8] [i_4] [(_Bool)1] [i_3] [(short)6] [i_2] [i_1])))))), (var_8)));
                        }
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */signed char) ((((((((((arr_8 [i_1] [i_1]) + (9223372036854775807LL))) << (((arr_6 [(unsigned short)0] [(unsigned short)0]) - (881225273307839308ULL))))) / (((/* implicit */long long int) arr_5 [i_1 - 4])))) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (27812)))));
    }
    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 4) 
    {
        var_29 &= ((/* implicit */signed char) max((((/* implicit */int) arr_23 [i_9])), (-1143659017)));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) 1143659003)) ? (((/* implicit */int) arr_22 [i_9] [i_9])) : (-565392560))) + (2147483647))) << (((((-745727866) + (745727871))) - (5)))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_22 [i_9 + 4] [i_9 + 1])), (((((/* implicit */long long int) 1143659003)) + (var_1))))))));
    }
    var_31 = var_7;
    /* LoopNest 2 */
    for (short i_10 = 1; i_10 < 14; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_12 = 2; i_12 < 13; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_33 [(unsigned char)12] [i_12] [i_12])) < (((/* implicit */int) arr_34 [i_14] [i_12] [i_12] [i_10])))))) * (-9223372036854775803LL)))) ? (((((/* implicit */long long int) arr_38 [0ULL] [i_11] [i_11] [i_11] [i_11] [i_11] [i_12])) - (arr_37 [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))));
                                var_33 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10] [i_12] [(signed char)6] [i_14]))) + (var_4))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_36 [i_10 - 1] [i_10] [i_10] [i_10] [i_10] [i_10] [(unsigned char)12])), ((unsigned short)65526)))))));
                            }
                        } 
                    } 
                    var_34 |= ((/* implicit */short) (+(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) arr_22 [i_11] [i_12])))) % (-770391200)))));
                    var_35 |= ((/* implicit */short) ((((/* implicit */int) ((arr_32 [i_10 - 1]) != (arr_32 [i_10 - 1])))) >> ((((~(var_4))) - (8755762516022484511ULL)))));
                    var_36 *= ((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) % (min((((/* implicit */long long int) var_7)), (((arr_24 [13ULL]) >> (((((/* implicit */int) arr_26 [i_11])) - (29909))))))));
                }
                for (int i_15 = 4; i_15 < 13; i_15 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) arr_25 [1LL])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (short)8064)) : ((+(((/* implicit */int) var_6))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10] [0U] [i_10] [i_16])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) <= (11608113909487945902ULL)))) : (((((/* implicit */int) arr_26 [i_16])) >> (((((/* implicit */int) arr_31 [i_11] [i_11])) - (60)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 1; i_17 < 12; i_17 += 4) 
                        {
                            var_39 *= ((var_0) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_10] [i_11] [(unsigned char)14] [12])) + (((/* implicit */int) arr_25 [i_11]))))));
                            var_40 &= ((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_15] [i_15] [i_15] [i_15 - 1])) % (((/* implicit */int) arr_42 [i_17 + 2] [i_15 + 1] [i_10 - 1] [i_10]))));
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (1143659006)));
                        }
                    }
                    for (int i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned int) 1143659017)) | (arr_44 [(signed char)14] [(signed char)14] [i_10] [i_18] [(_Bool)1]))));
                        var_43 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_5)))) ? (arr_37 [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_11] [i_15 + 1]))))) != (((/* implicit */long long int) (~(arr_30 [i_11] [i_15 + 2] [i_15 + 2]))))));
                        var_44 = ((/* implicit */short) ((((((/* implicit */int) arr_26 [i_10 + 1])) - (((/* implicit */int) arr_26 [i_10 - 1])))) * (((/* implicit */int) arr_26 [i_10 + 1]))));
                    }
                    var_45 -= ((/* implicit */long long int) arr_30 [i_11] [i_11] [i_11]);
                    var_46 = min((((signed char) ((((/* implicit */int) (signed char)114)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775782LL))) + (51LL)))))), ((signed char)61));
                    /* LoopSeq 4 */
                    for (unsigned short i_19 = 1; i_19 < 12; i_19 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */_Bool) ((((((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32814))))) != (((/* implicit */unsigned long long int) (+(var_12)))))) ? (max((((/* implicit */int) arr_33 [i_19 + 2] [i_15] [i_10 - 1])), (((((/* implicit */int) (unsigned short)53714)) & (((/* implicit */int) var_9)))))) : (((/* implicit */int) min((arr_35 [i_19 - 1] [i_19] [i_19 + 3] [i_19] [i_19 + 3] [(unsigned short)4]), (((/* implicit */short) max(((unsigned char)16), (((/* implicit */unsigned char) arr_27 [i_10] [i_10]))))))))));
                        var_48 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_45 [i_15 + 1] [i_15 - 4] [i_10 - 1]))))), ((~(max((var_0), (((/* implicit */unsigned long long int) arr_37 [i_19]))))))));
                        var_49 = ((/* implicit */unsigned int) arr_41 [i_10] [i_10]);
                    }
                    for (unsigned short i_20 = 1; i_20 < 12; i_20 += 2) /* same iter space */
                    {
                        var_50 = ((/* implicit */signed char) arr_29 [i_20] [i_11]);
                        var_51 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_20 + 3] [i_20 + 3] [i_15 - 2] [i_10 - 1])) || (((/* implicit */_Bool) arr_48 [i_20 - 1] [i_20 + 3] [i_15 - 1] [i_10 - 1]))))), (arr_38 [i_15] [(unsigned short)2] [i_15] [(unsigned char)12] [i_11] [(unsigned short)2] [i_15])));
                        var_52 = ((/* implicit */int) max((var_6), (((unsigned short) var_2))));
                        var_53 = ((/* implicit */unsigned char) var_9);
                        var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) % (var_2))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_11] [i_20])))))) || (((/* implicit */_Bool) arr_32 [i_10]))));
                    }
                    for (unsigned short i_21 = 1; i_21 < 12; i_21 += 2) /* same iter space */
                    {
                        var_55 |= ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_42 [i_15 + 2] [(unsigned char)13] [i_21] [i_21 + 1])) == (((/* implicit */int) arr_42 [i_15 + 2] [i_15] [(unsigned short)4] [i_21 + 1]))))));
                        var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_10 - 1] [i_11])) | (((/* implicit */int) arr_31 [i_10 + 1] [i_15]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_22 = 1; i_22 < 12; i_22 += 2) /* same iter space */
                    {
                        var_57 = ((/* implicit */unsigned char) (~(arr_40 [i_10] [i_10 - 1] [i_15 + 1])));
                        var_58 = ((/* implicit */int) ((((/* implicit */int) arr_26 [i_15 - 2])) < (((/* implicit */int) arr_26 [i_11]))));
                        var_59 = 1143659019;
                        var_60 = ((/* implicit */unsigned short) (-(((int) arr_30 [i_11] [i_15] [i_11]))));
                    }
                }
                /* vectorizable */
                for (signed char i_23 = 0; i_23 < 15; i_23 += 1) 
                {
                    var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_10] [5] [i_11] [2LL] [i_23] [(signed char)10])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10] [i_11] [(signed char)13] [i_23]))) * (arr_54 [(short)4] [(short)4] [(short)4] [i_23])))));
                    var_62 = ((/* implicit */signed char) ((1143659023) != (((/* implicit */int) arr_41 [i_10 - 1] [i_10 + 1]))));
                }
                var_63 = ((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned long long int) -325937052))));
                var_64 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) var_12)), (var_0))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [8] [i_11] [i_10] [i_11])))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_45 [i_10] [(short)14] [(short)14]), (((/* implicit */short) arr_22 [i_11] [22])))))))) : (((((((/* implicit */_Bool) arr_39 [i_11] [i_11] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_52 [(_Bool)1] [(short)9] [(_Bool)1] [i_11] [(_Bool)1]))) % (((/* implicit */unsigned long long int) arr_38 [i_10 + 1] [i_10 - 1] [i_10] [(signed char)6] [i_10] [i_10] [i_11]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_24 = 3; i_24 < 14; i_24 += 2) 
                {
                    var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [7]))) : (1435038216U)))) >= (((var_4) | (((/* implicit */unsigned long long int) var_8))))));
                    var_66 = ((/* implicit */signed char) arr_44 [i_24] [i_24] [i_24] [(unsigned short)14] [i_24]);
                }
            }
        } 
    } 
    var_67 = ((/* implicit */short) min((var_67), (((/* implicit */short) ((((/* implicit */_Bool) (short)-27150)) ? (((/* implicit */int) (short)32744)) : (((/* implicit */int) (unsigned short)11822)))))));
}
