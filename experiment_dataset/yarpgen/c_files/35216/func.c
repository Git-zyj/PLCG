/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35216
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
    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 1999821515U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)61757)))) ? (var_8) : (((((/* implicit */_Bool) var_6)) ? (var_3) : (4294967275U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */short) var_5)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] |= ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [(short)10]) : (((/* implicit */unsigned int) arr_0 [i_0])))) ^ ((+(arr_1 [i_0] [i_0]))));
        arr_3 [0ULL] = arr_1 [(unsigned short)0] [i_0];
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_11 = ((/* implicit */short) 3133862728U);
        var_12 = max((((/* implicit */unsigned int) arr_5 [(unsigned short)10])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) arr_5 [i_1]))))) ? (((1863344340U) * (3133862713U))) : (arr_4 [i_1]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_10 [i_1] [(unsigned char)9] [i_3] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-10636))))) ? (((/* implicit */unsigned long long int) 3283539553U)) : (((((/* implicit */_Bool) arr_8 [i_1] [7U] [i_3 + 2])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (15383405943275984667ULL))))))));
                    var_13 *= ((/* implicit */short) min((min((arr_6 [(unsigned char)22] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3063338130433566966ULL)) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)127))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) < ((~(17053261478556335458ULL))))))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2761033988U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [(short)6] [i_2]))) : (((((/* implicit */_Bool) min((arr_6 [(unsigned char)23] [i_2]), (((/* implicit */unsigned int) arr_5 [i_1]))))) ? (min((((/* implicit */unsigned int) arr_8 [i_2] [i_2] [i_2])), (1161104570U))) : ((-(arr_6 [i_1] [i_2])))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            var_15 = ((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_4]);
            var_16 = ((/* implicit */short) (~(arr_6 [i_1] [i_4])));
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_6 = 2; i_6 < 24; i_6 += 1) 
                {
                    var_17 &= ((/* implicit */unsigned char) 18446744073709551615ULL);
                    arr_18 [i_5] [i_1] [i_5] [i_6 - 1] [(unsigned short)12] = ((/* implicit */unsigned short) (-(arr_7 [i_1])));
                }
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    arr_21 [(unsigned char)16] [(unsigned char)16] [i_4] [(unsigned char)8] [i_7] [i_7] &= ((/* implicit */unsigned char) arr_12 [i_1]);
                    arr_22 [i_1] [i_1] = ((/* implicit */unsigned short) (short)880);
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_11 [(unsigned char)9] [i_5] [i_5]))));
                    arr_23 [i_1] [i_1] = ((/* implicit */short) arr_20 [i_1] [i_4] [i_5] [i_7]);
                }
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    var_19 = ((/* implicit */short) arr_13 [i_1] [i_1] [i_1] [i_8]);
                    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(arr_5 [i_1]))))));
                    arr_27 [i_1] [i_4] [(unsigned short)10] [i_1] = ((/* implicit */_Bool) arr_9 [i_1] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 3; i_9 < 22; i_9 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) arr_19 [i_5] [i_1] [i_4] [i_8]);
                        var_22 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_4])) | (((/* implicit */int) arr_5 [i_1]))));
                    }
                    for (unsigned char i_10 = 3; i_10 < 22; i_10 += 3) 
                    {
                        arr_34 [i_1] [i_1] [i_5] [i_8] [i_8] = ((/* implicit */unsigned char) arr_24 [i_1] [(unsigned char)18] [i_1] [(unsigned char)18] [(unsigned short)10]);
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_1] [(unsigned short)8] [i_1] [i_1])))))));
                    }
                }
                for (short i_11 = 3; i_11 < 23; i_11 += 2) 
                {
                    arr_38 [i_1] [i_1] [i_1] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [21ULL])) ? (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1] [i_11])) : (arr_36 [i_1] [i_4] [i_5] [i_11] [i_4] [(unsigned short)2])))) ? (arr_31 [i_1] [i_4] [i_5] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((arr_5 [i_11]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_11] [(unsigned short)13] [22U] [i_4] [i_4] [(unsigned short)7]))))));
                    var_24 |= ((/* implicit */unsigned short) arr_19 [(_Bool)1] [24LL] [(unsigned char)18] [i_11 + 1]);
                    arr_39 [i_1] [7U] = arr_32 [i_1] [3ULL] [i_5] [i_4] [i_11 - 2];
                }
                var_25 = ((/* implicit */unsigned long long int) arr_8 [i_1] [4U] [(short)13]);
            }
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                arr_42 [7ULL] [i_1] [i_4] [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_1] [(short)12] [i_12])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1] [i_4]))))) : (arr_32 [i_1] [i_1] [i_1] [i_1] [i_1])));
                var_26 = ((/* implicit */unsigned int) arr_5 [22U]);
                var_27 = arr_13 [i_1] [(signed char)20] [i_1] [i_12];
            }
            for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                var_28 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) arr_9 [21LL] [i_1])) : (((/* implicit */int) arr_40 [i_4] [i_13] [i_4] [i_1]))))));
                var_29 += ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_1] [i_13] [i_13] [i_4])) * (((/* implicit */int) arr_14 [i_1] [i_4] [0U] [i_4]))))) ? (arr_6 [i_1] [(short)21]) : (arr_28 [i_1] [i_4] [i_13]));
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) arr_31 [i_1] [i_1] [i_4] [i_13]))));
            }
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) arr_47 [i_1] [16U] [16U]))));
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (arr_46 [(unsigned short)6] [i_14] [(unsigned char)4])));
        }
    }
}
