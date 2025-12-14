/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40725
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_20 *= ((/* implicit */unsigned char) min(((unsigned short)7886), ((unsigned short)55081)));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) arr_1 [i_0 + 2]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)0))))) << (((((/* implicit */int) ((unsigned short) arr_0 [i_0 + 1]))) - (53485)))));
        arr_3 [i_0] [(unsigned short)7] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) (_Bool)0))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                var_23 = ((/* implicit */_Bool) ((var_9) | (9223372036854775795LL)));
                var_24 = ((((/* implicit */_Bool) var_10)) ? (arr_12 [i_1] [i_1] [i_2] [i_1]) : (4316800040203715130LL));
                arr_15 [i_2] = ((/* implicit */unsigned long long int) (unsigned short)10455);
            }
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) min((var_25), (var_19)));
                var_26 |= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (1711083936243710411LL)))) ? (((long long int) var_13)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 6309889216192177893LL)))));
            }
        }
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 2; i_6 < 14; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_4))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_21 [i_5] [i_6 + 2])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7886)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65517)) || (((/* implicit */_Bool) arr_21 [i_1] [i_1])))))))))))));
                    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) ((-8407387064624455557LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    var_30 |= ((/* implicit */long long int) ((unsigned short) (unsigned short)10453));
                }
                for (unsigned short i_8 = 1; i_8 < 13; i_8 += 4) 
                {
                    var_31 += ((/* implicit */unsigned char) arr_7 [i_1] [i_1]);
                    arr_28 [i_8] [i_6] [i_8] [i_8] [i_5] [i_1] = ((/* implicit */unsigned char) ((_Bool) (unsigned short)10455));
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) (unsigned char)122))))) ? (((((/* implicit */_Bool) arr_24 [i_6 - 1] [i_8] [i_8 + 3] [i_8])) ? (-9LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6 + 1] [i_6 + 1] [i_8 + 3] [i_8]))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)103)))))));
                    var_33 = ((/* implicit */long long int) min((var_33), (arr_27 [i_5] [i_5])));
                }
                var_34 = ((/* implicit */long long int) (_Bool)0);
            }
            for (long long int i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                var_35 = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_22 [i_9 - 1] [i_9 - 1] [i_9 + 1])), (8935141660703064064LL)))) ? (0LL) : (var_10));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        {
                            var_36 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (var_12)))) ? (((((/* implicit */_Bool) -8935141660703064065LL)) ? (arr_34 [i_1] [i_5] [i_9] [i_10] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))))) : (281406257233920LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)39744)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_9] [i_9 + 1])) : (((/* implicit */int) var_13)))))));
                            var_37 = ((/* implicit */_Bool) (unsigned short)64821);
                            var_38 = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) (unsigned short)65514))), (((((/* implicit */int) (unsigned short)0)) / (((((/* implicit */_Bool) arr_23 [4ULL] [i_10] [(unsigned char)2] [i_5] [i_1])) ? (((/* implicit */int) arr_29 [i_1] [i_5] [7ULL])) : (((/* implicit */int) arr_31 [(unsigned char)13] [i_10]))))))));
                        }
                    } 
                } 
                arr_37 [i_1] [i_1] [i_5] [i_9] = ((/* implicit */long long int) ((arr_0 [(_Bool)1]) >= (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)714)) ? (((/* implicit */int) (unsigned short)23602)) : (((/* implicit */int) (unsigned char)241)))) + (((/* implicit */int) ((unsigned char) var_7))))))));
            }
            arr_38 [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39492)) ? (((((/* implicit */_Bool) arr_25 [i_1] [i_1] [6LL] [i_1] [(_Bool)0])) ? (arr_36 [i_1] [i_5] [i_1] [i_5] [i_1] [i_5] [0LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41933))))) : (var_11)));
            /* LoopSeq 2 */
            for (long long int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                var_39 += ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (unsigned short)39488))) > (((/* implicit */int) var_14))));
                /* LoopSeq 2 */
                for (long long int i_13 = 1; i_13 < 13; i_13 += 4) 
                {
                    var_40 = (unsigned short)26043;
                    arr_44 [i_12] = ((/* implicit */long long int) max((((/* implicit */unsigned short) max((arr_23 [i_13 + 2] [i_13 + 1] [i_13 + 2] [i_13 + 1] [i_13 + 2]), (var_4)))), (arr_32 [i_13] [i_13] [i_13 - 1] [i_13 + 2] [i_13 + 2] [i_13 + 2])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 1) 
                    {
                        var_41 = ((max((arr_13 [10LL] [i_13 - 1] [i_14 + 1] [i_14 - 1]), (arr_13 [i_13] [i_13 - 1] [i_14 + 1] [i_14 - 1]))) ? (((min((7248975613631220215LL), (((/* implicit */long long int) var_19)))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55080))))) : (((((/* implicit */_Bool) var_1)) ? (arr_26 [i_14] [i_13 - 1] [i_12] [i_5]) : (arr_26 [i_1] [i_1] [i_1] [i_1]))));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)41934)) ? (8164307603865578375LL) : (3523816458819153803LL)));
                        var_43 *= ((/* implicit */unsigned short) (+(((arr_34 [i_1] [i_13 - 1] [i_13 - 1] [i_14 - 1] [i_13 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528)))))));
                    }
                    for (long long int i_15 = 2; i_15 < 12; i_15 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned short)1301)) - (1278)))));
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_12] [i_12] [i_12] [i_12]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41933))) : (9223372036854775807LL)))))))));
                        arr_50 [i_1] [i_5] = ((/* implicit */long long int) ((unsigned char) max((arr_48 [(unsigned short)9] [i_15 + 4] [i_13 + 2] [14LL] [(unsigned short)11]), (arr_48 [i_15] [i_15 - 1] [i_13 + 3] [i_5] [i_5]))));
                        var_46 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (1711083936243710432LL)));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_1] [i_5] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_45 [4LL] [2LL] [2LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) : (549755813887ULL)));
                        var_48 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned short) 4153603366733733251LL))), (((unsigned long long int) (unsigned short)26043))));
                        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (arr_35 [i_13 + 3] [14LL] [i_13 + 3] [i_13 - 1] [i_13] [i_16]) : (((/* implicit */unsigned long long int) arr_9 [i_13 + 2]))))) && (((/* implicit */_Bool) ((arr_35 [i_13 - 1] [i_13 - 1] [i_13] [i_13 + 3] [8ULL] [i_16]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_13 + 3] [i_13 - 1] [i_13]))))))));
                        arr_54 [i_16] [1LL] [1LL] [i_16] = max((((/* implicit */long long int) ((unsigned short) arr_7 [i_13 + 2] [i_13 + 2]))), (((long long int) 0LL)));
                        var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) ((((_Bool) var_14)) ? (((((((/* implicit */_Bool) var_13)) ? (arr_10 [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_1]))) ^ (((arr_27 [i_12] [i_12]) << (((((/* implicit */int) (unsigned short)55061)) - (55060))))))) : (((((/* implicit */_Bool) var_13)) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_5]))))))));
                    }
                }
                for (unsigned char i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    arr_57 [i_1] [i_1] [i_1] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_5] [i_5] [i_5] [i_17])) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_19)) + (((/* implicit */int) arr_17 [i_1])))))) : ((((_Bool)1) ? (((/* implicit */int) arr_24 [i_1] [i_5] [(_Bool)0] [i_17])) : (((/* implicit */int) (unsigned short)41925))))));
                    arr_58 [i_1] [i_1] [i_5] [12LL] [i_17] [i_5] = 1200808707159557331LL;
                    var_51 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)55080)), (7439279080291892792LL)));
                }
            }
            for (unsigned char i_18 = 2; i_18 < 15; i_18 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 3) 
                {
                    var_52 = ((/* implicit */unsigned char) ((long long int) (((_Bool)1) ? (((long long int) (unsigned short)65535)) : (arr_27 [i_1] [i_5]))));
                    var_53 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((6778088107802506332ULL), (((/* implicit */unsigned long long int) arr_32 [i_18] [i_18 + 1] [(_Bool)1] [(unsigned char)1] [i_18 - 1] [i_18 - 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15065)) ? (((/* implicit */int) arr_32 [i_18] [i_18 - 1] [i_18] [i_18] [i_18 + 1] [i_18 + 1])) : (((/* implicit */int) (unsigned short)26028))))) : ((-(arr_11 [i_18 + 1] [i_1] [i_1])))));
                    arr_64 [i_1] [i_1] [(unsigned short)2] [(unsigned short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((long long int) arr_29 [i_1] [i_1] [i_1])))) ? (((((/* implicit */int) arr_23 [i_1] [i_5] [i_18] [i_5] [i_18 - 2])) >> (((((/* implicit */int) arr_23 [i_1] [i_5] [8LL] [i_1] [i_18 - 2])) - (120))))) : (((/* implicit */int) ((unsigned char) (unsigned short)39497)))));
                    var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_19] [(unsigned char)15]))))), (((var_11) & (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_18 - 2] [i_18 - 2] [i_18] [i_19] [i_18 - 2]))))))))));
                }
                for (unsigned char i_20 = 0; i_20 < 16; i_20 += 2) 
                {
                    var_55 = ((/* implicit */unsigned short) min((var_55), (((unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))) & (1200808707159557331LL))) | (((long long int) 1893702639246727675LL)))))));
                    /* LoopSeq 1 */
                    for (long long int i_21 = 0; i_21 < 16; i_21 += 1) 
                    {
                        var_56 *= ((/* implicit */unsigned char) var_18);
                        arr_69 [i_1] [i_5] [i_18] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((((/* implicit */_Bool) -7338318690579648910LL)) ? (((/* implicit */unsigned long long int) -1659396519781471273LL)) : (var_17))) : (((((/* implicit */_Bool) var_1)) ? (9951676270110319874ULL) : (((/* implicit */unsigned long long int) 9223372036854775799LL))))))) ? (6975585737657146471LL) : (((((/* implicit */_Bool) arr_10 [i_18 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_10 [i_18 - 2])))));
                    }
                    arr_70 [i_1] [i_1] [i_1] [(unsigned char)5] [i_1] &= ((/* implicit */unsigned short) ((long long int) ((long long int) 7222597733360995580LL)));
                    arr_71 [(unsigned char)9] [i_1] [i_5] [3LL] [12LL] [i_20] = ((/* implicit */unsigned char) (unsigned short)4719);
                }
                for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 4) 
                {
                    arr_74 [0ULL] [i_5] [0ULL] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_1] [i_5] [i_18] [i_5] [i_22]))) : (((var_18) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))) ? (((((/* implicit */_Bool) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51980)))))) ? (arr_39 [i_18 - 2] [i_18 - 2] [i_18 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39497))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-4024660672496572087LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19376)))))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) arr_13 [i_18 - 2] [i_18 - 2] [i_18 - 2] [8ULL])))))));
                    /* LoopSeq 1 */
                    for (long long int i_23 = 0; i_23 < 16; i_23 += 3) 
                    {
                        var_57 = ((/* implicit */long long int) min((var_57), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50506)) ? (((arr_34 [i_1] [i_1] [i_18] [i_22] [(unsigned short)13]) / (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_1] [i_5] [i_18] [i_22]))))) : (((((/* implicit */_Bool) -1525612859828185785LL)) ? (1659396519781471272LL) : (9223372036854775807LL)))))) ? (-5224372037960696660LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_18 - 2]))))))));
                        arr_77 [(unsigned short)6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39497)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) : (-6429188957952322309LL)))) ? (arr_59 [i_18 + 1] [i_18 - 2] [i_18 + 1] [i_23]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_47 [i_18 - 1] [i_18 - 1] [(unsigned short)3] [i_22] [(unsigned short)3])))))));
                        var_58 |= ((/* implicit */_Bool) -8219940274691505866LL);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_24 = 0; i_24 < 16; i_24 += 3) 
                    {
                        var_59 = ((/* implicit */unsigned short) max((var_59), (((/* implicit */unsigned short) (+(arr_14 [i_18 - 2] [i_18 - 2] [i_18 - 1]))))));
                        arr_82 [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6826685157600488472ULL)) && (((/* implicit */_Bool) ((11668655965907045283ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_1] [i_1] [i_18]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_25 = 0; i_25 < 16; i_25 += 1) 
                    {
                        arr_85 [7LL] [(unsigned char)11] [7LL] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((arr_75 [i_18 - 2] [10LL] [i_18 + 1] [i_18 - 2] [i_18 + 1]) ^ (arr_12 [i_18 - 2] [i_18 - 2] [i_5] [i_18 - 1])));
                        var_60 += ((/* implicit */unsigned short) ((unsigned char) arr_67 [12LL] [i_5] [(unsigned short)12] [i_22] [i_25] [12LL]));
                    }
                    for (unsigned short i_26 = 0; i_26 < 16; i_26 += 3) 
                    {
                        var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) var_16))))) ? (arr_14 [i_18 - 2] [i_18 - 2] [i_18 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) + (((/* implicit */int) (unsigned char)0)))))));
                        var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)253))))))));
                        var_63 = ((/* implicit */unsigned short) max((var_63), (var_0)));
                        var_64 |= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_33 [i_18 - 1] [i_18] [i_18 + 1] [i_18 - 1] [i_26] [i_26] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))) : (0LL))));
                    }
                }
                var_65 = ((/* implicit */long long int) max((var_65), (((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) ((unsigned short) 6778088107802506316ULL))), ((-(((/* implicit */int) (unsigned short)41234))))))))));
            }
        }
        arr_89 [i_1] = ((/* implicit */long long int) (_Bool)1);
    }
    var_66 ^= ((/* implicit */unsigned long long int) (unsigned short)59221);
}
