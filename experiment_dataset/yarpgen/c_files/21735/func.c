/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21735
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
    var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4194304ULL))));
    var_17 = ((/* implicit */unsigned long long int) 4021569462U);
    var_18 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((272391842309448041ULL) ^ (7694092508644853891ULL))) : ((-(var_2))))) | (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_1 [i_1]))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((8380416ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))) << (((/* implicit */int) (unsigned short)12))))) ? (((/* implicit */unsigned long long int) (~(4021569452U)))) : ((~(((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_1] [i_1])))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((unsigned int) ((long long int) 67108860ULL));
                    arr_9 [i_0] [i_0] [i_0] = arr_5 [15] [i_2];
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(273397822U)))) ? (((((/* implicit */_Bool) 3419601950U)) ? (arr_6 [i_0] [i_0] [i_0]) : (var_1))) : (((((/* implicit */unsigned long long int) 2613961485U)) & (1366886551616059155ULL))))))));
                    var_22 &= ((/* implicit */long long int) (~(((4021569474U) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_23 |= (!(((/* implicit */_Bool) 4021569474U)));
                                var_24 *= ((/* implicit */_Bool) arr_17 [i_4] [i_2] [(_Bool)1] [i_2] [i_0]);
                                arr_18 [i_2] [i_2] [i_3] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_13 [2ULL] [i_2] [i_4]))));
                                var_25 ^= ((/* implicit */signed char) ((((/* implicit */int) ((arr_13 [i_0] [i_0] [i_0]) >= (18174352231400103574ULL)))) >= ((-(((/* implicit */int) arr_3 [i_3] [i_2] [i_1]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    var_26 = ((/* implicit */long long int) arr_20 [i_0] [i_1] [i_5] [i_5]);
                    /* LoopSeq 4 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_27 *= ((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_1] [i_1] [i_5] [i_0]);
                        var_28 = ((/* implicit */unsigned char) 4021569473U);
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        var_29 = (-(arr_16 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5]));
                        arr_29 [i_0] [i_0] [i_0] [(unsigned short)14] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0]);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            arr_32 [i_0] [i_7] [i_7] [18ULL] [9U] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) <= (4021569457U)))) + (((/* implicit */int) (_Bool)1))));
                            var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 273397830U)) ? (948528394U) : (273397836U)));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            var_31 += ((/* implicit */unsigned int) ((((/* implicit */long long int) 140722249)) & (17592185782272LL)));
                            var_32 ^= ((/* implicit */short) (((+(((/* implicit */int) arr_25 [i_0] [i_9] [i_1] [16LL])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_9] [i_0] [i_0])))))));
                            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_9])) - (((/* implicit */int) arr_26 [i_9]))));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) arr_23 [i_9] [i_1] [i_1] [i_9]))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_35 = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_7]);
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_5] [i_0] [i_0] [i_10])) ? (arr_16 [i_5] [i_1] [i_5] [i_7] [i_5]) : (((/* implicit */long long int) 273397830U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0]))) <= (-566215893712265828LL))))) : (((((/* implicit */_Bool) 566215893712265827LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1767112990U)))));
                            var_37 = ((/* implicit */unsigned long long int) ((unsigned int) arr_35 [i_0] [i_5 - 1] [i_5 - 1] [i_7] [i_5 - 1]));
                            var_38 += ((((/* implicit */_Bool) ((arr_25 [i_10] [i_1] [i_1] [i_0]) ? (arr_1 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_1] [i_5 + 1] [(unsigned char)6] [i_10])) ? (875365349U) : (var_10)))));
                            var_39 = ((/* implicit */int) (+(273397835U)));
                        }
                        arr_40 [i_0] = ((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_0]);
                    }
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_40 = ((/* implicit */_Bool) 273397833U);
                        var_41 += ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 4021569452U))))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 3) 
                    {
                        var_42 -= ((/* implicit */unsigned short) 1286157833092291843ULL);
                        arr_45 [i_1] [9ULL] [i_0] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 875365326U))));
                        var_43 = ((/* implicit */unsigned long long int) -5626108817715238100LL);
                        var_44 ^= var_7;
                    }
                    var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) var_1))));
                    var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((17079857522093492461ULL) ^ (((/* implicit */unsigned long long int) 0U))))) ? (arr_6 [i_5] [4U] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_47 = ((/* implicit */unsigned long long int) (~(((long long int) (signed char)-110))));
                    var_48 = ((((/* implicit */_Bool) 3711548216624633650LL)) ? (((/* implicit */unsigned long long int) (~(0U)))) : (1366886551616059155ULL));
                }
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    arr_53 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_34 [i_0] [i_0] [i_1] [i_0] [i_14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_13 [i_0] [i_1] [i_1])))) ? (max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) (-(-3404089248844561371LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1681005816U)) && (((/* implicit */_Bool) 875365324U))))))));
                    var_49 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) * (((/* implicit */int) (_Bool)1))))) : ((~(arr_46 [i_0] [14U])))))) ? ((+(((/* implicit */int) (signed char)7)))) : (((/* implicit */int) ((((-53098538218889384LL) / (((/* implicit */long long int) 273397827U)))) != (-3404089248844561365LL))))));
                    arr_54 [i_0] [i_0] [i_0] [i_0] = max((((((arr_36 [i_0] [i_0]) != (arr_11 [(_Bool)1] [i_1] [i_14] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_42 [i_0] [i_0] [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0])), (15713878009838237574ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_1] [i_0] [6] [i_1] [i_1] [21U])) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        var_50 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -122668796)) ? (((/* implicit */unsigned long long int) -1315324317)) : (var_4))), (((/* implicit */unsigned long long int) ((-4627995134829003789LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_15] [3ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_15] [i_15] [i_15]))) : (2613961480U))))))) : (((/* implicit */int) ((273397838U) >= (((/* implicit */unsigned int) 268435455)))))));
        /* LoopNest 2 */
        for (unsigned int i_16 = 2; i_16 < 12; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                {
                    arr_61 [i_15] [i_16 + 1] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9420417172297482476ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_27 [i_17] [i_16]) << (((arr_11 [i_15] [(short)15] [i_16] [i_15]) - (3830556167U)))))) && (((/* implicit */_Bool) min((arr_59 [i_15] [i_15] [(signed char)13]), (arr_20 [3U] [3U] [3U] [i_15])))))))) : (arr_5 [i_16] [i_16])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 2; i_18 < 12; i_18 += 1) 
                    {
                        for (long long int i_19 = 2; i_19 < 13; i_19 += 2) 
                        {
                            {
                                var_51 *= 273397827U;
                                var_52 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2349424085496698068ULL)))))) : ((((!(((/* implicit */_Bool) arr_34 [i_15] [i_17] [i_15] [i_15] [i_15])))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_15) : (arr_28 [i_16 - 1] [i_16 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_25 [i_19] [i_17] [i_17] [i_15])))))))));
                                var_53 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_15] [i_17] [i_17] [i_17] [i_19] [i_15])) ? (min((arr_6 [i_17] [i_18] [i_19]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_15] [i_16 - 2] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_55 [(unsigned short)8] [i_16])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_15] [i_15] [i_17] [i_17] [i_18] [i_15]))))) ? (arr_63 [i_15] [11U]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                                var_54 = ((/* implicit */unsigned long long int) max((var_54), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */unsigned long long int) -1749894483004766644LL)) : (arr_31 [i_15] [i_16] [i_15] [i_19] [i_15] [i_19] [i_16])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : ((+(2507488937969222608ULL)))))) ? (((/* implicit */unsigned long long int) var_13)) : (arr_63 [i_15] [i_15])))));
                            }
                        } 
                    } 
                    arr_67 [i_15] [(_Bool)1] [i_17] = ((/* implicit */unsigned long long int) arr_65 [i_15] [i_16 - 2] [i_16 - 2] [i_16 - 2]);
                    var_55 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_17 [i_16] [i_15] [i_15] [i_15] [i_16])) ? (arr_17 [i_17] [i_17] [i_17] [i_16] [i_17]) : (((/* implicit */unsigned long long int) 1681005810U))))));
                    var_56 *= ((/* implicit */unsigned int) ((unsigned char) (+(arr_48 [i_15] [i_15] [i_17]))));
                }
            } 
        } 
        var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) ((unsigned char) 15939255135740329000ULL)))));
        var_58 += ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 6755399441055744ULL)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) arr_26 [i_15]))))))) ? ((((!(((/* implicit */_Bool) arr_34 [i_15] [i_15] [10ULL] [i_15] [i_15])))) ? (4082120533321237679LL) : (((((/* implicit */_Bool) arr_22 [i_15] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3404089248844561363LL))))) : (5338910208491992401LL));
        var_59 = ((/* implicit */short) max((var_59), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_15]))))) ? ((~(arr_2 [i_15] [i_15]))) : (((/* implicit */unsigned long long int) (~(-3404089248844561363LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (((_Bool)1) ? (15250701706208290849ULL) : (arr_24 [i_15] [i_15] [7U] [i_15] [i_15])))))) : (arr_48 [i_15] [i_15] [i_15]))))));
    }
    for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) 
    {
        var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) (~(1989567074U))))));
        var_61 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_2 [20ULL] [20ULL]) : (((/* implicit */unsigned long long int) 209171379)));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        arr_72 [9U] [i_21] = ((/* implicit */long long int) 1418084935868350770ULL);
        var_62 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (((arr_13 [i_21] [i_21] [i_21]) ^ (var_4))))) != (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 1023LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3404089248844561370LL)))))));
        arr_73 [i_21] [i_21] = ((/* implicit */unsigned int) (+(min((((unsigned long long int) arr_0 [i_21])), (((/* implicit */unsigned long long int) (+(-5338910208491992402LL))))))));
    }
    for (long long int i_22 = 0; i_22 < 21; i_22 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 4) 
        {
            var_63 = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) arr_75 [i_23]))))))));
            var_64 = ((/* implicit */_Bool) max((var_64), (((/* implicit */_Bool) ((((/* implicit */_Bool) -3404089248844561371LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))))))));
        }
        for (unsigned int i_24 = 1; i_24 < 19; i_24 += 2) 
        {
            arr_82 [i_22] [i_24] [i_22] = ((/* implicit */unsigned char) arr_4 [i_24 - 1]);
            var_65 ^= (-((+(((((/* implicit */_Bool) arr_11 [i_22] [i_22] [i_24] [i_24 + 1])) ? (((/* implicit */int) arr_19 [i_22])) : (((/* implicit */int) var_11)))))));
            var_66 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 412078976U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_22] [i_24 + 1]))) : (arr_81 [i_22])))))) ? (arr_13 [i_22] [i_24] [i_22]) : (((/* implicit */unsigned long long int) arr_51 [i_22]))));
        }
        for (unsigned long long int i_25 = 2; i_25 < 17; i_25 += 1) 
        {
            var_67 = ((/* implicit */unsigned char) 281457796841472ULL);
            var_68 = ((/* implicit */unsigned long long int) min((var_68), (((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) arr_50 [(unsigned char)2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_42 [i_22] [i_22] [i_22] [i_22]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((-(-3404089248844561366LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [(unsigned short)18] [i_25])) && ((_Bool)1))))))))))));
        }
        var_69 = ((/* implicit */int) min((var_69), (((/* implicit */int) ((14698964894387397905ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
    }
}
