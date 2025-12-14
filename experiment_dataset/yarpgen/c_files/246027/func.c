/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246027
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
    for (short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_0 [7]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)172)) ? ((-(((/* implicit */int) (unsigned char)194)))) : (2)));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (unsigned char)82)) : (((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((/* implicit */int) (unsigned char)179)) : ((+(((/* implicit */int) (unsigned short)23009))))))));
    }
    for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1 + 1] |= ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) != (1584763956394746223ULL)))) & (((/* implicit */int) arr_6 [i_1 + 3])))) | (((/* implicit */int) ((signed char) min(((unsigned char)78), (((/* implicit */unsigned char) var_4))))))));
        var_14 ^= ((/* implicit */short) ((max((((/* implicit */long long int) arr_7 [(unsigned char)12])), (-152219847092032505LL))) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), (var_9)))))));
    }
    /* LoopSeq 2 */
    for (short i_2 = 3; i_2 < 9; i_2 += 3) 
    {
        arr_12 [i_2] |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 6357503332478844387LL))))));
        arr_13 [11LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_9 [i_2 + 3] [i_2 - 3]) % (arr_9 [i_2 + 2] [i_2 + 2]))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            var_15 |= ((/* implicit */unsigned short) ((min((((((/* implicit */int) (unsigned short)10)) * (((/* implicit */int) (short)-32759)))), (((/* implicit */int) ((unsigned short) -6748239106647486160LL))))) | ((~(((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32762))))))));
            arr_18 [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)11051)) << (((arr_4 [i_4 + 1] [i_4 + 2]) - (7755164041586640049ULL)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) -8664497107982450902LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32762))))) * (min((3103096367U), (((/* implicit */unsigned int) var_7)))))) : ((~(4294934528U)))));
            var_16 = ((/* implicit */unsigned int) ((152219847092032489LL) < (((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_7 [(unsigned char)13]))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 19; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 1) 
                    {
                        {
                            arr_32 [i_7] [(signed char)6] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5 + 3] [i_5 + 3] [i_6 - 1] [18U]))) ^ (var_8)));
                            var_17 = ((/* implicit */unsigned short) var_10);
                            arr_33 [(signed char)12] [i_5] [(unsigned short)12] [(unsigned short)12] [(signed char)12] [(unsigned short)12] |= ((/* implicit */signed char) var_2);
                            var_18 |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_27 [i_5 - 3] [i_5 - 3] [i_6 - 1] [i_6 - 1] [i_8 - 2] [6LL]))));
                        }
                    } 
                } 
            } 
            arr_34 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) <= (((4294967292U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24607)))))));
            /* LoopSeq 4 */
            for (short i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    for (signed char i_11 = 2; i_11 < 18; i_11 += 4) 
                    {
                        {
                            arr_42 [i_3] [i_10] [i_9] [18U] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_30 [5LL] [i_5 - 4] [i_11 + 1] [13LL] [i_5 - 4]))));
                            arr_43 [i_3] [i_3] [i_9] [(short)19] [(short)19] = ((/* implicit */signed char) (short)20347);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            var_19 |= ((/* implicit */_Bool) (+(var_1)));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42855))))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        {
                            var_21 ^= ((((/* implicit */_Bool) var_0)) ? (arr_21 [i_5 + 2] [i_15]) : (arr_21 [i_5 - 3] [i_15]));
                            var_22 = ((/* implicit */unsigned short) min((var_22), ((unsigned short)24607)));
                        }
                    } 
                } 
                arr_57 [i_3] [i_3] [i_14] = ((/* implicit */unsigned int) (+(((481038465413109755ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_3] [i_3] [i_5 + 1] [(_Bool)1] [(_Bool)1] [i_14])))))));
            }
            for (signed char i_17 = 3; i_17 < 18; i_17 += 2) 
            {
                var_23 |= ((/* implicit */short) ((((2441614780655927055ULL) ^ (((/* implicit */unsigned long long int) var_10)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75)))));
                arr_60 [(short)4] |= ((/* implicit */long long int) ((((/* implicit */int) ((short) var_3))) ^ (((/* implicit */int) arr_19 [i_3] [(short)2]))));
                /* LoopSeq 1 */
                for (unsigned int i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    arr_63 [2ULL] [(signed char)16] [(unsigned short)8] [16ULL] |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (short)-23058))));
                    arr_64 [i_3] [i_5] [i_5 + 4] [i_5 + 4] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) var_5))) : ((+(((/* implicit */int) (short)27960))))));
                }
            }
            for (signed char i_19 = 0; i_19 < 20; i_19 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_20 = 2; i_20 < 18; i_20 += 1) 
                {
                    arr_70 [i_3] [i_5 + 3] [4LL] [(unsigned char)10] |= ((((/* implicit */int) arr_65 [i_20 + 1] [i_20 + 1] [i_20 - 2] [i_20 - 2])) - (((/* implicit */int) (unsigned short)33)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 2; i_21 < 16; i_21 += 3) 
                    {
                        var_25 = ((/* implicit */short) (-(((((/* implicit */int) (short)-23058)) - (((/* implicit */int) (signed char)-7))))));
                        var_26 = ((/* implicit */int) min((var_26), ((+(((/* implicit */int) (signed char)-115))))));
                        arr_74 [14LL] [0LL] [i_3] [(short)18] [(signed char)7] = ((/* implicit */long long int) (((+(((/* implicit */int) (short)24668)))) % (((/* implicit */int) ((unsigned short) var_4)))));
                        arr_75 [i_3] = ((/* implicit */short) ((unsigned long long int) arr_31 [(_Bool)1] [i_21 + 4] [i_3] [(unsigned short)1] [i_20]));
                        arr_76 [i_3] [i_3] [i_5] [i_19] [i_3] [(short)8] = ((/* implicit */signed char) arr_35 [(signed char)6] [(unsigned short)0] [i_20 + 1]);
                    }
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_20 - 2] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5])) ? (((/* implicit */int) ((short) 1048575))) : ((+(((/* implicit */int) arr_52 [i_3]))))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 2) /* same iter space */
                {
                    arr_80 [16LL] [i_3] [i_5 - 1] [i_5] [i_3] [(short)19] = ((/* implicit */short) (unsigned short)12288);
                    arr_81 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5 + 1])) ? (((/* implicit */int) arr_7 [i_5 - 4])) : (((/* implicit */int) arr_7 [i_5 - 2]))));
                }
                for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 2) /* same iter space */
                {
                    arr_84 [i_3] [i_5] [(signed char)16] [i_23] = ((/* implicit */unsigned short) ((15ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [9LL] [i_5 + 3] [(unsigned short)3])))));
                    arr_85 [2U] [(short)5] [(_Bool)1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_5 + 3] [i_5] [(signed char)19] [i_5 - 1] [i_5 + 2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) : (arr_56 [i_5 + 2] [(short)0] [2LL] [i_5 + 1] [i_5 - 1] [i_3])));
                }
                arr_86 [(signed char)6] [i_5 - 2] [4U] [(short)8] |= ((/* implicit */unsigned long long int) (short)0);
                arr_87 [i_3] [(short)18] [16] |= ((/* implicit */unsigned short) arr_35 [i_5 - 3] [i_5 + 3] [i_5 + 1]);
            }
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_26 [i_3] [i_3] [i_5] [(unsigned short)8]))));
            /* LoopSeq 2 */
            for (unsigned char i_24 = 0; i_24 < 20; i_24 += 1) 
            {
                /* LoopNest 2 */
                for (short i_25 = 0; i_25 < 20; i_25 += 4) 
                {
                    for (long long int i_26 = 0; i_26 < 20; i_26 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((unsigned short) (-(((/* implicit */int) arr_52 [i_3]))))))));
                            var_30 = ((/* implicit */unsigned int) arr_29 [i_5 + 1] [(unsigned char)8] [12] [(unsigned char)8] [(short)13] [i_5]);
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_3] [(signed char)12] [i_24] [i_3]))) <= (-8112340905256230748LL)))) >= (((var_1) - (((/* implicit */int) (short)32287))))));
                            arr_95 [i_3] [i_3] [(short)2] [(short)8] [i_24] [i_25] [i_26] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32277))));
                        }
                    } 
                } 
                var_32 |= ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                var_33 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)65535))));
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6))) < (89174175U)))))));
            }
        }
        /* LoopNest 3 */
        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
        {
            for (long long int i_29 = 0; i_29 < 20; i_29 += 3) 
            {
                for (long long int i_30 = 1; i_30 < 19; i_30 += 3) 
                {
                    {
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (((_Bool)1) ? (arr_23 [i_3] [i_28]) : ((((+(((/* implicit */int) (unsigned short)65520)))) + (((/* implicit */int) (unsigned short)0)))))))));
                        var_36 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) <= (((((/* implicit */_Bool) arr_21 [i_3] [i_3])) ? (13051990021013029865ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65503)))))))));
                        arr_109 [i_3] [i_3] [19ULL] [(short)18] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)30)) % (((/* implicit */int) arr_61 [i_3] [10LL] [8ULL] [(unsigned short)17]))))) ? (max((((/* implicit */unsigned long long int) var_0)), (arr_22 [i_3] [i_28] [i_28] [(unsigned char)18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_3] [i_3] [i_3] [i_3] [(signed char)17]))))), (((/* implicit */unsigned long long int) -1907353043))));
                    }
                } 
            } 
        } 
    }
}
