/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32735
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
    var_17 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) var_11);
        arr_3 [9ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24; i_1 += 2) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((1332338300) >> (((-1573972649) + (1573972675))))))));
        var_20 = ((/* implicit */signed char) ((1332338311) / (arr_4 [i_1 - 1])));
        arr_7 [i_1 - 1] = ((/* implicit */unsigned char) 8632808451980429537LL);
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (unsigned short)6))));
        arr_8 [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-32)) | (1332338300)))) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (signed char)-31))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_22 += ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned short)31))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1021035989)) || (((/* implicit */_Bool) -9223372036854775786LL))))), (4756610325759740955LL)))) ? (((/* implicit */int) ((max((arr_11 [i_3]), (((/* implicit */long long int) 744441935)))) >= (((/* implicit */long long int) arr_13 [2ULL] [i_3] [i_4] [i_4]))))) : (((/* implicit */int) (unsigned char)0))));
                    arr_15 [i_3] [i_2] = ((/* implicit */signed char) max((1332338311), (((/* implicit */int) (signed char)0))));
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_24 = ((/* implicit */long long int) arr_0 [i_5]);
        var_25 = ((/* implicit */unsigned int) 850493235389668635LL);
    }
    /* LoopSeq 2 */
    for (unsigned short i_6 = 3; i_6 < 12; i_6 += 4) 
    {
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) 131071))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                {
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 812744629)) ? (744441951) : (var_8)))) ? (((/* implicit */unsigned long long int) 744441935)) : (((arr_18 [i_6 + 1]) / (((/* implicit */unsigned long long int) var_11))))));
                    var_28 = ((/* implicit */int) min((((min((((/* implicit */long long int) var_6)), (9223372036854775807LL))) / (arr_19 [i_6 + 2] [i_6 - 1]))), (((/* implicit */long long int) 1067408655))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            {
                                var_29 |= ((/* implicit */signed char) ((min((arr_18 [i_6 - 3]), (((/* implicit */unsigned long long int) (unsigned short)52469)))) >= (arr_18 [i_6 - 3])));
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) var_14))));
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((arr_26 [i_10] [1U] [1U] [i_6]) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) 1567768231)) ? (((arr_17 [i_9]) << (((/* implicit */int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)23917), (((/* implicit */unsigned short) (signed char)31)))))))) - (11314287347014716144ULL))))))));
                                arr_30 [i_7] [i_7] [i_6] |= ((/* implicit */long long int) 1789800860);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) var_12))));
                }
            } 
        } 
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((arr_24 [i_6 - 3] [i_6 - 3] [i_6 - 2] [i_6 + 2] [i_6 - 2] [i_6 - 2]), (((/* implicit */int) arr_2 [i_6 - 2]))))) % (min((var_12), (((/* implicit */unsigned long long int) arr_2 [i_6 - 2])))))))));
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((signed char) var_12)))));
    }
    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            var_35 &= ((/* implicit */_Bool) var_0);
                            var_36 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned short)31))) == (((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned char)19))))));
                            var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55955)))))) >= (((/* implicit */int) min((arr_40 [i_11] [i_11] [i_11] [i_11]), (arr_40 [i_12] [i_13] [i_12] [i_15]))))));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (((((unsigned long long int) arr_42 [i_11] [i_11] [i_13] [i_12] [i_12] [(signed char)1] [i_11])) * (((unsigned long long int) var_4))))));
                        }
                        for (int i_16 = 0; i_16 < 23; i_16 += 2) 
                        {
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) max((((/* implicit */long long int) arr_44 [i_11] [16ULL] [i_12] [i_13] [i_14] [i_13] [i_16])), (max((((/* implicit */long long int) -1124925069)), (5285570492517151047LL))))))));
                            arr_45 [i_11] [(unsigned short)6] [i_14] [(unsigned short)6] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_1 [i_16])) - (((/* implicit */int) arr_1 [i_16])))), (((((/* implicit */_Bool) (unsigned short)52354)) ? (((/* implicit */int) (unsigned short)53866)) : (((/* implicit */int) (signed char)32))))));
                        }
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) max((-4615711137332087516LL), (((/* implicit */long long int) (unsigned short)65531))))) ? (((-5812626622101083209LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)32))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_32 [i_11]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)2)))))))));
                        var_41 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_44 [i_11] [i_11] [i_12] [i_13] [i_13] [i_11] [i_14]), (arr_44 [i_11] [i_11] [i_11] [2] [(signed char)10] [i_11] [i_11])))) >= (((/* implicit */int) min((arr_44 [i_11] [i_11] [i_11] [i_13] [10] [i_14] [i_14]), (arr_44 [i_11] [i_12] [i_13] [i_14] [i_11] [i_14] [19]))))));
                    }
                } 
            } 
            var_42 = -1481554655;
            var_43 = ((/* implicit */_Bool) 18446744073709551615ULL);
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (var_13) : (((/* implicit */int) arr_42 [i_17] [i_17] [i_17] [i_11] [i_11] [i_11] [i_17]))))) ? (((/* implicit */long long int) arr_4 [i_11])) : (((((arr_36 [i_11] [i_11] [i_11] [i_17]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_1)) + (81))) - (62))))))))));
            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_11])) ? (var_0) : (17759453337505708176ULL)));
            var_46 = ((/* implicit */long long int) var_9);
        }
        for (int i_18 = 0; i_18 < 23; i_18 += 2) 
        {
            var_47 = ((/* implicit */signed char) max(((((_Bool)1) ? (((/* implicit */int) arr_1 [i_18])) : (((((/* implicit */_Bool) -1705573380)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)238)))))), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_18]))) : (arr_49 [12])))) || (((/* implicit */_Bool) ((arr_48 [i_11] [(unsigned short)2] [i_18]) ? (472185779) : (((/* implicit */int) arr_6 [i_11] [i_18]))))))))));
            var_48 = ((/* implicit */_Bool) min((((/* implicit */signed char) arr_48 [i_11] [i_11] [i_18])), (max((min((var_16), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_34 [i_11] [i_18] [i_18])))))))));
            arr_50 [i_11] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_46 [i_11])))) - (((/* implicit */int) ((((/* implicit */int) (unsigned short)56022)) > (1133580975))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((min((var_9), (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) arr_34 [i_18] [20ULL] [i_18]))))));
        }
        for (signed char i_19 = 4; i_19 < 20; i_19 += 2) 
        {
            var_49 = ((/* implicit */unsigned char) -997747471508250871LL);
            /* LoopSeq 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    for (unsigned short i_22 = 0; i_22 < 23; i_22 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */long long int) max((var_50), (arr_32 [i_11])));
                            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_7)))) ? (((((/* implicit */_Bool) arr_44 [i_21] [i_19] [i_20] [i_21] [i_22] [i_20] [i_19 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-4615711137332087516LL))) : (((/* implicit */long long int) max((var_11), (((/* implicit */int) arr_44 [i_11] [i_21] [i_22] [i_21] [i_21] [i_21] [i_19 - 4])))))));
                        }
                    } 
                } 
                var_52 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) ^ (arr_54 [i_19 + 2] [i_19 + 2]))), (((/* implicit */unsigned long long int) min((arr_38 [10U] [i_19 - 1] [i_19 - 4]), (arr_38 [i_19] [i_19 + 3] [i_19 - 3]))))));
                var_53 += ((/* implicit */unsigned short) 17LL);
                var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) arr_41 [i_11] [i_11] [i_19 - 3] [(signed char)3] [i_20] [i_20] [i_20]))));
            }
            for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 4) 
            {
                var_55 = ((/* implicit */unsigned char) var_4);
                var_56 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) > (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_11] [i_11])) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (unsigned char)58))))));
                arr_62 [i_11] [i_19 - 2] [(unsigned char)12] [(signed char)1] = ((/* implicit */signed char) arr_60 [i_11]);
            }
            for (unsigned short i_24 = 0; i_24 < 23; i_24 += 3) 
            {
                var_57 = ((/* implicit */unsigned char) var_7);
                var_58 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)107)), (((((/* implicit */_Bool) 6635652762521042114ULL)) ? (-152383236) : (arr_5 [i_11] [i_19])))));
            }
        }
        /* LoopNest 2 */
        for (int i_25 = 3; i_25 < 21; i_25 += 3) 
        {
            for (unsigned short i_26 = 0; i_26 < 23; i_26 += 1) 
            {
                {
                    var_59 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_11] [i_25])) ? (arr_71 [i_26] [i_25] [i_11]) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)62530)))) : (((/* implicit */int) (unsigned char)10)));
                    var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) min((((int) arr_31 [i_11] [i_25 + 2])), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((((/* implicit */_Bool) 83267100)) || (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_11] [(signed char)3])) || (((/* implicit */_Bool) var_13))))))))))));
                    /* LoopSeq 2 */
                    for (int i_27 = 3; i_27 < 22; i_27 += 3) /* same iter space */
                    {
                        var_61 = ((/* implicit */unsigned short) 3463743517U);
                        var_62 = ((_Bool) -7122706380344603318LL);
                        var_63 = min((min((arr_43 [i_25 - 2] [i_25 - 2] [i_27 + 1] [i_25 - 2] [i_27 + 1]), (arr_43 [i_25 - 2] [(signed char)6] [i_27 + 1] [i_25 - 2] [i_27 - 1]))), (((/* implicit */int) max(((unsigned short)25558), (((/* implicit */unsigned short) (unsigned char)125))))));
                        var_64 = ((/* implicit */signed char) min((16777216), (((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_28 = 3; i_28 < 22; i_28 += 3) /* same iter space */
                    {
                        arr_77 [i_11] [i_26] [i_11] = ((/* implicit */int) var_16);
                        var_65 = ((/* implicit */int) min((var_65), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (-1)))) ? (((((/* implicit */_Bool) arr_65 [i_25] [i_25 + 2] [i_25 - 3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_42 [i_11] [19] [i_25 - 2] [i_28 - 1] [i_26] [(unsigned short)13] [i_11])))) : (((/* implicit */int) arr_65 [i_25] [i_25 + 2] [i_25 + 2]))))));
                        var_66 = ((/* implicit */signed char) min((var_66), (((/* implicit */signed char) ((arr_66 [i_28 - 1] [i_25 - 1] [i_11] [i_11]) == (((/* implicit */int) arr_6 [i_26] [i_26])))))));
                        arr_78 [i_11] [i_11] [i_11] [i_11] [i_26] [i_11] |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_67 [i_25 + 2])), (var_0)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)2482)), (18ULL))) : (((/* implicit */unsigned long long int) -8053762123691529206LL))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_29 = 4; i_29 < 21; i_29 += 2) 
                    {
                        arr_81 [i_11] [i_25] [i_26] [i_26] [i_29] = ((/* implicit */unsigned char) 1665670192961536909ULL);
                        var_67 = ((/* implicit */long long int) min((var_67), (((/* implicit */long long int) arr_54 [i_11] [i_11]))));
                    }
                    for (long long int i_30 = 2; i_30 < 22; i_30 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_31 = 0; i_31 < 23; i_31 += 4) 
                        {
                            var_68 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)54596)), (-1LL)));
                            var_69 ^= ((/* implicit */unsigned short) 0LL);
                            arr_87 [15LL] [15LL] [i_30] [i_30 - 2] [15LL] [i_25] = ((/* implicit */long long int) max((((/* implicit */int) (signed char)9)), (((((((((/* implicit */_Bool) -2620874026684155194LL)) ? (var_8) : (1318701452))) + (2147483647))) >> (((1739008879) - (1739008860)))))));
                        }
                        arr_88 [i_11] [i_11] [i_11] [i_11] |= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-51)) | (((/* implicit */int) (unsigned short)10940))));
                        var_70 = ((/* implicit */unsigned char) min((var_70), (((/* implicit */unsigned char) (signed char)49))));
                        arr_89 [i_11] [i_25] [i_25] [i_30] [i_26] [i_30] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) -974379936)), (-1LL)))) ? (arr_64 [i_25 + 2] [i_25 - 2] [i_25 + 2] [(signed char)8]) : (arr_64 [i_25 - 2] [i_25 - 2] [i_25 - 1] [i_25])));
                    }
                    for (long long int i_32 = 2; i_32 < 22; i_32 += 1) /* same iter space */
                    {
                        var_71 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 4261169454U))) == (max((var_11), (((/* implicit */int) arr_42 [i_25 - 2] [i_25] [i_25] [i_26] [i_26] [i_32 + 1] [i_32 - 2]))))));
                        var_72 = ((/* implicit */unsigned long long int) max((var_72), (((/* implicit */unsigned long long int) var_16))));
                        var_73 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)82)), (arr_60 [i_11])))), (arr_47 [(unsigned short)10] [i_25 - 3] [12])));
                    }
                }
            } 
        } 
    }
    var_74 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_8)) < (max((((((/* implicit */_Bool) 8041478401610213655LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5153540290281511895ULL)) ? (var_5) : (((/* implicit */long long int) 1739008879)))))))));
    var_75 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)103))))), (var_4)))) ? (((/* implicit */int) (unsigned char)10)) : (((((((/* implicit */_Bool) 441033965)) ? (((/* implicit */int) var_10)) : (808532854))) - (((((/* implicit */_Bool) 11081623947347332040ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1))))))));
}
