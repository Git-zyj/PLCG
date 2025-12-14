/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39601
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
    var_15 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(arr_1 [i_0])))) / (((((/* implicit */_Bool) arr_0 [(unsigned char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2704582280U)))));
        var_16 ^= ((((/* implicit */_Bool) 3816795919U)) ? (var_9) : (((/* implicit */long long int) arr_1 [i_0 + 2])));
        arr_3 [i_0] = ((/* implicit */short) ((13283147364412347418ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_1]));
        arr_7 [i_1] = ((/* implicit */unsigned short) 18446744073709551605ULL);
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_4 [(_Bool)1] [i_1 - 1])) >= (((/* implicit */int) arr_0 [i_1 + 2]))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)11968);
    }
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-20)))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (short)31777)) > (((/* implicit */int) (unsigned short)16444))))))));
        var_18 = max((((/* implicit */unsigned int) (unsigned char)245)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) * (767485749U))));
    }
    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_16 [i_3 + 1] [i_3 + 3]), (arr_16 [i_3 + 3] [i_3 + 2])))) ? ((~(((/* implicit */int) arr_16 [i_3 - 1] [i_3 + 2])))) : (((/* implicit */int) arr_16 [i_3 - 1] [i_3 + 3]))));
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (unsigned char)205))));
            arr_20 [i_3] [i_4] = ((/* implicit */short) (~(6592843046360096141ULL)));
            arr_21 [i_3] = ((/* implicit */signed char) ((short) (unsigned char)13));
        }
        for (short i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                arr_28 [i_3] [i_3] [i_6] = ((/* implicit */long long int) max((((unsigned int) ((((/* implicit */int) arr_18 [i_3] [i_3])) == (var_11)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (var_11))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_3] [i_6])) ? (4916804087934697733ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)572)))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    for (signed char i_8 = 2; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_21 -= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_14 [i_5 - 2] [i_8 - 1]))) + (((/* implicit */int) max((arr_14 [i_5 + 3] [i_8 + 1]), (arr_14 [i_5 - 1] [i_8 - 2]))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) ((short) arr_11 [5LL] [i_8]))), (((((/* implicit */int) (short)-12208)) | (7)))))))));
                        }
                    } 
                } 
            }
            for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                var_23 += ((/* implicit */unsigned char) ((unsigned long long int) ((short) arr_5 [i_5 + 3] [i_3 + 3])));
                arr_38 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_31 [i_5 - 1] [i_5 - 1] [i_5 + 3] [i_5 - 1] [(unsigned short)7] [i_5 + 1]))) ? (((arr_31 [i_5 - 1] [i_5 - 1] [i_5 + 3] [i_5 + 2] [i_5] [(signed char)5]) | (arr_31 [i_5 + 3] [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5] [i_5 + 1]))) : (((((/* implicit */long long int) var_11)) | (arr_31 [i_5 + 3] [i_5 - 2] [i_5 + 1] [i_5 + 3] [(short)7] [i_5])))));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_22 [i_3]))));
                arr_39 [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_36 [i_5 + 1] [i_5 + 1] [i_5 - 2] [(signed char)3])) >> (((((/* implicit */int) arr_36 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])) - (14879))))), (arr_27 [i_5 + 1] [i_3 + 2])));
            }
            for (long long int i_10 = 1; i_10 < 14; i_10 += 3) 
            {
                var_25 = ((/* implicit */short) arr_35 [i_5 + 1] [(signed char)10] [i_5] [i_3] [15] [i_3 - 1] [i_3 - 1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    var_26 = ((/* implicit */signed char) (~(arr_27 [i_5 + 1] [i_3 + 1])));
                    var_27 = ((/* implicit */unsigned int) ((unsigned long long int) var_13));
                    var_28 = ((/* implicit */short) ((((/* implicit */int) arr_33 [i_5] [i_5 + 3] [i_5 + 3] [i_5 + 1] [i_5 + 2] [(unsigned short)14] [(_Bool)1])) | (arr_35 [i_5 + 3] [i_5] [i_5] [7ULL] [7ULL] [7ULL] [i_3])));
                }
                for (unsigned int i_12 = 2; i_12 < 14; i_12 += 4) 
                {
                    arr_46 [i_3] [(signed char)10] [(unsigned char)10] [(short)1] [i_3] = ((/* implicit */short) arr_22 [i_3]);
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_12])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [(signed char)13])) / (((((/* implicit */int) arr_40 [(signed char)6] [i_10 - 1] [i_12])) + (((/* implicit */int) arr_26 [i_12] [i_12] [i_12]))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_30 [i_10 + 2] [i_10 + 2] [i_12] [i_10] [i_10 + 1]))))))));
                    arr_47 [i_3] [i_5] [(unsigned short)14] [(unsigned short)14] [(signed char)8] = ((/* implicit */short) (~(max((var_11), (((((/* implicit */int) arr_14 [i_3] [i_3])) >> (((((/* implicit */int) var_8)) + (25714)))))))));
                    var_30 = ((/* implicit */unsigned int) var_8);
                }
            }
            arr_48 [i_3] [7U] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32490)) ^ (((/* implicit */int) arr_36 [(short)8] [2LL] [i_3] [i_5 + 2]))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            var_31 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_3 + 1])) ? (arr_29 [i_13]) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))) <= (478171394U)))))));
            arr_52 [i_3] [i_3] [i_3] = max((((/* implicit */unsigned long long int) var_3)), (var_12));
            var_32 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)23149))) <= (9223372036854775807LL))) ? (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) arr_40 [i_3 + 1] [i_13] [i_13])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) var_9)))))));
        }
        var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [(signed char)6]))))) && (((/* implicit */_Bool) min((arr_34 [i_3 + 1] [i_3] [i_3] [i_3] [i_3]), (arr_34 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3]))))));
    }
}
