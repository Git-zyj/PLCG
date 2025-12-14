/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51794
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
    var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23992)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) 9223372036854775807LL))))) : (var_6)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_21 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((unsigned char) arr_3 [i_3 - 1] [i_3 + 1] [i_3 - 1]));
                            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)237)) != (((/* implicit */int) (signed char)95)))) ? (((/* implicit */int) (unsigned char)7)) : (((int) (unsigned char)223))));
                        }
                    } 
                } 
                var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_15))));
            }
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1] [i_6] [i_1]))));
                            arr_19 [i_0 - 1] [i_1] [i_5] [i_5] [i_7 - 2] |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_16 [8LL] [i_1] [i_5] [i_6] [i_1]))));
                        }
                    } 
                } 
                arr_20 [15] |= ((/* implicit */short) arr_1 [(signed char)2]);
                arr_21 [(_Bool)1] [15LL] = (unsigned char)255;
            }
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)18))))) ? (((((arr_7 [i_0] [(short)11] [i_0] [(short)11]) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1] [(unsigned short)0])) - (75))))) : (((arr_18 [4LL] [i_1] [(signed char)5] [(unsigned char)13] [i_0] [i_0]) ^ (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [15U] [(unsigned short)13]))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                {
                    arr_27 [i_9] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) var_9))), ((signed char)95)))) : (((/* implicit */int) (signed char)-35))));
                    var_27 = ((/* implicit */long long int) var_5);
                    /* LoopSeq 1 */
                    for (int i_10 = 2; i_10 < 16; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) max((((arr_7 [i_10] [3] [i_8] [i_0]) | (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (signed char)0))))) || (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
                        arr_30 [(unsigned short)11] [(unsigned short)11] [(signed char)14] [(signed char)1] [i_10] |= ((/* implicit */short) arr_28 [i_0] [i_8] [i_8] [i_9] [i_9] [i_10]);
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                        {
                            var_29 |= ((/* implicit */unsigned short) ((unsigned char) arr_5 [3LL] [i_10] [4LL] [i_0]));
                            var_30 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_23 [i_10])) / (3048689968448211118ULL)))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) arr_5 [i_11] [i_10] [(unsigned short)9] [i_0])) ? (((/* implicit */int) arr_3 [17LL] [(signed char)17] [i_8])) : (((/* implicit */int) (unsigned char)222)))))), (((((/* implicit */int) arr_28 [(_Bool)1] [i_8] [i_0 + 1] [(_Bool)1] [5] [5])) | (((/* implicit */int) arr_26 [i_0 + 1] [i_10 + 3] [i_11 + 1]))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_8] [7] [i_0] [i_8] [(unsigned short)7] = ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */int) (unsigned char)13)) ^ (((/* implicit */int) (unsigned short)1819))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-85)))), ((~(((/* implicit */int) arr_2 [6] [i_8])))))))));
                            var_31 |= ((/* implicit */unsigned int) ((min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-35)), (arr_31 [i_8] [(short)7] [i_8] [i_8] [i_8] [i_8] [i_8])))), (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))) ^ (((((((/* implicit */_Bool) 1424378821)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) max((((/* implicit */short) arr_4 [i_0] [i_0] [i_0])), ((short)-9772))))))));
                        }
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_40 [i_13] [i_9] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (short)11825)) - (11824)))));
                        var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)127)))) ^ (((((/* implicit */int) arr_0 [i_9])) - (((/* implicit */int) arr_4 [i_0 - 2] [i_0] [i_0 - 2]))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
                        {
                            var_33 = ((/* implicit */long long int) max((var_33), (((((/* implicit */_Bool) (signed char)110)) ? (((((/* implicit */_Bool) 0LL)) ? (arr_23 [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (short)22907))))) : (((var_0) * (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))));
                            arr_44 [(signed char)12] [(signed char)12] [i_9] [13LL] [(signed char)12] [i_9] = ((/* implicit */long long int) (signed char)3);
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((int) var_4)))));
                            arr_45 [(unsigned char)1] [(unsigned char)1] [(short)3] [(short)3] [(short)3] = ((/* implicit */signed char) ((unsigned short) (short)22921));
                            var_35 = 0LL;
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_36 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 8019176313060533561ULL)) && (((/* implicit */_Bool) (short)22907)))) && (((/* implicit */_Bool) (unsigned char)84))));
                            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned short)9578)) : (-1072655439)));
                            var_38 = ((/* implicit */long long int) var_13);
                        }
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            arr_52 [i_0] [i_8] [i_16] [(signed char)11] [i_16] [i_8] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0 - 1] [i_0]);
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_25 [i_16])) ? (((/* implicit */int) arr_9 [i_0] [i_8] [i_8] [i_13] [i_16])) : (((/* implicit */int) (unsigned char)238)))) : (((((/* implicit */_Bool) (short)25034)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)21))))));
                            arr_53 [i_16] [(unsigned short)10] [(signed char)14] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((arr_14 [i_16 - 1] [12LL] [i_9] [i_8] [12LL]) | ((~(((/* implicit */int) var_18))))));
                        }
                    }
                    for (unsigned short i_17 = 1; i_17 < 17; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((((/* implicit */int) arr_46 [i_0] [i_0] [(signed char)13] [(_Bool)1] [i_0] [i_0])) ^ (((/* implicit */int) (signed char)-127)))) > (((/* implicit */int) (!(((/* implicit */_Bool) 1270131228)))))))), (min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)18)) && (((/* implicit */_Bool) 1555279504))))), (min(((unsigned short)50759), (((/* implicit */unsigned short) arr_12 [i_17] [i_8]))))))));
                        var_41 = ((/* implicit */short) ((8846856088091377830ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44689)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned char)248)))))));
                        var_42 -= ((/* implicit */unsigned int) (_Bool)0);
                    }
                    for (unsigned short i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        var_43 = ((/* implicit */_Bool) (~((((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_9] [i_9] [i_9] [i_9])))) ^ (((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) arr_50 [i_0] [(unsigned short)2] [i_8] [(unsigned short)2] [8]))))))));
                        arr_59 [i_0] [i_0] [12LL] [i_0] [i_0] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -1424378830))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)9768)), (arr_17 [i_0] [(unsigned short)15] [i_9] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) (unsigned short)14237))))) || (((_Bool) ((((/* implicit */int) arr_56 [i_0] [(_Bool)1] [8LL] [i_9] [(_Bool)1])) ^ (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    }
                    var_44 &= ((/* implicit */short) var_12);
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned short i_21 = 0; i_21 < 19; i_21 += 2) 
                {
                    {
                        var_45 = ((/* implicit */_Bool) (unsigned char)225);
                        /* LoopSeq 3 */
                        for (long long int i_22 = 3; i_22 < 18; i_22 += 2) 
                        {
                            arr_70 [i_19] [i_19] = ((/* implicit */unsigned char) arr_67 [i_19] [i_19] [i_19 + 1] [i_19 + 1] [i_19 + 1]);
                            var_46 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -4482987360282902801LL)) ? (((/* implicit */long long int) -1424378822)) : (var_16)))))) || (((/* implicit */_Bool) max((((long long int) arr_66 [i_20] [i_20] [i_22])), (((/* implicit */long long int) (_Bool)1)))))));
                            var_47 = ((/* implicit */unsigned long long int) ((unsigned char) arr_14 [7LL] [7LL] [7LL] [7LL] [i_21]));
                        }
                        for (unsigned char i_23 = 0; i_23 < 19; i_23 += 2) 
                        {
                            var_48 |= ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)20592)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            arr_74 [(unsigned char)7] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */int) (signed char)123)), (min((((/* implicit */int) (unsigned char)13)), (12))))) >> (((/* implicit */int) (signed char)7))));
                        }
                        for (long long int i_24 = 0; i_24 < 19; i_24 += 2) 
                        {
                            var_49 -= ((/* implicit */unsigned char) var_16);
                            var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)25063)) ? (((/* implicit */int) ((((/* implicit */int) arr_58 [(unsigned short)17] [i_24] [(unsigned short)17] [i_24])) != (((/* implicit */int) arr_16 [(signed char)13] [i_19] [i_20] [i_21] [i_19]))))) : ((-(max((((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned short)10])), (arr_14 [i_0] [i_19] [i_20] [i_21] [i_0])))))));
                            var_51 &= ((/* implicit */int) ((unsigned long long int) arr_3 [i_21] [i_0 + 1] [(signed char)14]));
                            var_52 = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) >> ((((~(((/* implicit */int) arr_63 [i_19])))) + (12911)))))) ? (((((_Bool) (unsigned short)48241)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-4)) != (((/* implicit */int) (unsigned short)24044))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_20] [(_Bool)1] [5U])) : (((/* implicit */int) arr_13 [18])))))) : (((/* implicit */int) var_10)));
                        }
                    }
                } 
            } 
        } 
    }
    var_53 = ((/* implicit */int) (unsigned char)147);
    var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) -19LL))));
}
