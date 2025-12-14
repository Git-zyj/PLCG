/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20235
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [8] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_1 [19ULL])) | (478645720332649963ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((1ULL), (((/* implicit */unsigned long long int) 1655793753)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1655793763)) ? (((/* implicit */int) (unsigned short)13384)) : (((/* implicit */int) (_Bool)1)))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned char) max((((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1])), (((arr_1 [i_1]) >> (((-6366716036562020967LL) + (6366716036562021029LL)))))))))));
                    arr_9 [i_2] [i_1] [i_0] [i_0] = (!(((-6) == (arr_4 [i_2] [i_1] [i_0]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3])))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((13624744446499842820ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1))))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        arr_16 [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1] = max(((~(((arr_11 [i_0] [i_1] [i_1] [i_4]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))))), ((~(((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(max((-16LL), (((/* implicit */long long int) var_17)))))))));
                            var_22 = ((/* implicit */short) max((max((((8295975153940648795ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((var_3) % (((/* implicit */unsigned int) var_6))))))), (((/* implicit */unsigned long long int) max((arr_8 [i_1]), (arr_8 [i_4]))))));
                            arr_19 [i_4] [16LL] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_20 [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) : (4ULL)));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) arr_14 [i_1] [18] [i_4] [i_4]))))) >> (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4ULL)))))));
                        }
                        var_24 = ((/* implicit */short) (-(2057123530)));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 += ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        arr_23 [i_6] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) min((arr_13 [i_1] [i_1] [i_0] [i_1] [i_6]), (((/* implicit */unsigned long long int) (!((_Bool)1)))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) arr_5 [i_0] [i_2] [i_6])))) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [(unsigned short)19] [i_1] [i_6]))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 3; i_7 < 22; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2147483584) - (((/* implicit */int) arr_25 [(signed char)24] [i_7 - 3] [19] [i_7 - 3] [9] [i_7 + 1]))))) ? (((-4) & (((/* implicit */int) (signed char)-15)))) : (((((/* implicit */int) arr_25 [i_7 - 3] [(signed char)12] [23U] [i_7 + 2] [i_2] [i_2])) & (((/* implicit */int) arr_25 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_6]))))));
                            var_28 *= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0])) : (4294967281U)))) ? (((/* implicit */int) ((_Bool) 17813246454194006718ULL))) : (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
                            var_29 -= ((/* implicit */unsigned char) -2057123530);
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13624744446499842825ULL)) ? ((~(((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_6])))) : (((/* implicit */int) ((unsigned char) arr_25 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0])))))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)49908))))), (288230376147517440ULL)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 24; i_8 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_30 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)31)) ? (arr_22 [i_9] [i_2] [i_2] [i_1]) : (arr_22 [i_8] [i_8] [i_0] [i_0]))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) min((((((/* implicit */_Bool) 134217727LL)) ? (((((/* implicit */_Bool) (signed char)-21)) ? (1011766849U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) (signed char)0))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [23LL] [i_8 + 1] [i_2] [i_8])) != (((/* implicit */int) arr_33 [i_8] [i_8 - 2] [7ULL] [2]))))))))));
                            var_32 = ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 3979283090U)))))) : (388789974469416250ULL)))));
                            var_33 ^= ((((/* implicit */_Bool) 14ULL)) || ((_Bool)1));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            var_34 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13)) ? (((/* implicit */int) (unsigned char)102)) : (2013265920))))));
                            arr_37 [i_8 + 1] [i_10] [i_8 + 1] [i_2] [i_10] [i_0] = (~(((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? (max((((/* implicit */int) (_Bool)0)), (arr_15 [23ULL] [23ULL] [i_0] [i_0] [i_0] [(unsigned short)11]))) : (((/* implicit */int) min(((unsigned short)61668), (((/* implicit */unsigned short) (_Bool)1))))))));
                            var_35 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)14336)), (488038407U)))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [19U] [19U] [i_8])), ((unsigned short)45762)))) << (((/* implicit */int) ((signed char) arr_11 [i_0] [i_2] [i_8 - 1] [(signed char)4]))))) : (((((/* implicit */_Bool) arr_0 [i_8 - 2])) ? (arr_29 [i_1]) : (((arr_11 [i_8] [i_10] [(_Bool)1] [i_8 + 1]) ? (var_10) : (var_4))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            arr_41 [22] [22] [2ULL] [10] [10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) -12LL))) >= (arr_24 [i_11] [i_11] [i_8] [i_8 + 1] [i_8] [i_8] [i_8 - 1])));
                            arr_42 [i_1] [i_1] [(signed char)1] [(signed char)1] = ((/* implicit */unsigned short) ((arr_38 [i_8] [i_8] [i_8 - 2] [i_8] [i_8] [i_8]) >= (arr_38 [(_Bool)1] [i_8] [i_8 - 1] [i_8] [(unsigned short)23] [i_8])));
                        }
                        var_36 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15220397003478505224ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))));
                        var_37 = min(((~(18446744073709551601ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_2])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_21 [i_0] [(_Bool)1] [i_0] [i_8]))))));
                    }
                    for (unsigned long long int i_12 = 4; i_12 < 22; i_12 += 4) 
                    {
                        arr_45 [i_0] [i_1] [i_1] [i_2] [i_2] [i_12 - 2] = ((((/* implicit */int) ((((((/* implicit */_Bool) 13694712068961977659ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))) != (((/* implicit */int) (!(((/* implicit */_Bool) 76931163U)))))))) < (max((((((/* implicit */_Bool) arr_10 [i_12 - 1] [i_12] [i_12 - 3])) ? (((/* implicit */int) (unsigned short)48186)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_0] [i_1] [i_12])))))));
                        var_38 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_12 + 2] [i_2] [i_12] [i_2] [i_12 + 3])) ? (((((/* implicit */_Bool) 1ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_12]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                        var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_12 - 1])))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            {
                                var_40 = ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (arr_48 [i_0] [1] [i_2] [i_13] [(unsigned short)15])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 29360128)) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_2] [i_13])) : (-1)))) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))) : (min((((((/* implicit */_Bool) 27)) ? (54043195528445952ULL) : (18446744073709551598ULL))), (((/* implicit */unsigned long long int) -2147483585)))));
                                arr_51 [i_0] [i_1] [i_2] [i_13] [i_14] = ((/* implicit */_Bool) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_52 [i_0] [i_13] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) | (((/* implicit */int) arr_6 [(unsigned short)21] [(unsigned short)21] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_62 [i_0] [i_0] [14] [i_17] [24U] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [20] [i_15] [i_16] [i_16] [i_0])) ? (((/* implicit */int) arr_55 [(signed char)12] [(signed char)12])) : (27)));
                        var_41 |= ((/* implicit */int) var_17);
                        arr_63 [i_17] [7ULL] [i_15] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_31 [i_0] [(unsigned char)10] [(unsigned char)10] [i_17] [i_16]));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */int) 18446744073709551615ULL);
                            arr_72 [13] [i_15] [13] [13] [13] [i_15] = ((/* implicit */unsigned short) (~(15)));
                            arr_73 [i_0] [i_15] [i_0] [i_18] [i_18] [i_15] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_0] [i_15] [i_15] [24ULL] [(unsigned short)10] [i_19] [i_20]) != (((/* implicit */int) (unsigned short)255)))))) : (18446744073709551615ULL)));
                        }
                    } 
                } 
            } 
            arr_74 [i_15] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_29 [i_0]);
        }
        for (int i_21 = 1; i_21 < 23; i_21 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_22 = 0; i_22 < 25; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_23 = 0; i_23 < 25; i_23 += 2) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */int) min((var_43), (((((/* implicit */_Bool) (-(arr_46 [i_21 + 1] [i_21 + 2] [i_21 + 2] [i_21])))) ? ((-(((/* implicit */int) ((_Bool) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0] [i_21 - 1] [i_22] [i_22] [i_21 - 1])))))))));
                            var_44 = ((/* implicit */int) ((arr_14 [(signed char)9] [(signed char)9] [i_21] [(signed char)9]) ? ((+((+(arr_31 [22ULL] [i_21 + 1] [13] [i_21 + 1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_21 + 2] [i_23] [i_21])) ? (((((/* implicit */_Bool) arr_49 [i_0] [i_21] [i_0] [i_0] [i_0])) ? (-14) : (arr_67 [i_21] [i_22] [(_Bool)1] [i_24]))) : (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))))))));
                            var_45 += ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (+(arr_15 [2] [i_21] [i_21 - 1] [i_21] [i_21] [i_21])))) ? (-24) : (max((-16777216), (((/* implicit */int) var_0)))))));
                            var_46 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) 13)), (arr_13 [i_21 - 1] [i_21 - 1] [i_21 + 1] [i_21 - 1] [i_21 + 1])))));
                            var_47 = ((((((/* implicit */int) arr_83 [(_Bool)1] [i_21] [(_Bool)1] [i_24] [i_22] [i_0])) <= (((/* implicit */int) arr_17 [i_0])))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_83 [(_Bool)1] [i_21] [24U] [i_22] [i_23] [i_24]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_25 = 0; i_25 < 25; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 1; i_26 < 24; i_26 += 3) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (max((((/* implicit */int) (_Bool)1)), (var_4))) : (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) (signed char)-53)))))))) ? (((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) min(((unsigned short)18), ((unsigned short)17349)))))) : (((((/* implicit */_Bool) -5)) ? (888043551) : (24)))));
                            arr_92 [i_22] [i_25] [i_22] [i_21] [i_22] |= ((/* implicit */_Bool) 0);
                            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1322)) ? ((+(arr_82 [i_21 + 2] [i_21 + 1] [i_21 + 1] [i_21 + 2] [i_21]))) : (((/* implicit */int) (short)-28046))));
                            arr_93 [i_0] [i_21] [i_22] [i_25] [(unsigned char)8] [i_26 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) 1761762760749484272ULL)) ? (((/* implicit */unsigned long long int) 0)) : (5177185961396608094ULL)));
                            var_50 ^= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((12531365814916343734ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (arr_30 [i_21 - 1] [i_21 + 2] [i_26 - 1] [i_26 + 1]) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_8 [i_0])))))), (min((((/* implicit */unsigned long long int) 2147483644)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (0ULL))))));
                        }
                    } 
                } 
            }
            var_51 = ((/* implicit */long long int) 1073741824);
            arr_94 [i_0] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) (_Bool)1)) : (2147483629)))) ? (((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_21 + 2] [i_21 + 2])) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) -21)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106)))));
        }
        arr_95 [19LL] |= ((/* implicit */int) ((long long int) (+(18446744073709551615ULL))));
    }
    var_52 = ((/* implicit */int) (+((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_8))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (var_8)))))))));
}
