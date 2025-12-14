/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224093
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */unsigned char) ((((_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)-18833)) : (var_5)))) : ((~(18446744073709551615ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((int) arr_1 [i_0 + 1] [i_0 + 1]));
        arr_4 [i_0] = ((/* implicit */short) (signed char)75);
        arr_5 [i_0 + 3] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 4; i_2 < 23; i_2 += 4) 
        {
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned char)21))) ? (((/* implicit */int) (short)18836)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) || (((/* implicit */_Bool) (signed char)-121))))))))));
            var_14 -= ((/* implicit */int) (signed char)-1);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 4; i_4 < 24; i_4 += 4) 
            {
                for (short i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    {
                        var_15 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (unsigned char)27)) < (-2057989888))));
                        var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_5 + 1] [i_1 + 1])) ? (((((/* implicit */int) var_8)) & (var_5))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-116))))));
                        var_17 -= ((/* implicit */short) ((((/* implicit */int) arr_12 [i_3 - 1] [i_3] [i_3 - 1])) << (((((/* implicit */int) var_8)) - (114)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_6 = 3; i_6 < 24; i_6 += 4) 
            {
                for (short i_7 = 1; i_7 < 23; i_7 += 3) 
                {
                    {
                        arr_27 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)228))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_21 [16] [i_3] [(unsigned char)11] [i_3])) ^ (((/* implicit */int) (unsigned char)241))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_26 [i_7 + 1] [i_7] [i_7] [i_1 - 2]))));
                        /* LoopSeq 1 */
                        for (int i_8 = 2; i_8 < 24; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (var_11))) : (((/* implicit */int) arr_6 [i_8 - 1]))));
                            arr_30 [i_1] [i_3 - 1] [i_7] [i_6] [i_7] [i_8] = ((/* implicit */short) arr_21 [i_1 - 1] [i_7 - 1] [i_6 - 2] [i_7]);
                        }
                    }
                } 
            } 
        }
        arr_31 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-76)))) + (((/* implicit */int) (unsigned char)224))));
    }
    /* LoopSeq 1 */
    for (short i_9 = 1; i_9 < 22; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (short i_10 = 2; i_10 < 22; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) 2057989887);
                        var_21 = ((/* implicit */unsigned char) ((((min((((/* implicit */long long int) ((((/* implicit */int) (short)-6897)) | (((/* implicit */int) (unsigned char)227))))), (max((1097394354993895884LL), (((/* implicit */long long int) (short)22554)))))) + (9223372036854775807LL))) >> (((max((((/* implicit */int) (unsigned char)242)), (981469358))) - (981469321)))));
                        /* LoopSeq 2 */
                        for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            arr_48 [i_9] = ((/* implicit */short) ((unsigned char) 8ULL));
                            arr_49 [i_9] [7LL] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_8 [i_11] [(signed char)22])) ? (((/* implicit */int) arr_39 [i_9] [i_9 - 1] [i_9 - 1] [i_9])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_8))))) * (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)242), (((/* implicit */unsigned char) (signed char)31)))))) & (arr_7 [i_11] [(signed char)20])))));
                        }
                        for (short i_14 = 2; i_14 < 20; i_14 += 2) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_45 [i_10 - 2] [i_11] [i_14] [i_10]), (((/* implicit */unsigned int) (unsigned char)243))))) ? ((+(arr_45 [i_10 + 1] [i_12] [i_14] [i_14]))) : (max((arr_45 [i_10 - 1] [i_11] [(short)2] [i_10]), (arr_45 [i_10 - 1] [i_12] [i_12] [i_10]))))))));
                            var_23 += ((/* implicit */unsigned char) 624276104);
                            arr_53 [i_9 - 1] [i_9] [i_11] [i_12] [i_14] [i_11] [i_9] = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15137)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))) : (1125899634U)))) || (((/* implicit */_Bool) 2147483647))));
                            var_24 ^= ((/* implicit */short) var_9);
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_57 [(short)4] [i_10] [i_9] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_43 [i_9 - 1] [i_9 - 1] [i_9 - 1])) : (var_11)))) ? (((((int) arr_6 [i_9])) & (((((((/* implicit */int) (short)-12867)) + (2147483647))) >> (((((/* implicit */int) var_3)) - (80))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */int) ((((/* implicit */int) (short)24298)) >= (((/* implicit */int) (unsigned char)50))))) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)253)) - (232)))))))));
                            arr_58 [i_11] [i_10] |= ((/* implicit */int) arr_15 [i_15] [i_12] [i_10] [i_9 - 1]);
                        }
                        for (int i_16 = 1; i_16 < 20; i_16 += 3) 
                        {
                            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_50 [(unsigned char)22] [i_10] [i_10] [i_10] [i_12] [i_12] [i_16])) ^ (((/* implicit */int) var_2)))) / (((/* implicit */int) min((var_4), (((/* implicit */short) arr_55 [i_9] [i_9] [i_9 - 1] [i_9] [i_9])))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_37 [i_12] [i_12])), (max(((unsigned char)207), (var_0)))))) : (((/* implicit */int) (signed char)117))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max(((~(((/* implicit */int) min((var_10), (var_2)))))), (max((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) var_4)))), (var_5))))))));
                        }
                        var_27 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-112))));
                    }
                    /* vectorizable */
                    for (short i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                    {
                        arr_64 [i_9] [i_9] [i_9] [i_17] [i_9] = ((/* implicit */long long int) var_3);
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-23217)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29336))) : (-9148743998759359234LL))))));
                    }
                    arr_65 [i_9] [i_9] = ((/* implicit */unsigned char) max((((long long int) ((((/* implicit */int) (short)29358)) * (((/* implicit */int) (short)-16335))))), (((/* implicit */long long int) ((((arr_14 [i_9] [i_9 + 2] [16ULL]) == (((/* implicit */int) var_0)))) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) var_3)))))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) var_0);
        var_30 ^= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_5)), (max((((/* implicit */unsigned long long int) 1601444731)), (6295893892582077873ULL))))) << (((((/* implicit */int) var_12)) + (162)))));
    }
}
