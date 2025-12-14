/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27655
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((((((/* implicit */unsigned long long int) var_6)) / (arr_0 [i_0]))) * (min((14124316269676444210ULL), (((/* implicit */unsigned long long int) 1023)))))) * (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1017)) ? (((/* implicit */int) (_Bool)1)) : (1016))), (1022)))))))));
        var_13 = ((((var_3) != (((((/* implicit */_Bool) 2119254726U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_0 [(signed char)4]))))) ? (max((arr_1 [(short)0] [i_0]), (((/* implicit */unsigned int) ((1002) << (((((/* implicit */int) var_5)) - (140)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) <= (((var_7) ? (arr_0 [i_0]) : (arr_0 [9ULL]))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1]))) ^ (((((/* implicit */_Bool) var_9)) ? (arr_6 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)12] [i_2] [i_2])))))));
                arr_11 [i_2] [1ULL] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) ? (arr_10 [i_2] [i_2] [i_2]) : (arr_10 [i_2] [i_2] [i_2])));
            }
            arr_12 [i_2] [0] [i_2] = ((/* implicit */unsigned int) min((var_2), (((/* implicit */short) var_9))));
            var_15 = ((/* implicit */_Bool) max((min(((+(1023))), (((((/* implicit */_Bool) 1017)) ? (-1009) : (((/* implicit */int) arr_4 [i_2])))))), (((/* implicit */int) var_2))));
            var_16 *= ((/* implicit */short) (_Bool)0);
        }
        for (short i_4 = 2; i_4 < 18; i_4 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))), (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) var_11))))))) ? (min((((/* implicit */int) min((((/* implicit */signed char) var_10)), ((signed char)4)))), ((+(((/* implicit */int) arr_7 [i_1] [i_1])))))) : (max((((((((/* implicit */int) arr_8 [i_1 - 1])) + (2147483647))) << (((((/* implicit */int) var_4)) - (22962))))), (((/* implicit */int) arr_3 [i_1 - 1]))))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (short)13192)))), (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-1005)))) ? (min((var_11), (((/* implicit */int) arr_9 [(_Bool)1] [i_4] [(_Bool)1])))) : (1016)))) : (min((((/* implicit */unsigned long long int) var_11)), (min((arr_6 [(_Bool)1] [i_4] [19]), (((/* implicit */unsigned long long int) -8LL)))))))))));
        }
        for (long long int i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            var_19 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_14 [i_1] [i_1]) ? (((/* implicit */int) ((((/* implicit */_Bool) -1040)) || (((/* implicit */_Bool) var_3))))) : (max((-1017), (((/* implicit */int) (signed char)(-127 - 1)))))))) > (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (1012)))) ? (arr_15 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095)))))));
            var_20 *= var_6;
            var_21 *= ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                var_22 += ((/* implicit */int) (+(((min((var_1), (((/* implicit */unsigned int) arr_7 [i_1 - 1] [i_7])))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [(short)8])))))));
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) min(((+(-8LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [3LL])) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_6] [i_1])) : (((/* implicit */int) (signed char)102)))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29014))))))));
                var_24 = ((/* implicit */signed char) arr_3 [i_6 - 1]);
                /* LoopSeq 1 */
                for (long long int i_8 = 4; i_8 < 19; i_8 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) -1017)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (signed char)-40)))) - (arr_19 [i_6] [i_6] [i_1 - 1]))) / (((((/* implicit */_Bool) arr_26 [i_6 - 1] [i_8 - 1] [i_7] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_26 [i_6 - 1] [i_8 - 1] [i_6 - 1] [i_1 - 1]))))));
                    arr_27 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */signed char) (_Bool)1);
                }
            }
            for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                var_26 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-28LL)));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                {
                    arr_32 [i_6] [i_6] [i_6] [i_1] [(signed char)17] [i_6] = ((/* implicit */long long int) (((+(-1017))) + (((/* implicit */int) arr_5 [i_10] [i_10]))));
                    var_27 = ((/* implicit */short) 30720);
                    /* LoopSeq 1 */
                    for (short i_11 = 2; i_11 < 18; i_11 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_4)) ? (-1024) : (((/* implicit */int) var_2)))))))));
                        var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) -1023)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)48))));
                    }
                    var_30 = ((/* implicit */int) max((var_30), ((+(((/* implicit */int) arr_5 [i_1 - 1] [i_6 - 1]))))));
                }
                for (signed char i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                {
                    arr_39 [i_12] [i_6] [11] [i_6] [i_1 - 1] = ((/* implicit */short) var_1);
                    /* LoopSeq 4 */
                    for (short i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        var_31 *= ((/* implicit */signed char) min(((+(16469662804162964908ULL))), (((/* implicit */unsigned long long int) 4294967277U))));
                        arr_44 [i_13] [i_6] [(unsigned short)6] [i_9] [(_Bool)1] [i_6] [i_1] = ((/* implicit */int) ((max((max((var_3), (((/* implicit */unsigned long long int) arr_35 [i_6] [i_6])))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_2))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((1824633158U), (((/* implicit */unsigned int) (_Bool)1)))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_30 [10] [(signed char)17] [(signed char)17] [10]) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_6])))))))))));
                        var_32 *= ((/* implicit */short) max((((((/* implicit */_Bool) max((1073741824U), (arr_29 [6ULL])))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_6 - 1])) ? (-1628224842236528504LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [14] [i_9] [14])))))))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) arr_13 [i_6] [(signed char)11] [i_12])), (var_6))))))));
                    }
                    for (short i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        arr_48 [i_14] [i_6] [i_12] [i_9] [(short)18] [i_6] [(short)18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [(short)20] [(short)20] [(short)20] [i_12] [(short)20])) ? (((((/* implicit */_Bool) 436385789)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (var_11)));
                        var_33 += ((/* implicit */unsigned short) ((((((/* implicit */int) min((arr_38 [i_14]), (arr_38 [i_14])))) + (2147483647))) >> (((((/* implicit */int) arr_38 [i_14])) + (2166)))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */signed char) arr_34 [i_1] [i_1] [i_9] [i_12] [3U]);
                        arr_51 [i_1] [i_1] [i_9] [i_12] [i_6] = var_4;
                        var_35 *= ((/* implicit */short) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_2))));
                    }
                    for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 2) 
                    {
                        var_36 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) -1070212603))))) ? (-827520782) : (((/* implicit */int) ((1070212600) <= (((/* implicit */int) (signed char)-83)))))))));
                        arr_54 [i_6] [(unsigned short)18] [i_6] = ((/* implicit */unsigned int) var_11);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_6])) && (arr_21 [i_1 - 1] [i_6] [(unsigned short)18] [i_12])));
                        var_38 = ((/* implicit */unsigned short) ((1017) - (((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_18] [(_Bool)1] [i_6] [(_Bool)1])) <= (max((((((/* implicit */_Bool) arr_5 [i_9] [i_18])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))), ((+(((/* implicit */int) (_Bool)1))))))));
                        var_40 += ((/* implicit */short) ((min((1004), (((/* implicit */int) (short)-13336)))) & (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_29 [i_18])))))));
                        var_41 = arr_7 [(unsigned short)3] [i_1 - 1];
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_42 *= max((((/* implicit */unsigned long long int) min((min((((/* implicit */int) arr_4 [i_1 - 1])), (-1002))), ((+(((/* implicit */int) (_Bool)1))))))), (min((min((7885846130290235594ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9520166686643327485ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)207))))))));
                        var_43 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)65)) * (((/* implicit */int) (short)27067))));
                        arr_62 [(signed char)16] [i_6] [i_6] [(signed char)16] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((var_0), (((/* implicit */signed char) arr_14 [i_6 - 1] [i_1 - 1])))))));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_20 = 1; i_20 < 20; i_20 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) 1070212604))));
                        var_45 = ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (min((((/* implicit */long long int) min((-1011), (((/* implicit */int) var_0))))), (var_6))));
                    }
                    for (short i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        var_46 = ((/* implicit */unsigned short) var_5);
                        var_47 += ((/* implicit */int) (((+(((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9451))))))) - (((/* implicit */unsigned long long int) -1013))));
                        arr_69 [i_6] [i_6] [i_6] [18] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(11520344985167118101ULL))) * (((/* implicit */unsigned long long int) min((-1002), (((/* implicit */int) (unsigned char)86)))))))) ? (((/* implicit */int) var_8)) : (max((((((/* implicit */_Bool) arr_49 [7U] [1LL] [10] [7U] [i_21])) ? (2125100453) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)241)) >= (((/* implicit */int) (signed char)29)))))))));
                    }
                    for (unsigned char i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        arr_72 [i_6] [i_6] = min((((arr_20 [0U] [i_1 - 1] [i_6]) ? (((/* implicit */int) arr_20 [i_1] [i_1 - 1] [i_6])) : (((/* implicit */int) arr_20 [i_1] [i_1 - 1] [i_6])))), (((((/* implicit */int) arr_20 [i_1] [i_1 - 1] [i_6])) - (((/* implicit */int) var_2)))));
                        var_48 = ((((/* implicit */int) min((arr_20 [i_1 - 1] [i_6 - 1] [i_6]), (arr_20 [i_1 - 1] [i_6 - 1] [i_6])))) - (((/* implicit */int) ((min((6527620363425348317LL), (((/* implicit */long long int) (_Bool)1)))) > (((/* implicit */long long int) min((((/* implicit */int) arr_24 [i_1] [i_6 - 1] [i_9] [i_12])), (-1002))))))));
                        arr_73 [i_22] [i_12] [i_6] [i_6] [i_6] [i_1] = var_0;
                    }
                    for (unsigned short i_23 = 1; i_23 < 20; i_23 += 3) 
                    {
                        var_49 += ((/* implicit */short) ((((/* implicit */int) (unsigned char)1)) - (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)42)) : (arr_30 [i_6] [i_6] [i_6] [i_1]))) - (min((arr_19 [(signed char)20] [i_6] [i_6]), (((/* implicit */int) var_8))))))));
                        var_50 = ((/* implicit */int) var_0);
                    }
                }
                /* vectorizable */
                for (signed char i_24 = 0; i_24 < 21; i_24 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 1) 
                    {
                        arr_84 [i_1] [i_6] [i_9] [i_24] [i_24] [i_1 - 1] [14ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1070212611)) + ((+(arr_6 [i_1 - 1] [i_25] [i_9])))));
                        arr_85 [i_25] [i_24] [i_6] [i_6 - 1] [(unsigned short)12] = var_11;
                    }
                    /* LoopSeq 1 */
                    for (short i_26 = 0; i_26 < 21; i_26 += 4) 
                    {
                        arr_88 [i_26] [i_6] [i_9] [i_1] [i_6] [i_6] [i_1] = ((/* implicit */unsigned long long int) arr_36 [i_1 - 1] [i_6] [i_6] [i_6] [i_26]);
                        var_51 = ((/* implicit */int) min((var_51), (((((/* implicit */_Bool) var_6)) ? ((+(-992))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_76 [i_1] [(_Bool)1] [i_1] [i_1] [i_26] [i_1] [i_26]))))))));
                        var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [i_6 - 1] [i_26])) ? (((((/* implicit */_Bool) arr_41 [i_1] [i_6] [(unsigned short)8] [i_26] [i_26])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_0)))))));
                    }
                    var_53 = ((/* implicit */_Bool) arr_52 [i_1] [11] [i_9] [16U] [i_1] [i_6]);
                }
                for (signed char i_27 = 0; i_27 < 21; i_27 += 3) /* same iter space */
                {
                    var_54 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */unsigned int) 1005)) != (1400339269U)))) & (((/* implicit */int) ((1002) < (((/* implicit */int) var_8))))))) > (((/* implicit */int) arr_83 [i_6] [i_6] [(short)14] [i_27] [6] [(unsigned short)2] [i_27]))));
                    var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) (+(min((2068103387U), (((/* implicit */unsigned int) -1002)))))))));
                }
                var_56 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) max(((+(-1016))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_24 [15ULL] [i_1 - 1] [i_6 - 1] [i_1 - 1]))))))) : ((+(((arr_45 [20LL] [20LL] [i_6] [i_6] [i_6] [i_6] [i_9]) >> (((var_6) - (6850296306182820333LL)))))))));
            }
            arr_93 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_82 [i_6 - 1] [i_6] [i_6] [i_1] [i_6] [i_1] [i_1]), (((/* implicit */unsigned int) var_5))))) && (((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)207)))) >= (((((/* implicit */_Bool) arr_38 [i_6])) ? (((/* implicit */int) arr_24 [i_6] [(_Bool)1] [i_1 - 1] [i_1])) : (((/* implicit */int) (_Bool)0))))))));
            var_57 += min((8070450532247928832ULL), (((/* implicit */unsigned long long int) (unsigned char)55)));
        }
        var_58 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (1070212603) : (-1070212604)));
    }
    for (signed char i_28 = 0; i_28 < 21; i_28 += 3) 
    {
        var_59 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(var_3))), (((/* implicit */unsigned long long int) arr_87 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]))))) ? (min((arr_46 [i_28] [i_28] [(_Bool)0] [i_28] [i_28] [i_28] [10LL]), (((/* implicit */unsigned long long int) ((var_6) >> (((arr_82 [i_28] [i_28] [(_Bool)1] [16] [i_28] [(signed char)4] [18]) - (2632370168U)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18428729675200069632ULL)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (min((((/* implicit */long long int) var_11)), (9053026107280400341LL))))))));
        var_60 = ((/* implicit */int) max((var_60), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (min((min((var_3), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
    }
    var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)3)))))) : (((((/* implicit */int) var_4)) + (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) (short)3))))))));
    var_62 = (+(max((((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))), (((8070450532247928832ULL) << (((/* implicit */int) (unsigned short)2)))))));
}
