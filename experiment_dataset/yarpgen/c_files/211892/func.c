/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211892
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
    var_19 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_17)) ? (((var_18) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) >> (((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (var_0) : (((/* implicit */int) var_4))))), (((var_5) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) - (9258206517192870221ULL)))));
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_2))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [(signed char)16] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_4 [i_0])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46259))) : (arr_5 [i_0])))));
                    arr_10 [i_0] [(unsigned short)16] [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (((/* implicit */int) max((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */short) var_1))))))));
                    var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_18))))) ? (((long long int) arr_1 [i_2] [i_1 - 3])) : (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_2]), (var_5)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 2; i_3 < 13; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                arr_20 [i_3 - 1] [i_4] [i_4] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (signed char)-29)), (max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_9))))) >> (((((/* implicit */int) var_11)) - (36246)))));
                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_5])), (arr_5 [6ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3])) > (((/* implicit */int) var_4)))))))) ? (((int) arr_13 [i_3 + 1])) : ((+(((/* implicit */int) var_3))))));
                var_23 = ((/* implicit */short) (_Bool)1);
            }
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_3 + 2]))))), ((~(1413962090609723717LL))))))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((((-(((/* implicit */int) (unsigned char)167)))) / (((/* implicit */int) var_11)))) / (((/* implicit */int) var_5)))))));
            /* LoopNest 3 */
            for (long long int i_7 = 2; i_7 < 14; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_26 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) > (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */long long int) arr_28 [i_3 + 2] [i_3 + 2]))))))), (((var_5) ? (var_10) : (arr_11 [i_3 - 2] [i_6 - 1])))));
                            var_27 = (!(((/* implicit */_Bool) arr_18 [i_7])));
                        }
                    } 
                } 
            } 
            arr_29 [i_3] [i_3] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_1 [12U] [i_6 - 1])))))))), (var_2)));
            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(arr_17 [i_3 + 1] [i_6 - 1] [i_6 - 1])))) ^ (((unsigned int) max((var_10), (268419072ULL))))));
            var_29 &= (signed char)63;
        }
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) arr_12 [i_3 - 1]))));
        var_31 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (7253401837112857476ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_3 + 2])), ((unsigned short)65535)))))));
        var_32 = ((/* implicit */short) (+((+(max((11193342236596694135ULL), (var_7)))))));
        arr_30 [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_21 [i_3 + 1])) * (((((/* implicit */int) arr_1 [(signed char)12] [i_3])) * (((/* implicit */int) var_8))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_33 = ((/* implicit */signed char) arr_31 [i_10] [i_10]);
        var_34 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 11193342236596694125ULL)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopSeq 4 */
        for (signed char i_11 = 4; i_11 < 16; i_11 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_12 = 4; i_12 < 14; i_12 += 2) 
            {
                for (signed char i_13 = 3; i_13 < 14; i_13 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_14 = 2; i_14 < 17; i_14 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
                            arr_42 [i_10] [i_11 - 4] [i_13] [i_13] [i_14] = ((/* implicit */short) (-(max((((/* implicit */int) arr_35 [i_11 + 2])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_35 [i_12]))))))));
                        }
                        arr_43 [i_10] [i_10] [i_12 + 3] [i_13] = ((/* implicit */unsigned short) (_Bool)1);
                        var_36 = ((/* implicit */unsigned int) arr_32 [i_13]);
                        arr_44 [i_10] [i_13] [i_12 - 3] [(signed char)5] = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */short) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_38 [i_10] [i_11] [i_12] [i_13] [i_12] [(unsigned char)1]))))))))));
                        arr_45 [i_10] [i_13] [i_12] [i_12] = min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_34 [i_10] [i_11])) ? (((/* implicit */int) arr_41 [i_10] [i_11] [i_11] [i_12] [i_13])) : (((/* implicit */int) arr_31 [i_11] [i_11])))) / ((+(((/* implicit */int) (_Bool)1))))))), (((max((arr_41 [i_10] [(short)8] [i_10] [i_10] [i_10]), (arr_33 [i_11 - 2] [i_11 - 2] [i_11 - 2]))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_31 [(short)3] [i_11]))) & (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_35 [i_11]))))))));
                    }
                } 
            } 
            var_37 = ((((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_10] [(signed char)12] [i_10])) && (((/* implicit */_Bool) -1407947766))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_10]))))))) == (((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
            arr_46 [i_10] [0ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)-64)) ^ (((/* implicit */int) (short)16394)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65510)) || (((/* implicit */_Bool) arr_39 [i_10] [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11 - 2])))))))) ? ((+(arr_32 [i_11 - 4]))) : (((((/* implicit */_Bool) (-(var_14)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-5234298518985937837LL))) : (arr_32 [i_10])))));
        }
        for (signed char i_15 = 4; i_15 < 16; i_15 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
            {
                arr_52 [i_16] = ((/* implicit */unsigned char) ((unsigned int) 7253401837112857478ULL));
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) min((min((((((/* implicit */_Bool) 18446744073709551613ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_10]))))), (arr_34 [i_15 + 2] [i_16 + 1]))), (((/* implicit */unsigned long long int) ((arr_31 [i_15 - 3] [i_16 + 1]) ? (((/* implicit */int) arr_31 [i_15 - 3] [i_16 + 1])) : (((/* implicit */int) arr_31 [i_15 - 4] [i_16 + 1]))))))))));
            }
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
            {
                var_39 ^= ((/* implicit */signed char) var_6);
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 18; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */long long int) var_16);
                            arr_60 [i_19] [i_15] [i_17 + 1] [i_17 + 1] [i_19] = (+(((/* implicit */int) min((((/* implicit */signed char) arr_50 [i_15 - 1] [i_17 + 1] [i_19] [i_19])), (((signed char) var_12))))));
                            arr_61 [i_19] = ((/* implicit */long long int) arr_36 [i_15 - 4] [i_17] [i_18]);
                        }
                    } 
                } 
                var_41 *= ((/* implicit */signed char) (-(((/* implicit */int) var_18))));
            }
            /* LoopSeq 2 */
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                arr_65 [i_10] [i_15] [i_20] [i_15] &= ((/* implicit */signed char) min((((/* implicit */long long int) min((((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [16ULL] [i_10] [i_15] [i_20] [i_20 - 1]))))), (var_3)))), (max((((((/* implicit */_Bool) (signed char)-53)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-53))))), (min((((/* implicit */long long int) arr_56 [i_10] [i_15])), (arr_32 [i_10])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        {
                            arr_73 [i_20] [i_22] [i_20] [2] [i_22] [i_10] [i_20] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_1)), (((long long int) arr_66 [i_10] [i_15 + 1] [i_20] [i_21] [i_20]))));
                            arr_74 [i_20] [2] [i_20] [2] [i_22] [i_15] = ((/* implicit */long long int) ((max(((!(((/* implicit */_Bool) arr_35 [12LL])))), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_40 [i_10] [i_15 - 1] [(_Bool)1] [i_21] [i_22] [i_10] [i_21]), (((/* implicit */unsigned short) arr_39 [i_10] [i_10] [i_20] [i_21] [i_22] [i_15 - 2]))))) ? ((~(var_14))) : (((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_10] [i_10] [i_10] [i_20 - 1] [i_21] [i_22])) | (((/* implicit */int) arr_47 [i_10])))))))) : (min((((/* implicit */unsigned long long int) arr_71 [i_15 - 1] [i_15 + 2] [i_15 - 3] [i_20 - 1] [i_20 - 1])), (min((var_7), (((/* implicit */unsigned long long int) var_17))))))));
                            arr_75 [i_10] [i_10] [i_10] [i_20] [i_10] [i_15 + 2] = ((/* implicit */_Bool) min((max(((-(var_9))), (((/* implicit */unsigned long long int) arr_67 [i_10] [i_20] [i_21] [i_22 + 1])))), (((((/* implicit */_Bool) (~(var_9)))) ? (min((((/* implicit */unsigned long long int) var_1)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_22 + 1] [i_20 - 1] [i_20])))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_23 = 1; i_23 < 16; i_23 += 4) 
            {
                arr_79 [i_10] [i_15 + 1] [i_23] [i_23 + 2] = ((/* implicit */_Bool) ((((_Bool) arr_67 [(short)6] [i_15] [i_23] [i_23])) ? (((/* implicit */int) arr_48 [i_10] [16ULL])) : (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_67 [i_10] [i_15] [i_23 + 2] [10LL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16)))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_35 [15]))))))));
                var_42 -= ((/* implicit */unsigned char) (+(((long long int) ((var_0) - (((/* implicit */int) var_17)))))));
                var_43 = arr_32 [i_15];
                /* LoopSeq 1 */
                for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                {
                    arr_82 [i_10] [i_15] [i_10] = (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_40 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (arr_80 [i_15 - 4] [i_23] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                    var_44 = ((/* implicit */long long int) arr_35 [i_10]);
                    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) arr_71 [i_10] [i_23] [i_23] [i_24] [i_15 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_14))))), (((/* implicit */long long int) ((arr_50 [i_10] [i_10] [i_15 - 2] [i_10]) ? (((((/* implicit */int) var_11)) << (((/* implicit */int) arr_31 [i_10] [i_23])))) : (((/* implicit */int) arr_48 [i_10] [i_10]))))))))));
                }
            }
        }
        for (signed char i_25 = 4; i_25 < 16; i_25 += 4) /* same iter space */
        {
            var_46 = (-(4921799653231691199ULL));
            var_47 = arr_59 [i_10] [i_10] [i_10] [i_25 - 3] [i_10];
        }
        for (signed char i_26 = 4; i_26 < 16; i_26 += 4) /* same iter space */
        {
            var_48 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 8075554451052294219ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) : (-827124353122324966LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_71 [i_10] [i_10] [i_10] [i_26] [i_26 - 4])), (var_13)))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) (short)20026)))) : (((((/* implicit */_Bool) var_14)) ? (1085252378) : (((/* implicit */int) (_Bool)1)))))))));
            var_49 = ((/* implicit */signed char) ((((((/* implicit */int) ((unsigned char) var_16))) * (((/* implicit */int) arr_33 [i_26 - 2] [i_26 + 2] [i_26 - 2])))) << ((((~(arr_63 [i_26]))) - (6288225723772480730LL)))));
        }
        var_50 = ((/* implicit */short) ((min((arr_72 [(_Bool)1] [(_Bool)1] [6] [i_10] [(_Bool)1] [6LL]), (arr_88 [i_10]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) arr_62 [i_10] [i_10])), (var_14))) < (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))))) : (((unsigned int) -1351569468))));
    }
    var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((_Bool) (_Bool)0)))));
}
