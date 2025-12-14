/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240893
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 4; i_3 < 8; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */short) var_3);
                        var_14 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 5400657363179442385ULL)) ? (9421750573798974852ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        var_15 *= ((/* implicit */unsigned int) ((short) arr_1 [i_0 - 2] [i_0 + 1]));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((8388608U) >= (8388622U))))) & (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(short)1] [i_2] [i_3 - 4])))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_11) + (((/* implicit */unsigned long long int) arr_7 [i_0])))));
                        arr_12 [i_0] [i_1 + 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3693))))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 - 1] [i_1 + 1])) >= (((/* implicit */int) (short)14389)))))));
                    }
                    var_18 = ((/* implicit */unsigned int) ((short) (short)-25759));
                }
            } 
        } 
        var_19 *= ((/* implicit */unsigned int) arr_5 [i_0] [i_0 + 3] [i_0 + 1] [i_0]);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_25 [i_7] [i_7] [i_7] [i_8] [i_9] [i_8] = ((((/* implicit */_Bool) (~(max((arr_17 [i_5] [i_6]), (((/* implicit */unsigned int) (unsigned short)6841))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15741))) : (arr_24 [i_6]));
                            arr_26 [i_7] [(short)0] [i_7] [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15727)) ? (arr_17 [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_5] [i_7] [i_5] [22U] [i_7])))))) ? (min((((/* implicit */long long int) arr_18 [i_6] [i_6])), (5467487787651943076LL))) : (((long long int) arr_20 [i_5] [i_9] [i_7] [i_8])))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) (unsigned short)63309);
                            arr_29 [i_5] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-14396)) + (14402))))) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12))) - (20908ULL))))) | (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (8388614U))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_22 [i_8 + 4] [i_8] [i_8 - 2] [i_8 + 2] [i_8] [(short)20]), (arr_22 [i_10] [i_6] [i_8 - 2] [i_8 - 1] [i_6] [i_8])))) ? (((((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28003))) : (arr_22 [i_10] [i_6] [i_8 + 4] [i_8 - 2] [i_6] [i_8]))) : (max((arr_22 [8LL] [i_8] [i_8 - 2] [i_8 - 1] [i_8] [i_6]), (arr_22 [i_6] [i_6] [i_8 - 1] [i_8 + 1] [i_6] [i_8]))))))));
                        }
                        for (short i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            arr_34 [i_5] [i_5] [i_6] [i_5] [i_7] [i_11] [i_11] = ((/* implicit */short) ((long long int) (unsigned short)37533));
                            arr_35 [i_7] [i_7] [i_7] = ((/* implicit */short) ((-3487442250006594564LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-31503)))));
                        }
                        var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_18 [i_5] [i_6]), (((/* implicit */unsigned short) (short)-15719))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15719))) : (arr_17 [i_5] [i_6])))) : (min((var_5), (((/* implicit */long long int) (short)-25475))))))) ? (min((max((4399520448562004840ULL), (((/* implicit */unsigned long long int) arr_14 [i_7])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_7] [i_6] [9ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14389))) : (arr_14 [i_6])))))) : (((/* implicit */unsigned long long int) (-(((long long int) 1088354712U)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            arr_40 [i_5] [i_6] [i_7] [i_8 + 2] [i_8] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_1)), (6868211849828234969ULL)));
                            var_23 = ((/* implicit */long long int) min((((((/* implicit */long long int) ((/* implicit */int) ((short) 9050911404189343423LL)))) < (min((arr_24 [i_5]), (((/* implicit */long long int) var_1)))))), ((!(((/* implicit */_Bool) min((14047223625147546776ULL), (((/* implicit */unsigned long long int) var_5)))))))));
                        }
                    }
                } 
            } 
            var_24 += ((/* implicit */unsigned short) ((short) (+(((unsigned long long int) 2091054976405955041LL)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5] [i_5] [i_14] [(_Bool)1]))));
                    var_26 *= ((/* implicit */short) ((arr_46 [i_5] [i_5] [i_5] [i_5] [i_5] [i_14]) >> (((arr_46 [i_5] [i_5] [i_5] [i_6] [i_5] [i_14]) - (13461257953784510209ULL)))));
                    arr_48 [i_5] [i_13] [i_13] [(short)22] [i_14] [i_14] = ((/* implicit */unsigned long long int) (((~(arr_42 [i_6] [9ULL] [9ULL]))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_14] [i_5])) || (((/* implicit */_Bool) (short)14394)))))));
                    var_27 = ((/* implicit */long long int) ((arr_30 [i_5] [i_5] [i_5] [i_5] [(unsigned short)6]) ? (((/* implicit */int) (short)-15719)) : (((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) ((11139482033334879275ULL) <= (((/* implicit */unsigned long long int) -6485303478246504026LL))));
                            arr_53 [i_15] [i_6] = ((/* implicit */unsigned short) ((short) var_10));
                            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_16] [7ULL] [i_13] [i_6]))));
                            arr_54 [i_5] [16ULL] [i_13] [i_15] [i_5] [1ULL] = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) ((short) var_3));
            }
            for (unsigned short i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                arr_57 [0U] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) -4845110409645322399LL);
                var_31 &= max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_6) != (arr_46 [i_17] [i_5] [i_5] [i_5] [i_5] [i_5])))), (max((((/* implicit */unsigned int) (short)8834)), (var_7)))))), (arr_31 [i_6] [i_6] [i_6] [i_6] [i_17]));
                var_32 = ((((/* implicit */_Bool) (+(var_7)))) ? (max((14047223625147546776ULL), (((/* implicit */unsigned long long int) arr_39 [i_5] [i_5] [i_17] [i_5] [i_5])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_5] [i_6] [i_17] [i_6] [i_17]))) : (arr_17 [i_17] [i_5])))));
                var_33 = ((/* implicit */long long int) (+(((max((arr_22 [i_5] [i_17] [i_6] [i_5] [i_17] [i_5]), (((/* implicit */unsigned long long int) arr_36 [i_5] [i_5] [(short)22] [i_5])))) & (((/* implicit */unsigned long long int) -4845110409645322387LL))))));
            }
        }
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            arr_60 [(short)16] [(short)16] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) (short)-14394));
            /* LoopSeq 1 */
            for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_20 = 3; i_20 < 22; i_20 += 1) 
                {
                    arr_67 [i_5] [i_5] [i_5] [i_20] = ((/* implicit */unsigned short) 3027556788U);
                    var_34 = ((/* implicit */unsigned int) (!((_Bool)1)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 2) /* same iter space */
                    {
                        var_35 ^= ((/* implicit */short) arr_42 [2LL] [i_20 - 1] [i_21]);
                        var_36 = ((/* implicit */short) (!(((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_19] [i_20 + 1] [i_20 + 2] [i_19])))))));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 2) /* same iter space */
                    {
                        arr_73 [i_5] [i_18] [i_19] [i_20] [i_22] [i_20] = (i_20 % 2 == zero) ? (((/* implicit */short) (((((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-31668))))))) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */unsigned short) arr_38 [i_20 - 2])), (arr_39 [i_20 + 1] [i_20 + 1] [i_20] [(unsigned short)9] [i_20 + 1])))) - (8589)))))) : (((/* implicit */short) (((((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-31668))))))) + (2147483647))) << (((((((((/* implicit */int) max((((/* implicit */unsigned short) arr_38 [i_20 - 2])), (arr_39 [i_20 + 1] [i_20 + 1] [i_20] [(unsigned short)9] [i_20 + 1])))) - (8589))) + (2078))) - (2))))));
                        var_37 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)32256)), (((unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_20 - 1] [i_20 - 1] [i_19] [i_20 - 1] [i_20] [i_20 - 1])) ? (4233160440333770496ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14419))))))));
                        arr_74 [i_5] [i_5] [i_5] [i_19] [i_19] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)3117)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_51 [i_5] [i_5] [i_20 - 1] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32300))) : (((((/* implicit */_Bool) -1017849324809041557LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14394))) : (13362415601635015794ULL)))))));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), ((-(max((var_11), (((/* implicit */unsigned long long int) ((unsigned short) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))))));
                    }
                }
                for (long long int i_23 = 0; i_23 < 24; i_23 += 1) 
                {
                    arr_77 [i_19] = ((/* implicit */_Bool) arr_56 [i_5] [i_5] [i_19] [i_23]);
                    var_39 = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) 9223231299366420480ULL))) * ((~(((/* implicit */int) var_2)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)14379), ((short)-9635)))))))));
                    arr_78 [i_23] [i_19] [i_5] [i_5] = ((/* implicit */unsigned int) (-(arr_70 [i_18] [i_19] [i_19] [i_18] [i_19] [i_5])));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 11139482033334879278ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3841196313U)) ? (((/* implicit */unsigned long long int) 5417652596428492830LL)) : (7307262040374672342ULL)))) ? (((((/* implicit */_Bool) arr_43 [i_5] [i_18] [i_19] [i_18])) ? (arr_61 [i_5] [i_18] [i_18] [i_23]) : (((/* implicit */long long int) arr_47 [i_19])))) : (((((/* implicit */_Bool) arr_65 [i_23])) ? (2369671797955896201LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14394)))))))) : (min((4865092302218905268ULL), (11693520388694391975ULL)))));
                }
                arr_79 [i_5] [9LL] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_5] [i_5] [8ULL] [i_18] [i_19] [i_19]))))) ? (((((/* implicit */_Bool) 7307262040374672337ULL)) ? (arr_20 [i_5] [i_18] [i_18] [i_18]) : (((/* implicit */long long int) arr_65 [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) (short)-28260)))));
            }
            var_41 |= ((/* implicit */unsigned long long int) max((arr_17 [i_5] [i_18]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11139482033334879281ULL)) && (((/* implicit */_Bool) arr_68 [14LL] [i_18] [14LL])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_24 = 0; i_24 < 24; i_24 += 4) 
            {
                var_42 = arr_66 [i_24] [i_18] [i_24] [i_24];
                /* LoopSeq 1 */
                for (short i_25 = 0; i_25 < 24; i_25 += 2) 
                {
                    arr_87 [i_24] [i_24] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_24])) ? (arr_65 [i_5]) : (arr_65 [i_18])));
                    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (7307262040374672340ULL) : (0ULL)));
                    arr_88 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((arr_22 [i_5] [i_5] [i_18] [i_18] [i_24] [i_25]) > (arr_22 [i_5] [i_25] [i_18] [i_18] [i_25] [i_5])));
                    arr_89 [i_5] [i_18] [i_25] [i_25] [i_5] [i_25] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_61 [i_5] [(_Bool)1] [i_24] [i_25]))));
                }
                arr_90 [i_5] [i_18] [(_Bool)1] = ((/* implicit */unsigned short) 9223231299366420480ULL);
                var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) 8734965580415751192ULL))));
            }
            var_45 = 9711778493293800424ULL;
        }
        /* LoopSeq 1 */
        for (long long int i_26 = 0; i_26 < 24; i_26 += 3) 
        {
            var_46 = ((/* implicit */unsigned int) max(((~(-131131329588930899LL))), (((/* implicit */long long int) arr_56 [i_5] [(_Bool)1] [i_26] [i_26]))));
            var_47 = ((short) min((-7387248698347914924LL), (((/* implicit */long long int) arr_84 [i_5] [i_5] [i_5] [i_5] [i_26]))));
            var_48 -= arr_13 [i_26] [7LL];
        }
        var_49 = ((/* implicit */unsigned long long int) (((-(((long long int) (unsigned short)25526)))) | (((long long int) var_5))));
        var_50 = ((/* implicit */short) ((long long int) 704731114U));
    }
    var_51 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)15741)) && (((/* implicit */_Bool) 129879787U)))) ? (((/* implicit */int) ((short) (unsigned short)16051))) : (((/* implicit */int) var_0))));
    var_52 = ((/* implicit */short) var_9);
    var_53 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (short)-11704))))), (max((((((/* implicit */unsigned long long int) var_7)) + (var_11))), (((((/* implicit */_Bool) (short)32030)) ? (14047223625147546787ULL) : (((/* implicit */unsigned long long int) 4229407945U))))))));
}
