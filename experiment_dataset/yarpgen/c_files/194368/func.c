/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194368
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (short)-12778)))))) > (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 9223372036854775789LL)), (14042960958047750237ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_9)) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_1 [i_0 + 1] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (((((/* implicit */_Bool) (short)32764)) ? (16986326514614621570ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_13 = ((/* implicit */short) arr_3 [i_0]);
            var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) 4403783115661801408ULL)) || (((/* implicit */_Bool) 9223372036854775779LL))));
        }
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 806703553)))))) && (((/* implicit */_Bool) 2ULL))));
            var_15 &= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (signed char)-64)) || (((/* implicit */_Bool) (signed char)54)))) || (((/* implicit */_Bool) -9223372036854775806LL)))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)75))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)32))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_16 = ((/* implicit */int) arr_0 [i_3]);
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) -575349961878358619LL)) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 1])) : (arr_1 [i_0 - 3] [i_3]))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            var_18 = ((((/* implicit */unsigned int) (+(arr_11 [i_4])))) == (arr_10 [i_0 + 1]));
            var_19 = ((/* implicit */unsigned long long int) arr_7 [i_4]);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)1))));
            var_21 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16805)) ? (4100023477273092098ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-77)) && (((/* implicit */_Bool) 4782566390946807751ULL)))))) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [i_0])))))));
        }
    }
    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            arr_22 [i_6] [i_7] [i_7] = ((unsigned long long int) 14346720596436459511ULL);
            var_22 = ((/* implicit */unsigned short) arr_16 [i_6]);
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                arr_25 [(short)21] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_6])) ? (arr_18 [i_6] [i_8]) : (arr_18 [i_8] [i_7])));
                /* LoopSeq 1 */
                for (short i_9 = 1; i_9 < 23; i_9 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)64765)) ? (17743618916403976213ULL) : (18446744073709551598ULL)));
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_24 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_8] [i_8] [i_9 - 1] [i_7] [i_9 + 1] [i_8]))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_26 += (signed char)-79;
                        var_27 = ((/* implicit */unsigned short) (~((~(-8694995258789044220LL)))));
                    }
                    for (int i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), ((~(arr_35 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_12])))));
                        var_29 = ((/* implicit */_Bool) arr_29 [(short)14] [i_7] [i_12]);
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_29 [i_12] [i_9 - 1] [i_8]))));
                    }
                    for (int i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((arr_26 [i_7] [i_9 + 1] [i_9 + 1] [i_9] [i_13]) & (((/* implicit */long long int) ((((/* implicit */int) (signed char)76)) >> (((var_10) + (695856602)))))))))));
                        var_32 = ((/* implicit */long long int) 10354421491548121996ULL);
                        arr_41 [(short)1] [i_9 - 1] [i_9] [i_9] = ((/* implicit */unsigned int) (unsigned short)50561);
                        var_33 = ((/* implicit */_Bool) (-(arr_27 [i_9 + 1] [i_9 + 1])));
                        arr_42 [i_13] [i_9] [i_8] [i_9] [i_6] = ((/* implicit */unsigned long long int) (signed char)76);
                    }
                    arr_43 [i_9] = ((((/* implicit */_Bool) 2865580247625950038ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967282U)) || (((/* implicit */_Bool) var_9)))))) : ((~(18446744073709551615ULL))));
                    arr_44 [i_6] [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_8])) ? (arr_20 [i_9 - 1] [i_8] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_9 - 1] [i_9 - 1])))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_14 = 3; i_14 < 22; i_14 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14979)) == (((/* implicit */int) (_Bool)1))));
                        arr_50 [i_6] [i_14 + 2] = ((/* implicit */unsigned short) (((((_Bool)0) || (((/* implicit */_Bool) (unsigned short)50546)))) ? (((/* implicit */int) arr_40 [i_6] [i_7] [i_8])) : (((/* implicit */int) (unsigned short)15009))));
                        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -8694995258789044220LL))));
                        var_36 = ((/* implicit */unsigned short) arr_49 [i_15] [i_14 - 1] [i_14 - 2] [i_14 - 3] [i_7] [i_6]);
                    }
                    for (int i_16 = 2; i_16 < 20; i_16 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */signed char) ((((18446744073709551612ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)988)) || (((/* implicit */_Bool) arr_21 [i_8])))))));
                        var_38 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_31 [i_14 - 3] [i_14 - 3] [i_14] [i_14 - 3] [i_14] [(unsigned short)9])) ? (var_5) : (4100023477273092094ULL)))));
                    }
                    for (int i_17 = 2; i_17 < 20; i_17 += 2) /* same iter space */
                    {
                        arr_59 [i_8] [i_7] [i_8] [i_14] [i_8] [i_14] = ((14346720596436459512ULL) << (((var_7) + (674252249))));
                        arr_60 [i_8] [i_8] [i_8] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_54 [i_6] [i_6] [i_8] [i_14] [i_14 + 2] [i_17])) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) arr_30 [i_17] [i_17 + 4] [i_7] [i_7] [i_17 + 2] [i_17 + 2]))));
                        var_39 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (int i_18 = 2; i_18 < 20; i_18 += 2) /* same iter space */
                    {
                        arr_63 [i_6] [i_7] [i_6] [i_7] [i_6] [i_6] [i_18 + 1] = ((/* implicit */signed char) arr_30 [i_6] [i_6] [i_8] [i_8] [i_14 + 1] [i_6]);
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_6] [i_14 - 2] [i_6] [i_14] [i_18 + 1])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_61 [i_7] [i_14 - 2] [i_8] [i_6] [i_18 + 1] [i_6])));
                        var_41 = ((/* implicit */unsigned short) arr_38 [i_7] [i_14 + 1]);
                    }
                    var_42 = ((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_32 [i_14 - 2] [i_14 - 3] [i_8] [i_7] [i_6]));
                    /* LoopSeq 2 */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */signed char) ((arr_61 [i_6] [i_6] [i_8] [i_14 - 1] [i_7] [i_6]) >= (arr_61 [i_6] [i_7] [i_19] [i_14] [i_8] [i_14 - 3])));
                        var_44 = ((((/* implicit */_Bool) arr_64 [i_7] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_19])) ? (((/* implicit */int) arr_64 [i_8] [i_14 - 3] [i_14 + 2] [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_64 [i_6] [i_14 - 1] [i_14 - 1] [i_19] [i_19] [i_14 - 1])));
                    }
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */_Bool) 4100023477273092095ULL);
                        var_46 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44198)))))) ? (4100023477273092097ULL) : (((unsigned long long int) (unsigned short)0))));
                    }
                    var_47 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_66 [i_6] [i_7] [i_14 - 2] [i_14] [(_Bool)1] [i_7]))));
                }
            }
            for (unsigned long long int i_21 = 3; i_21 < 21; i_21 += 2) /* same iter space */
            {
                var_48 = ((((/* implicit */_Bool) arr_29 [i_21 + 2] [i_21 - 3] [i_21 - 2])) ? (((6397391195781873768ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_6] [(signed char)5]))))) : (arr_65 [i_21]));
                var_49 &= ((/* implicit */unsigned long long int) ((_Bool) arr_40 [i_6] [i_6] [i_21 - 1]));
                var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_54 [i_6] [10U] [i_7] [i_7] [i_6] [10U]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3370)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)988)) : (((/* implicit */int) (signed char)19)))) : ((-(((/* implicit */int) (signed char)111)))))))));
            }
            for (unsigned long long int i_22 = 3; i_22 < 21; i_22 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (signed char i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        {
                            var_51 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)26111)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (17125840219668391960ULL)))));
                            arr_80 [(signed char)10] [i_7] [i_22] [22LL] [i_23] [i_24] = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
                var_52 = ((((/* implicit */_Bool) 1490817248)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (4100023477273092080ULL));
                arr_81 [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -1129459767)) : (7414057886518690262ULL))) - (18446744072580091838ULL)))));
            }
        }
        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 642016060822770975LL)) ? (arr_58 [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))))), (((((/* implicit */_Bool) -3386573973396572301LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_71 [i_6] [20ULL] [i_6] [i_6])))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_46 [4LL] [4LL] [i_6]))) + (arr_55 [i_6] [i_6] [i_6] [i_6] [i_6])))) ? (min((((/* implicit */unsigned long long int) var_10)), (10130297074920740200ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-642016060822770987LL)))))) : (max((max((17125840219668391977ULL), (((/* implicit */unsigned long long int) arr_78 [4ULL] [i_6] [i_6] [i_6] [i_6])))), (arr_65 [i_6])))));
        var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) min((arr_28 [i_6] [i_6] [i_6] [(unsigned short)18] [i_6]), (((/* implicit */long long int) arr_29 [i_6] [i_6] [i_6])))))));
        var_55 += ((/* implicit */unsigned short) arr_21 [i_6]);
    }
    var_56 = ((/* implicit */unsigned long long int) (unsigned short)50564);
    var_57 = ((/* implicit */unsigned short) ((min(((((_Bool)1) ? (89385676) : (((/* implicit */int) (signed char)111)))), (((/* implicit */int) var_4)))) * (((/* implicit */int) max((var_1), (((/* implicit */short) (!(((/* implicit */_Bool) var_3))))))))));
    var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) var_5))), (((max((((/* implicit */unsigned long long int) 4294967295U)), (14346720596436459517ULL))) | (((/* implicit */unsigned long long int) var_10)))))))));
}
