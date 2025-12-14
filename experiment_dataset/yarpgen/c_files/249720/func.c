/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249720
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
    var_20 = ((/* implicit */int) var_1);
    var_21 = ((/* implicit */unsigned char) (-(var_11)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32770))) / (7208272404333033027ULL)))));
                var_22 &= ((/* implicit */unsigned char) (signed char)79);
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1 + 1] [i_2 + 1] [i_3] = ((signed char) 1291442833);
                        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) arr_14 [i_5] [i_1] [i_2] [i_4])) ? (((/* implicit */unsigned int) var_14)) : (var_12))) + (((/* implicit */unsigned int) (-(arr_0 [i_2])))))));
                            var_25 = min((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_5])), ((~(arr_9 [i_0]))))), (((/* implicit */unsigned long long int) var_5)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                        {
                            var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6] [i_4] [i_2] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_13 [i_0]))))) ? (arr_14 [i_2] [i_2] [i_2] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)209)) <= (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                            var_27 = ((/* implicit */unsigned char) 599636308U);
                            var_28 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_1]) : (((/* implicit */unsigned long long int) var_12)))));
                            arr_19 [i_0] [i_0] [i_4] = (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)472)) < (-1628411276)))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 4; i_7 < 14; i_7 += 1) 
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_4] [i_7] [i_7] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 1853053659U)) ? (((/* implicit */int) (unsigned short)508)) : (-22099179)))));
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 - 1] [i_2 + 1])) && (((/* implicit */_Bool) var_12)))))));
                        }
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            var_30 = ((/* implicit */int) var_19);
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((unsigned short) ((arr_6 [i_8] [i_4] [i_1] [i_0]) / (arr_6 [i_0] [i_1 + 1] [i_4] [i_8])))))));
                        }
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [6ULL])) ? (((((/* implicit */int) (signed char)88)) / (((arr_0 [i_0]) & (((/* implicit */int) arr_18 [i_1 - 1] [i_1] [i_2] [i_1] [i_4] [i_2])))))) : (((/* implicit */int) arr_3 [(unsigned short)12] [i_1] [(unsigned short)12])))))));
                    }
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)34087)) >> (((arr_20 [i_0] [i_2] [i_1] [i_1] [i_1] [i_2] [i_0]) + (892699340))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 3; i_9 < 15; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_26 [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 1])), (arr_13 [i_0]))))) != (((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) var_11)))) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65036)) + (((/* implicit */int) arr_2 [i_0] [i_9])))))))));
                                var_35 = ((/* implicit */int) (unsigned short)15827);
                            }
                        } 
                    } 
                }
                for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 3; i_12 < 17; i_12 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_9 [i_1 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_11])) != (((/* implicit */int) var_4)))))) : (max((arr_32 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) arr_30 [i_12] [12U] [i_11] [i_1] [i_13]))));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)486)) && (((/* implicit */_Bool) var_7))))))) >> (((((((/* implicit */_Bool) ((int) arr_32 [i_13] [i_12] [i_1] [i_0]))) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_13])) : (((/* implicit */int) arr_39 [i_0] [i_1] [i_11] [i_0] [i_13])))) - (36)))));
                        }
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
                        {
                            var_39 = ((/* implicit */int) arr_40 [i_0]);
                            var_40 += ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) arr_3 [(signed char)14] [i_12 - 1] [i_0])) - (52813)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            {
                                var_41 ^= ((/* implicit */signed char) (-(((((/* implicit */int) var_1)) / (((/* implicit */int) arr_44 [i_1 + 1] [i_1] [i_1 - 1]))))));
                                var_42 = ((/* implicit */unsigned char) var_4);
                            }
                        } 
                    } 
                }
                for (signed char i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_33 [i_0] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_17])) ? (10954403251341429130ULL) : (var_0)))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 18; i_19 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) arr_10 [i_0] [i_0]))));
                                var_45 = ((/* implicit */unsigned short) ((4377759538164879478ULL) % (((/* implicit */unsigned long long int) -4))));
                                var_46 = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)107));
                                arr_56 [i_17] [i_0] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) arr_2 [i_0] [i_0])), (0))))) != ((~(((unsigned long long int) -4))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_20 = 3; i_20 < 17; i_20 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        var_47 += ((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned short)484)))), (((/* implicit */int) arr_11 [i_1 - 1] [i_20 - 1] [i_20 + 1]))));
                        /* LoopSeq 2 */
                        for (signed char i_22 = 1; i_22 < 14; i_22 += 2) 
                        {
                            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((unsigned char) var_6)))));
                            var_49 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_1] [i_1 - 1] [i_21] [i_21] [i_21]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1 + 1] [i_22] [i_22] [i_22]))))) : (((/* implicit */int) (unsigned char)54))));
                            var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) min((min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_55 [(signed char)8] [i_1] [i_20 - 3] [i_21] [i_22])) ? (((/* implicit */int) (unsigned short)7383)) : (((/* implicit */int) arr_26 [i_1] [12] [i_20] [i_21])))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-115)))))))))));
                            var_51 = ((((/* implicit */int) ((signed char) var_18))) | (((/* implicit */int) arr_44 [i_0] [i_20] [i_21])));
                        }
                        for (unsigned short i_23 = 0; i_23 < 18; i_23 += 2) 
                        {
                            arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned short) min((((/* implicit */int) arr_27 [i_0] [i_1 + 1] [i_20 - 1] [i_21])), (arr_30 [i_20 + 1] [i_0] [i_20] [i_20 - 1] [i_20])));
                            var_52 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)109)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) var_17))))));
                            var_53 = ((/* implicit */int) arr_46 [i_1] [i_1] [i_0] [i_21] [i_23]);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 3; i_24 < 14; i_24 += 2) 
                    {
                        for (signed char i_25 = 3; i_25 < 17; i_25 += 3) 
                        {
                            {
                                var_54 += ((/* implicit */unsigned int) ((unsigned char) var_18));
                                var_55 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_9)))))) ? (((((/* implicit */_Bool) arr_66 [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((arr_17 [i_0] [i_24] [i_25]), ((unsigned short)484)))))) : (var_7)));
                                var_56 = max(((~(((((/* implicit */_Bool) (unsigned short)65051)) ? (((/* implicit */int) arr_8 [i_25] [i_1])) : (11))))), (((/* implicit */int) arr_54 [i_25] [i_24] [i_24] [i_20] [i_20] [i_1] [i_0])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        var_57 *= ((/* implicit */signed char) arr_17 [i_0] [i_20] [i_20]);
                        var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)206)) - (((/* implicit */int) arr_2 [i_0] [i_1 + 1]))))) ? (max((arr_30 [i_1 - 1] [i_0] [i_20 - 3] [i_26] [i_26]), (arr_30 [i_1 + 1] [i_0] [i_20 + 1] [i_20] [i_26]))) : (((/* implicit */int) arr_2 [i_0] [i_1 + 1]))));
                    }
                    for (signed char i_27 = 3; i_27 < 16; i_27 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_28 = 0; i_28 < 18; i_28 += 1) 
                        {
                            var_59 = ((/* implicit */unsigned short) arr_69 [i_0] [i_1] [i_27 - 1] [i_28]);
                            var_60 = ((/* implicit */unsigned short) max((var_60), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_64 [i_0] [i_0] [i_0] [2U] [i_0] [i_0] [i_0])) ? ((-(16383694077237773627ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) arr_67 [i_0] [i_1] [i_20] [(unsigned short)0] [i_28])), ((unsigned short)35314))), (((/* implicit */unsigned short) (signed char)46)))))))))));
                            var_61 -= ((signed char) ((((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [0]))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_40 [(signed char)16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [16U] [i_27 - 3] [i_28])))));
                            var_62 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-7)) <= ((~((~(((/* implicit */int) (unsigned short)65036))))))));
                        }
                        var_63 ^= ((/* implicit */signed char) ((max((((/* implicit */int) min((arr_53 [(signed char)6] [i_1] [i_1 - 1]), (((/* implicit */unsigned short) arr_47 [(signed char)14] [i_1 + 1] [i_20] [i_27]))))), ((+(((/* implicit */int) var_10)))))) & (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_64 = ((/* implicit */unsigned long long int) ((signed char) (~((~(((/* implicit */int) (unsigned short)0)))))));
                    }
                    for (unsigned char i_29 = 0; i_29 < 18; i_29 += 3) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_30 = 0; i_30 < 18; i_30 += 3) 
                        {
                            var_65 = ((/* implicit */unsigned long long int) (signed char)107);
                            var_66 = ((/* implicit */unsigned long long int) max((var_66), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)17924)))))));
                            var_67 -= ((/* implicit */unsigned char) 310061763);
                        }
                        /* vectorizable */
                        for (unsigned short i_31 = 1; i_31 < 16; i_31 += 3) 
                        {
                            arr_91 [i_29] [i_29] [i_0] [i_29] [i_29] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_8)))))) : (arr_32 [i_31] [i_31] [i_1] [i_20 + 1])));
                            arr_92 [i_0] [i_0] [i_20] [i_29] [i_31] = ((/* implicit */unsigned short) ((unsigned char) arr_40 [i_0]));
                            var_68 = ((/* implicit */unsigned short) ((unsigned char) arr_46 [i_20 - 3] [i_20] [i_0] [i_20 - 1] [i_20 + 1]));
                        }
                        for (signed char i_32 = 0; i_32 < 18; i_32 += 2) 
                        {
                            var_69 = ((/* implicit */unsigned char) (~(((int) arr_93 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_20] [i_20 - 3]))));
                            var_70 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? ((-(((/* implicit */int) ((signed char) (signed char)-5))))) : (var_2)));
                            var_71 = ((/* implicit */int) max((var_71), (((/* implicit */int) (signed char)-113))));
                        }
                        for (signed char i_33 = 0; i_33 < 18; i_33 += 1) 
                        {
                            var_72 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_0] [i_1 - 1] [i_20] [i_29] [i_33] [i_33])) ? (((/* implicit */int) max((arr_66 [i_0]), (var_4)))) : (((((/* implicit */int) arr_60 [i_0] [i_1 + 1] [i_29] [i_29])) ^ (var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((var_0), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_33] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_29]))) : (arr_81 [i_0] [i_1] [i_0] [i_0] [i_0] [i_33])))))));
                            var_73 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_0] [i_20] [i_20] [i_20 - 1] [i_20 - 2]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))))) ? (((int) arr_18 [i_33] [i_29] [i_20 - 2] [i_20] [i_1] [i_0])) : (((((/* implicit */int) arr_18 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29])) >> (((((/* implicit */int) arr_73 [i_33] [i_0] [i_20] [i_20] [i_0] [i_0])) - (29))))))) : (min(((-(((/* implicit */int) arr_90 [i_0] [i_0] [i_1] [i_20] [i_29] [i_33])))), (max((1643574840), (((/* implicit */int) arr_89 [i_33] [i_29] [i_20] [i_1] [i_0] [i_0]))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_0] [i_20] [i_20] [i_20 - 1] [i_20 - 2]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))))) ? (((int) arr_18 [i_33] [i_29] [i_20 - 2] [i_20] [i_1] [i_0])) : (((((/* implicit */int) arr_18 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29])) >> (((((((/* implicit */int) arr_73 [i_33] [i_0] [i_20] [i_20] [i_0] [i_0])) - (29))) + (126))))))) : (min(((-(((/* implicit */int) arr_90 [i_0] [i_0] [i_1] [i_20] [i_29] [i_33])))), (max((1643574840), (((/* implicit */int) arr_89 [i_33] [i_29] [i_20] [i_1] [i_0] [i_0])))))))));
                        }
                        var_74 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_73 [i_20 - 3] [i_0] [i_20 + 1] [i_20 - 1] [i_20 - 1] [i_20])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_73 [i_20 - 3] [i_0] [i_20 + 1] [i_20 - 3] [i_20 - 3] [i_20])))) ^ ((~(((/* implicit */int) min((arr_37 [i_0] [i_1 - 1] [i_20] [i_0]), (((/* implicit */unsigned char) (signed char)27)))))))));
                    }
                    var_75 = ((/* implicit */signed char) arr_18 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_20 - 3]);
                    var_76 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                }
            }
        } 
    } 
    var_77 = var_13;
}
