/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236730
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((min((((/* implicit */unsigned int) arr_2 [1ULL] [i_1] [i_0])), (2923586833U))) >= (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)12), (((/* implicit */unsigned char) var_8)))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [(unsigned char)2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max(((-(((arr_1 [i_1] [i_4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) min((arr_5 [i_3] [i_3 - 3] [i_3 - 1] [i_3 - 2]), (arr_5 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 3]))))));
                                var_13 += ((/* implicit */_Bool) max((var_3), (((/* implicit */int) ((signed char) 33554432)))));
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    arr_18 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (arr_3 [(unsigned short)12])))) ? (((/* implicit */int) ((_Bool) 3319466723364102735LL))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))) != (arr_1 [i_5] [i_5])))))) + (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-22138)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_6]), (((/* implicit */unsigned long long int) arr_13 [i_5] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (signed char)-66))))))))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_19 [i_7] [i_6] [i_5] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2364596205U) >= (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_6)))))))))));
                        var_17 *= ((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
                        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_7] [(_Bool)1]) : (arr_1 [i_0] [i_0]))) + (((/* implicit */unsigned long long int) 1371380462U))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_8 = 2; i_8 < 21; i_8 += 3) 
    {
        var_19 *= ((/* implicit */short) ((((7) > (((/* implicit */int) arr_22 [i_8 + 2] [i_8 + 2])))) ? ((~(((/* implicit */int) arr_21 [i_8 - 2] [(_Bool)1])))) : (((/* implicit */int) var_8))));
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_20 = ((/* implicit */long long int) (((~(max((arr_26 [i_8] [i_8] [(signed char)17]), (((/* implicit */unsigned int) arr_24 [(unsigned short)21] [i_9] [11LL])))))) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77)))));
            var_21 -= (signed char)69;
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) max((((((((/* implicit */int) (signed char)67)) % (((/* implicit */int) var_10)))) >> (((((/* implicit */_Bool) arr_25 [i_8] [i_10 + 1])) ? (((/* implicit */int) arr_24 [i_8] [(_Bool)1] [i_8])) : (((/* implicit */int) (signed char)-73)))))), (((/* implicit */int) (_Bool)0))));
            var_23 -= ((/* implicit */unsigned char) 6477843482127937257ULL);
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_10 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4064))))) : (min((((/* implicit */int) min((arr_31 [i_8] [i_8]), (((/* implicit */signed char) var_7))))), (((6) / (var_4)))))));
                        arr_36 [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)-68), (((/* implicit */signed char) (_Bool)1))))) + (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)69))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_10 + 1])) + (((/* implicit */int) arr_35 [i_8] [i_10 + 1] [i_10 + 1] [i_8]))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_7))))), (arr_27 [i_11] [i_10])))));
                        var_25 = ((/* implicit */_Bool) arr_34 [i_8 + 1] [i_8 - 1]);
                    }
                } 
            } 
        }
        for (int i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                arr_42 [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_8 + 2] [i_8 + 2])))))));
                var_26 ^= ((/* implicit */unsigned char) (-((+(((/* implicit */int) max((((/* implicit */signed char) var_7)), ((signed char)-112))))))));
                /* LoopSeq 3 */
                for (signed char i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (unsigned char)243)), (4265134854997720725ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)251)))))))))))));
                    var_28 = ((unsigned long long int) ((arr_24 [i_8 - 2] [i_8 - 2] [i_8 + 2]) ? (((/* implicit */int) ((unsigned short) 5166368819376126064ULL))) : (((/* implicit */int) var_10))));
                    /* LoopSeq 1 */
                    for (short i_16 = 2; i_16 < 20; i_16 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_25 [i_8] [i_16 - 2])))), ((~(((/* implicit */int) (unsigned char)192))))));
                        var_30 = max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)12))))));
                        var_31 = ((/* implicit */_Bool) min((min(((short)-1), (((/* implicit */short) (unsigned char)0)))), (((/* implicit */short) (_Bool)1))));
                    }
                }
                /* vectorizable */
                for (signed char i_17 = 0; i_17 < 23; i_17 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_52 [i_8] [(unsigned char)1] [i_14] [i_13] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) : (1371380463U))) << (((arr_23 [i_8 - 2] [i_8 - 1]) - (253298793U)))));
                        var_32 = ((/* implicit */int) max((var_32), ((~(((/* implicit */int) (unsigned char)69))))));
                        var_33 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)23422)) ? (2923586832U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
                        var_34 = ((/* implicit */long long int) var_9);
                    }
                    arr_53 [i_17] [(unsigned char)9] [i_8] = ((/* implicit */unsigned char) (~(arr_37 [16U] [12ULL] [i_8 - 2])));
                }
                for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 1) 
                {
                    var_35 += ((/* implicit */signed char) var_11);
                    arr_57 [(_Bool)1] [i_14] [i_13] [(_Bool)1] &= ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_43 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8] [i_8 - 2]))))));
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_8] [i_8] [i_8])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 908220820862133061ULL))))))))));
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) var_7))))))));
                }
            }
            for (unsigned char i_20 = 0; i_20 < 23; i_20 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 2) 
                {
                    var_38 = min((1154675466293225877ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 32767LL)) ? (((/* implicit */unsigned int) arr_39 [i_8 + 1] [i_8] [i_8])) : ((+(8U)))))));
                    var_39 = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) arr_41 [i_8] [i_8 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_13] [(unsigned char)17]))) : (2436633936831569487LL))) - (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))))));
                    /* LoopSeq 1 */
                    for (int i_22 = 0; i_22 < 23; i_22 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned int) (~(var_3)));
                        var_41 *= ((/* implicit */short) (+(((min((((/* implicit */int) var_8)), (var_3))) / (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_11))))))));
                    }
                }
                arr_66 [i_8] = ((/* implicit */long long int) (!((_Bool)1)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_23 = 4; i_23 < 22; i_23 += 1) 
                {
                    arr_70 [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)60589)) + (((/* implicit */int) (_Bool)1))));
                    var_42 |= ((/* implicit */_Bool) (unsigned short)42103);
                    var_43 = (~(((/* implicit */int) (_Bool)1)));
                    arr_71 [i_8] [i_13] = ((/* implicit */short) ((((((/* implicit */int) arr_44 [i_8] [i_8] [(unsigned short)19] [(unsigned short)19] [i_23])) <= (((/* implicit */int) (unsigned char)9)))) ? (((((/* implicit */int) (short)0)) + (((/* implicit */int) (signed char)-121)))) : (((/* implicit */int) var_6))));
                    var_44 = ((/* implicit */signed char) ((arr_56 [i_8] [i_8] [i_8 - 2] [i_8] [i_8 - 2] [i_8]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24)))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 3) 
                {
                    for (short i_25 = 0; i_25 < 23; i_25 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_35 [i_8] [i_20] [i_24] [i_25])) ? (((/* implicit */int) arr_35 [i_8] [(signed char)7] [i_20] [i_24])) : (((/* implicit */int) arr_35 [i_8] [(_Bool)1] [i_20] [i_24])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_8] [i_25] [i_20] [(unsigned char)4])))))));
                            var_46 -= ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) arr_28 [i_13] [i_8 + 2] [i_8 + 2])), ((short)7)))) / (((((/* implicit */_Bool) arr_28 [i_8] [i_8 + 1] [(_Bool)0])) ? (((/* implicit */int) arr_28 [i_8] [i_8 - 1] [i_8])) : (((/* implicit */int) arr_28 [i_8] [i_8 - 2] [i_20]))))));
                            var_47 = ((/* implicit */short) (~(((((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (signed char)127)) : (2147450880))) / (((/* implicit */int) (short)-24))))));
                            var_48 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_48 [i_8 - 1] [i_8 + 1] [i_20] [12ULL])) * (((/* implicit */int) var_0)))) / (((/* implicit */int) arr_48 [i_8 + 1] [i_8 - 2] [i_13] [i_25]))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_29 [i_8] [i_13] [i_20] [i_8 + 1]) ? (((/* implicit */int) arr_29 [i_8] [i_13] [i_13] [i_8 - 2])) : (((/* implicit */int) (unsigned short)1))))) ? ((-(((/* implicit */int) (short)-3112)))) : (((((/* implicit */int) arr_29 [i_8] [i_13] [i_13] [i_8 + 1])) + (((/* implicit */int) arr_29 [i_8] [i_13] [12U] [i_8 - 2])))))))));
            }
            var_50 = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */short) arr_72 [i_8 + 2] [i_8] [i_8] [i_8])), (max(((short)-27119), (((/* implicit */short) (_Bool)1)))))))));
        }
        /* LoopNest 3 */
        for (signed char i_26 = 0; i_26 < 23; i_26 += 4) 
        {
            for (short i_27 = 2; i_27 < 20; i_27 += 1) 
            {
                for (long long int i_28 = 1; i_28 < 22; i_28 += 1) 
                {
                    {
                        var_51 &= ((/* implicit */short) arr_60 [i_8] [i_26]);
                        arr_87 [i_8] [(unsigned char)21] [(unsigned char)21] [i_27] [i_8] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) arr_72 [i_26] [i_26] [7] [i_26])) : (var_3)))), (((((/* implicit */long long int) var_4)) / (arr_27 [i_8] [i_26])))))) ? (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)15)), (var_11)))) | (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */int) var_9)))))) : (((arr_24 [(unsigned char)12] [i_26] [(short)12]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_82 [i_8]))))));
                        arr_88 [i_8] [i_8 + 1] [i_8] [i_8 + 2] [i_8] = ((/* implicit */long long int) (unsigned short)21454);
                        arr_89 [i_8] [i_8] [(unsigned short)21] = ((/* implicit */unsigned short) min((((arr_24 [i_8 - 2] [i_8 - 1] [i_8 - 2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-26506)))), (((/* implicit */int) ((((/* implicit */int) arr_24 [i_8 - 1] [i_8 - 2] [i_8 + 1])) > (((/* implicit */int) arr_24 [i_8 + 1] [i_8 + 2] [i_8 - 2])))))));
                        var_52 = ((/* implicit */unsigned long long int) (short)-25);
                    }
                } 
            } 
        } 
    }
    for (short i_29 = 0; i_29 < 17; i_29 += 1) 
    {
        arr_92 [i_29] [i_29] = ((/* implicit */long long int) min(((unsigned char)15), (((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_29] [i_29] [(short)7] [i_29] [i_29])) >= (((((/* implicit */_Bool) 141908242371070080LL)) ? (((/* implicit */int) arr_63 [i_29] [(short)6] [i_29] [i_29] [i_29] [i_29])) : (((/* implicit */int) var_10)))))))));
        var_53 = (!(((/* implicit */_Bool) min(((-(((/* implicit */int) arr_32 [i_29] [(_Bool)1] [i_29])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_29] [i_29] [i_29] [(short)20] [i_29] [i_29])))))))));
        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)30812), (((/* implicit */unsigned short) arr_72 [i_29] [i_29] [i_29] [i_29]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_72 [i_29] [i_29] [19ULL] [i_29])) : (((/* implicit */int) arr_72 [i_29] [i_29] [i_29] [i_29])))) : (((((/* implicit */int) arr_72 [i_29] [i_29] [i_29] [i_29])) ^ (((/* implicit */int) arr_72 [i_29] [i_29] [i_29] [i_29]))))));
        var_55 ^= (((+(arr_56 [i_29] [i_29] [i_29] [4] [i_29] [i_29]))) >= (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (short)-8889)) : (((/* implicit */int) (short)26494))))));
        arr_93 [(short)6] [i_29] = ((((/* implicit */_Bool) min((arr_37 [i_29] [i_29] [i_29]), (arr_37 [i_29] [i_29] [i_29])))) ? (((/* implicit */unsigned long long int) (~(arr_37 [i_29] [i_29] [i_29])))) : (max((14ULL), (((/* implicit */unsigned long long int) arr_17 [i_29] [(short)9] [i_29] [i_29])))));
    }
    var_56 = ((/* implicit */unsigned char) var_10);
    var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) var_4))));
}
