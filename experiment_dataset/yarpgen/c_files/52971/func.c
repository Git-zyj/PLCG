/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52971
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)183)))), ((+(((/* implicit */int) (short)23865))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (var_11)))) : (((((var_6) - (-6390400651902584447LL))) + (((/* implicit */long long int) var_1))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((((/* implicit */unsigned long long int) (+(var_1)))) * (arr_1 [i_0] [i_0]));
        arr_2 [i_0] = ((/* implicit */unsigned int) (unsigned short)14336);
    }
    /* vectorizable */
    for (long long int i_1 = 4; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 6390400651902584452LL)) ^ (4659232442013651560ULL))))));
                    var_15 = ((/* implicit */unsigned int) (-(arr_10 [i_1 - 1] [i_1 - 2])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned int i_5 = 4; i_5 < 23; i_5 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) arr_9 [i_1 - 1] [i_4]);
                    var_17 = ((/* implicit */unsigned int) ((6390400651902584447LL) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 3] [i_5 - 3])))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) -6390400651902584447LL))));
            var_19 = ((/* implicit */_Bool) arr_18 [i_1 + 1] [i_1 - 1]);
            /* LoopSeq 2 */
            for (short i_7 = 2; i_7 < 21; i_7 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (short i_9 = 1; i_9 < 22; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(6390400651902584462LL))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [3U] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_20 [i_7 - 2] [i_1 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [12ULL] [i_1] [i_1])))))));
                            var_22 ^= ((/* implicit */unsigned char) (((((_Bool)1) ? (var_6) : (((/* implicit */long long int) var_1)))) * (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            var_23 += ((/* implicit */unsigned long long int) (-(arr_9 [i_1 - 1] [i_9 + 1])));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((unsigned short) arr_6 [i_1 - 1] [i_7 - 2] [i_7]));
            }
            for (short i_10 = 2; i_10 < 21; i_10 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_10 - 1] [(_Bool)1] [(_Bool)1]))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned int i_12 = 2; i_12 < 21; i_12 += 1) 
                    {
                        {
                            arr_35 [i_12 - 2] [i_11] [22] [i_1 + 1] [i_1 + 1] = ((/* implicit */int) ((unsigned short) arr_8 [i_10 - 2] [i_10 - 1] [i_10 - 2]));
                            var_26 *= ((/* implicit */short) (_Bool)1);
                            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 4] [i_1 - 2])) & (((/* implicit */int) arr_8 [i_1 - 3] [i_1 - 4] [i_1 - 1]))));
                            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_6] [i_10 + 2] [i_12 + 1] [i_6])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_10] [(unsigned short)14] [(unsigned short)14]))))) : (((long long int) var_5))));
                        }
                    } 
                } 
                arr_36 [i_6] = ((arr_15 [i_1 - 2] [i_10 - 1] [i_10 + 3] [i_10 + 1]) ? ((+(((/* implicit */int) arr_27 [i_1] [i_1] [i_1])))) : (6));
            }
            arr_37 [i_6] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_18 [i_1] [i_6]))))));
        }
        for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            var_29 = ((/* implicit */_Bool) min((var_29), (((arr_19 [(unsigned char)5] [i_13] [i_1] [i_1 - 4]) > ((-(-6390400651902584447LL)))))));
            var_30 = ((/* implicit */unsigned char) arr_29 [i_1] [(signed char)19]);
        }
        for (int i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            arr_43 [i_14] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 2] [i_1 - 3]))));
            var_31 = ((/* implicit */int) arr_22 [i_1] [i_1 - 1] [18ULL] [18ULL]);
        }
        arr_44 [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_1])) ? (18263007614269579288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77)))))));
        /* LoopSeq 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                var_32 = arr_40 [7U] [i_1 - 3];
                var_33 &= ((/* implicit */unsigned int) arr_18 [i_1] [i_1 - 1]);
                /* LoopSeq 2 */
                for (int i_17 = 1; i_17 < 23; i_17 += 3) 
                {
                    var_34 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (728610153) : (((/* implicit */int) arr_42 [(short)8] [(unsigned char)1])))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_38 [7LL] [7LL] [i_17])) : (((/* implicit */int) var_2))))));
                    arr_53 [(unsigned char)17] [i_15] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1 - 2] [i_1 - 4] [i_17 + 1] [i_17 + 1])) ? (((/* implicit */int) arr_28 [i_1 - 1] [i_1 + 1] [i_17 + 1] [i_17 + 1])) : (((/* implicit */int) arr_52 [i_1 - 1] [i_17 + 1]))));
                    var_35 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 - 3])) / (((/* implicit */int) arr_5 [i_1 - 3]))));
                }
                for (long long int i_18 = 1; i_18 < 23; i_18 += 2) 
                {
                    arr_56 [i_1 - 1] [i_1 - 4] [i_1 - 1] [i_1 - 1] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) (-(arr_9 [i_1] [i_15])))) : (arr_40 [i_1 - 3] [i_18 + 1])));
                    var_36 += ((/* implicit */short) (~(((/* implicit */int) arr_14 [i_18 - 1] [i_18 + 1] [i_18] [i_1 - 4]))));
                    var_37 |= ((/* implicit */long long int) arr_31 [i_1 - 2]);
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    for (short i_20 = 1; i_20 < 21; i_20 += 4) 
                    {
                        {
                            arr_62 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_19] [3LL] = ((((/* implicit */_Bool) arr_58 [i_1] [i_1] [i_19] [i_20])) ? (((/* implicit */long long int) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_1])))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_6))));
                            var_38 &= ((/* implicit */long long int) (((-(((/* implicit */int) var_9)))) / (((((/* implicit */int) arr_45 [i_1] [i_16])) - (((/* implicit */int) arr_4 [i_1]))))));
                            arr_63 [i_1 - 1] = ((/* implicit */unsigned int) ((arr_39 [i_1] [i_1 - 2]) % (((/* implicit */unsigned long long int) var_7))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_42 [i_1 - 3] [i_1]))));
            }
            var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [(_Bool)1] [(signed char)4])) ? (-6390400651902584434LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1] [i_1 - 2]))))))));
            var_41 = ((/* implicit */signed char) arr_8 [i_1] [i_1 + 1] [i_1 - 1]);
            var_42 *= ((/* implicit */unsigned short) arr_32 [i_1] [i_1 - 4] [(unsigned char)12] [i_1]);
        }
        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 4) 
        {
            var_43 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_1 - 1] [i_21])) ? (((/* implicit */int) arr_45 [i_1 + 1] [i_21])) : (((/* implicit */int) arr_45 [i_1 - 1] [i_1 - 1]))));
            var_44 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1])) * (((/* implicit */int) arr_29 [i_1] [i_1]))));
            var_45 = ((/* implicit */long long int) arr_21 [(short)3] [20ULL] [20ULL]);
        }
        for (long long int i_22 = 3; i_22 < 22; i_22 += 1) 
        {
            arr_70 [i_1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1 - 3]))));
            var_46 *= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))));
            /* LoopSeq 1 */
            for (unsigned short i_23 = 3; i_23 < 21; i_23 += 3) 
            {
                arr_73 [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3422098041112089776LL)) ? (((/* implicit */int) arr_12 [i_22 - 1] [i_23 - 2])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_23]))));
                /* LoopSeq 2 */
                for (unsigned int i_24 = 1; i_24 < 23; i_24 += 3) 
                {
                    arr_76 [14LL] [i_24] [i_23 - 2] [1] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_16 [i_22] [i_23 - 1] [i_24 + 1])) / (((6390400651902584447LL) | (6390400651902584446LL)))));
                    var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_46 [i_24 - 1]))));
                }
                for (signed char i_25 = 0; i_25 < 24; i_25 += 2) 
                {
                    arr_79 [i_1] [i_1] [14U] = ((/* implicit */short) arr_5 [i_22 + 1]);
                    arr_80 [16LL] [16LL] [(unsigned char)16] [i_25] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_60 [i_22] [i_23])) && (((/* implicit */_Bool) var_6)))));
                    arr_81 [i_1] [i_25] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6390400651902584455LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)48))) : (((6390400651902584446LL) & (((/* implicit */long long int) -7))))));
                }
            }
        }
    }
    for (unsigned char i_26 = 0; i_26 < 11; i_26 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_27 = 1; i_27 < 7; i_27 += 4) 
        {
            for (unsigned int i_28 = 3; i_28 < 10; i_28 += 4) 
            {
                for (unsigned char i_29 = 1; i_29 < 9; i_29 += 4) 
                {
                    {
                        var_48 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) min((495557278), (((/* implicit */int) (signed char)-48))))) >= (((((/* implicit */_Bool) 495557278)) ? (4736281741860343304ULL) : (((/* implicit */unsigned long long int) var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_52 [(unsigned char)18] [i_27]))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-417155020703262627LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_26] [i_28] [i_29 + 2])) : (((/* implicit */int) arr_55 [i_29] [i_28] [i_28] [i_28] [i_27] [i_26]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))) > (arr_41 [i_26] [i_26])))))));
                        arr_95 [i_29] [i_27] [i_26] [i_27] [i_26] = ((/* implicit */_Bool) max((max((-6390400651902584439LL), (((/* implicit */long long int) 1U)))), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_85 [i_27]))))))))));
                        var_49 &= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_19 [i_28 - 3] [13] [i_27 + 4] [13])) ? (arr_19 [i_28 - 3] [19U] [i_27 + 3] [1U]) : (arr_19 [i_28 + 1] [i_27] [i_27 + 3] [23U])))));
                    }
                } 
            } 
        } 
        arr_96 [i_26] [i_26] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) -495557264)) ? (25) : (1752262746)))), (min((((/* implicit */long long int) arr_71 [i_26] [i_26])), (arr_89 [i_26] [i_26] [i_26])))));
        arr_97 [i_26] = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) arr_11 [i_26] [(_Bool)1] [i_26] [14U])) || (((/* implicit */_Bool) arr_66 [i_26])))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_75 [i_26] [i_26] [i_26] [i_26])))) ? (((/* implicit */unsigned long long int) ((arr_49 [(_Bool)1]) ? (((/* implicit */int) (signed char)-61)) : (arr_31 [i_26])))) : (((((/* implicit */_Bool) arr_31 [i_26])) ? (((/* implicit */unsigned long long int) arr_84 [i_26] [0LL])) : (arr_72 [i_26] [(_Bool)1]))))))));
        var_50 = ((/* implicit */_Bool) -6390400651902584447LL);
    }
    for (unsigned short i_30 = 0; i_30 < 20; i_30 += 1) 
    {
        var_51 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -6390400651902584459LL)) ? (15) : (((/* implicit */int) (unsigned short)42338))))) ? (((var_9) ? (arr_33 [i_30]) : (arr_17 [i_30] [20LL] [20LL]))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_50 [14] [i_30] [14]))))))));
        arr_100 [i_30] = ((/* implicit */unsigned int) (((~(arr_17 [i_30] [i_30] [i_30]))) ^ (min((arr_17 [i_30] [i_30] [i_30]), (((/* implicit */long long int) arr_20 [i_30] [i_30]))))));
    }
}
