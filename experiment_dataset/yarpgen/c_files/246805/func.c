/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246805
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 *= ((/* implicit */unsigned short) max(((-(((/* implicit */int) min(((unsigned short)256), ((unsigned short)249)))))), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)65293))))))));
            var_13 *= ((/* implicit */unsigned long long int) (!(((_Bool) (unsigned short)249))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_4] [i_1] [i_3] [i_2] [i_0] [i_1] [i_0] = ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65286)) + (((/* implicit */int) (unsigned short)65293))))) : (max((((/* implicit */unsigned int) arr_2 [i_2])), (var_10))));
                            var_14 += (!(((/* implicit */_Bool) arr_6 [(short)3])));
                            var_15 = ((/* implicit */unsigned short) max((var_15), ((unsigned short)65286)));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) ((unsigned short) ((short) arr_1 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)261)) ? (((/* implicit */int) (unsigned short)65280)) : (((/* implicit */int) (unsigned short)65285))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)250))))) : (((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_14 [i_0] [i_0] [i_2] [i_3] [i_5]) : (arr_10 [i_0] [i_0] [3ULL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65293), ((unsigned short)65276)))))))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min(((unsigned short)225), ((unsigned short)258)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_0))) : ((((_Bool)1) ? (3ULL) : (var_2))))) > (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)250)) ^ (((/* implicit */int) (unsigned short)249)))), (((/* implicit */int) (_Bool)1))))))))));
                            var_18 |= (((!(((/* implicit */_Bool) (unsigned short)246)))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */short) (unsigned short)65285);
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_6] [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] [i_6]))) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65285)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65295))) : (8038450975445995130ULL)));
                        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (10408293098263556495ULL)))) ? (min((((((/* implicit */_Bool) (unsigned short)65291)) ? (((/* implicit */int) (unsigned short)65267)) : (((/* implicit */int) (unsigned short)52397)))), (((/* implicit */int) var_6)))) : ((~(((/* implicit */int) (unsigned short)3965))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10408293098263556496ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4377))) : (8038450975445995109ULL)))) ? (((/* implicit */int) min((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_8 [i_3])))), ((!(((/* implicit */_Bool) var_5))))))) : ((((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) min(((unsigned short)229), (((/* implicit */unsigned short) (unsigned char)0))))))))))));
                    }
                } 
            } 
            arr_19 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)65280)))))), (min((3263072442165510602ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            arr_22 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65284)) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_0] [i_7])) ? (arr_11 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((short) var_7))))))));
            var_24 ^= (~((~(var_3))));
            arr_23 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((_Bool) (unsigned char)5)) ? (arr_3 [i_7]) : (((unsigned long long int) arr_10 [i_0] [i_7] [i_0]))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_8 = 2; i_8 < 10; i_8 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65285))));
                arr_26 [i_8] [4U] [i_8] [i_8] = ((/* implicit */short) (_Bool)1);
            }
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 4) 
                {
                    arr_32 [i_7] [i_7] = ((/* implicit */unsigned int) ((arr_9 [i_0] [i_10] [i_9] [i_10 + 1]) ? ((+(((((/* implicit */_Bool) 10408293098263556485ULL)) ? (((/* implicit */int) (unsigned short)52397)) : (((/* implicit */int) arr_6 [i_0])))))) : ((-(((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (unsigned short)65274)) : (((/* implicit */int) (unsigned short)3980))))))));
                    var_26 &= ((short) (unsigned short)13123);
                    var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) min(((unsigned short)16388), (((/* implicit */unsigned short) (_Bool)1))))) - (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (unsigned short)3980))));
                }
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_28 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_9])), (max((var_3), (((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_14 [i_0] [i_7] [i_0] [i_0] [i_0]);
                }
                /* LoopSeq 3 */
                for (short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((0ULL) | (8598094274479354229ULL))))));
                    var_30 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
                    arr_38 [i_0] [(short)0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 3969659917U)) ? (((/* implicit */int) (unsigned short)3980)) : (((/* implicit */int) arr_6 [i_0]))))))) + (((((/* implicit */_Bool) arr_1 [i_7])) ? (arr_1 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_39 [i_12] [i_7] = ((/* implicit */unsigned long long int) 3969659932U);
                }
                for (short i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                {
                    arr_42 [i_13] [i_9] [i_0] = ((/* implicit */unsigned int) ((max((arr_2 [i_0]), (arr_2 [i_0]))) ? (((min((var_5), (9848649799230197387ULL))) / (12053036507932362552ULL))) : (((((unsigned long long int) 16131375454997977781ULL)) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)61571)))) - (61518)))))));
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((arr_9 [i_0] [i_13] [i_9] [i_13]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)262))))) : (((/* implicit */int) ((((/* implicit */_Bool) 12050562510262297635ULL)) && (((/* implicit */_Bool) 22ULL))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        arr_45 [i_0] [9U] [i_7] [9U] [i_13] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6396181563447253981ULL)) ? (((/* implicit */int) (unsigned short)28449)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_44 [i_7] [i_7] [i_7])))) : ((~(((/* implicit */int) (!((_Bool)1))))))));
                        arr_46 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_24 [4ULL] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_14] [i_0]))) : (var_0))), (((/* implicit */unsigned int) min((arr_24 [i_7] [i_14] [i_14]), (arr_24 [i_14] [i_14] [i_0]))))));
                        var_32 *= ((/* implicit */short) (((_Bool)0) && ((_Bool)0)));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)3965))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (2215779738411576929ULL)));
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) (_Bool)0);
                        var_35 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)262));
                        var_36 = ((/* implicit */_Bool) 8598094274479354229ULL);
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))) + (16230964335297974692ULL)))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        arr_59 [i_0] [i_7] [i_9] [i_7] [i_13] [i_13] [i_17] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_9 [i_0] [i_7] [i_13] [i_17]))))));
                        var_38 = ((/* implicit */unsigned long long int) var_7);
                    }
                    var_39 = ((/* implicit */_Bool) var_4);
                }
                for (unsigned char i_18 = 1; i_18 < 9; i_18 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                    {
                        arr_67 [i_0] [i_9] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_17 [i_19] [i_18] [i_9] [i_7] [i_7] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_36 [i_0])) : (((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_19] [i_9] [i_18] [i_19] [i_9] [i_9]))) != (0ULL))))));
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61571)) ? (((/* implicit */int) (short)3213)) : (((/* implicit */int) (_Bool)0)))))));
                        var_41 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_19] [i_18] [i_18] [i_9] [i_7] [i_0]))))) || (((((/* implicit */int) (short)3213)) <= (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) min((12050562510262297648ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_7] [i_7]))) + (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2472220601U))))))));
                        arr_68 [i_0] [i_7] [4U] [4U] [i_19] [i_19] = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65157))))) & (((var_10) >> (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) /* same iter space */
                    {
                        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_43 [i_0] [i_7] [i_7] [i_18] [i_20])) ? (var_10) : (arr_16 [i_20] [i_7] [i_9] [i_7] [i_0]))))), (((((((/* implicit */int) (unsigned short)261)) != (((/* implicit */int) arr_4 [i_0] [(short)0] [i_18])))) ? (((((/* implicit */_Bool) (unsigned short)379)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_18] [i_7]))) : (11689916128505629223ULL))) : (var_5))))))));
                        arr_71 [i_0] [i_7] [i_9] [i_18] [i_20] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) arr_31 [i_0] [3U] [i_9] [i_0])) ? (((/* implicit */int) (short)3208)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) (short)3221)) - (3211)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_21 = 0; i_21 < 11; i_21 += 3) /* same iter space */
                    {
                        var_43 ^= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_18] [i_18 + 2] [i_18 + 1] [i_18] [i_18 + 1] [i_18] [i_9]))) : (((unsigned int) 16230964335297974687ULL))));
                        arr_75 [i_21] [i_18] [i_9] [i_7] [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 16230964335297974690ULL))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_22 = 2; i_22 < 10; i_22 += 1) 
                    {
                        arr_79 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 0U);
                        var_44 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) (short)3213)));
                    }
                    arr_80 [i_0] [i_7] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (_Bool)1))));
                }
                var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)19)))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) (!((_Bool)1))))));
            }
            for (unsigned char i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
            {
                var_46 = ((/* implicit */_Bool) (+((-((-(((/* implicit */int) var_1))))))));
                var_47 *= ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)65274)))) <= (((/* implicit */int) ((unsigned short) var_0))))))) > (((arr_70 [i_0] [i_7]) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3209))))) : (((arr_16 [i_0] [i_0] [i_23] [i_23] [i_0]) >> (((var_8) - (5956985059765084579ULL))))))));
                /* LoopNest 2 */
                for (unsigned char i_24 = 1; i_24 < 10; i_24 += 2) 
                {
                    for (unsigned long long int i_25 = 1; i_25 < 10; i_25 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                            var_49 = ((/* implicit */_Bool) arr_90 [i_0] [i_7] [i_23] [i_24 + 1] [i_23] [i_7]);
                            var_50 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_51 [i_0] [i_25 + 1] [i_23] [i_24] [i_24 + 1] [i_0]))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_26 = 0; i_26 < 11; i_26 += 3) 
        {
            var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) var_9))));
            var_52 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_57 [i_0] [i_0] [i_0] [i_0] [i_26]))) ? (min((((/* implicit */unsigned long long int) min((arr_89 [i_0]), (((/* implicit */short) (_Bool)1))))), (min((9848649799230197388ULL), (((/* implicit */unsigned long long int) (short)-32667)))))) : (var_5)));
            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) arr_69 [i_0] [i_26] [i_26] [i_26]))));
            var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), ((~((+(((/* implicit */int) (short)-3204)))))))))));
        }
        for (unsigned short i_27 = 3; i_27 < 8; i_27 += 3) 
        {
            arr_96 [i_27 - 3] [i_27] [i_0] = ((_Bool) arr_25 [i_27] [i_27 - 3] [i_27]);
            var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_76 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((!(((/* implicit */_Bool) (short)-3194)))))))));
            arr_97 [i_0] [(unsigned short)5] [i_27] = ((/* implicit */short) ((arr_70 [i_0] [i_27]) ? ((~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)4)), (arr_93 [i_27])))))) : (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_29 [i_27] [i_27]))))));
            arr_98 [i_27] [i_27] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (((unsigned int) 6396181563447253987ULL))));
        }
        arr_99 [i_0] |= ((/* implicit */unsigned int) var_6);
    }
    var_56 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32137)) != (((/* implicit */int) (_Bool)1))));
    var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) var_6))));
    var_58 = ((/* implicit */unsigned int) ((_Bool) var_4));
    var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) (short)-32688))));
}
