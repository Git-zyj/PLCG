/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215379
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
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((unsigned long long int) var_5)) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)195)))))))), (var_13)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)10))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) && (((/* implicit */_Bool) (~(arr_1 [i_0])))))))) != (arr_0 [i_0])));
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_17))))) ? (((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) var_5)))) : (((/* implicit */int) (short)23605))))));
                arr_8 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) 902765983U)));
                var_22 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) 4294967295U)) * (min((((/* implicit */unsigned long long int) arr_7 [i_2] [9U])), (var_9))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */int) max((var_11), (((/* implicit */short) arr_14 [i_0] [i_3] [i_0] [i_2] [i_2] [0ULL] [i_0]))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_14))))))));
                            var_24 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1 - 2]);
                            var_25 = max((((/* implicit */long long int) arr_14 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_3 + 1] [i_4] [i_4])), (min((((((/* implicit */long long int) arr_12 [i_0] [i_0] [(short)0] [i_3] [(short)0])) - (var_15))), (((/* implicit */long long int) ((unsigned char) arr_3 [i_0]))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) var_0);
            }
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_27 = ((/* implicit */short) (-(((((((/* implicit */int) (unsigned short)5)) / (((/* implicit */int) (unsigned char)25)))) / (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_3 [i_0])))))))));
                arr_18 [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) var_13);
                var_28 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) (unsigned short)25)))));
                arr_19 [(signed char)6] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) var_7)) | (max((((/* implicit */unsigned long long int) var_7)), (5271601689633844250ULL))))), (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_1)))));
            }
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_14)) - (22688)))))))) | (((((/* implicit */_Bool) 4133443770U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)254)) << (((-7305371318464730821LL) + (7305371318464730824LL)))))) : (3248413799U)))));
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_11), (var_11))), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))))) || ((!(((/* implicit */_Bool) ((unsigned short) arr_7 [i_0 + 1] [i_1])))))));
            var_31 = arr_14 [i_0] [i_0 - 1] [i_0 - 1] [(signed char)8] [i_0] [i_0] [1U];
        }
        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            var_32 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (arr_9 [i_0])))) : (((/* implicit */int) var_18)))) >= (((/* implicit */int) ((((arr_9 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_6)))))));
            arr_22 [i_0] = (+(((/* implicit */int) arr_4 [i_6])));
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6]))) + (arr_16 [i_0] [i_0] [i_0] [i_6]))) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 - 1])))))) ? ((~(((/* implicit */int) var_13)))) : (((((/* implicit */int) max((((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [i_0 + 1] [i_6] [i_6] [(short)3])), (arr_13 [i_6] [i_0] [i_0 + 1] [i_0] [i_0])))) << (((((/* implicit */int) (unsigned short)29610)) - (29603)))))));
            var_34 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) arr_7 [i_0 + 1] [i_6]))))) && (((var_12) > (((/* implicit */unsigned int) ((/* implicit */int) (short)18564)))))))) | (((/* implicit */int) (short)15679))));
        }
    }
    for (short i_7 = 2; i_7 < 22; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_35 *= ((/* implicit */unsigned char) arr_29 [i_7] [i_7] [i_8]);
            arr_30 [i_7] [i_8] = ((/* implicit */unsigned char) (+(min((max((((/* implicit */long long int) arr_29 [i_7 - 2] [20ULL] [i_8])), (arr_23 [i_7 + 2]))), (((/* implicit */long long int) var_16))))));
            var_36 = ((((arr_23 [i_8]) + (9223372036854775807LL))) << (((((((/* implicit */int) ((unsigned short) var_6))) * (((/* implicit */int) ((unsigned char) var_10))))) - (11179612))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */int) arr_31 [(unsigned short)18] [(unsigned short)18] [i_7])) ^ (((/* implicit */int) arr_29 [i_7 + 2] [i_8] [i_10]))))), (arr_26 [11U]))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7 - 2]))))))));
                        var_38 = ((/* implicit */long long int) min((((unsigned int) var_5)), (((/* implicit */unsigned int) min(((unsigned short)5), (((/* implicit */unsigned short) (unsigned char)100)))))));
                        var_39 -= ((/* implicit */signed char) var_18);
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                var_40 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (unsigned short)33561)) != (((/* implicit */int) arr_25 [i_8] [18ULL]))))));
                arr_38 [i_8] [i_8] [i_11] = ((arr_35 [i_11] [i_7 + 2] [i_7 + 2]) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (arr_24 [(signed char)11] [(signed char)11]))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7 + 2] [i_7 + 2]))));
                var_41 = ((/* implicit */signed char) (!(arr_35 [i_7 + 2] [i_7] [i_7 + 1])));
                var_42 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_33 [i_11])) ? (((/* implicit */int) arr_35 [i_7] [(short)20] [i_7])) : (((/* implicit */int) (short)23596)))) & (((/* implicit */int) (signed char)-25))));
            }
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            var_43 = ((/* implicit */unsigned short) ((arr_26 [i_7 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7 + 1] [i_7 - 2] [i_7 - 2])))));
            var_44 &= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) > (var_9))) ? (((/* implicit */int) arr_35 [i_7] [i_12] [12ULL])) : (((/* implicit */int) ((unsigned char) arr_29 [i_7] [19LL] [i_12])))));
            var_45 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) (short)-23580)))));
        }
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                {
                    var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((short) var_15)))));
                    arr_47 [(unsigned short)2] [i_13] [i_13] [i_7 + 2] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_36 [i_14] [i_13] [(unsigned short)15])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
    {
        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_15])) >> (((/* implicit */int) arr_28 [i_15] [i_15]))))) ? (((arr_49 [i_15]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59069))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))));
        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_15] [6ULL])) ? (((/* implicit */int) arr_41 [i_15])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_25 [i_15] [i_15])) : (((((/* implicit */int) arr_33 [i_15])) | (((/* implicit */int) var_0))))));
        var_49 = arr_24 [i_15] [i_15];
    }
    /* vectorizable */
    for (unsigned int i_16 = 1; i_16 < 18; i_16 += 1) 
    {
        var_50 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)65529)))));
        var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8970879889633146553LL)) ? (1263382080U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31974)))));
    }
}
