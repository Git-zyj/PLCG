/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216340
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_17))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_17)))))))) >= (max((var_7), (((/* implicit */long long int) arr_4 [i_0]))))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) arr_2 [i_0])))))));
        }
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 60194401U)), (-6650065902454036402LL)));
                var_23 += ((/* implicit */unsigned char) min(((~((~(arr_1 [i_3]))))), (min((min((arr_1 [i_3]), (var_7))), (((/* implicit */long long int) arr_4 [i_0]))))));
                arr_12 [(unsigned short)0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29737))) + (6650065902454036402LL)));
            }
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                arr_16 [i_2] [i_2] [i_2] = ((((unsigned long long int) arr_15 [i_2] [i_2] [i_2])) * (max((arr_3 [i_2] [i_2] [i_4]), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_2])))));
                arr_17 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_4]);
            }
            var_24 |= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4691)) && ((!(((/* implicit */_Bool) 2131741359U))))))), (min((arr_10 [i_0] [i_2] [i_0] [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(short)14] [8LL] [i_0])))))))));
            arr_18 [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_15 [i_2] [i_2] [i_2])) + (2147483647))) >> (((max(((-(((/* implicit */int) (unsigned char)130)))), (((/* implicit */int) arr_15 [i_0] [i_2] [i_2])))) + (155)))));
        }
        for (long long int i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            arr_22 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((short) var_15))), (min((((/* implicit */int) arr_7 [i_0] [i_5 + 2])), (min((arr_10 [i_0] [i_5] [i_0] [i_0]), (((/* implicit */int) (unsigned char)255))))))));
            var_25 ^= ((/* implicit */long long int) (-(((/* implicit */int) min((arr_11 [i_0]), (arr_11 [i_0]))))));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_1 [i_0]))));
            arr_23 [i_0] [0U] [5] = ((/* implicit */short) ((int) ((long long int) arr_21 [i_5])));
        }
        arr_24 [i_0] [0U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_18))));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 20; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            arr_30 [i_6] = ((/* implicit */signed char) var_17);
            arr_31 [i_6] = ((/* implicit */short) var_8);
        }
        arr_32 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6])) ? (arr_27 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6 + 1] [i_6] [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8))))));
    }
    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) min((arr_25 [i_8] [i_8]), (((/* implicit */short) var_3))))))), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_2)), (arr_33 [i_8]))), (((/* implicit */unsigned int) (unsigned short)35798)))))));
        var_29 -= ((/* implicit */short) (-(max((((/* implicit */long long int) var_5)), (arr_26 [i_8])))));
        arr_35 [i_8] = ((/* implicit */short) max((min((arr_33 [i_8]), (arr_33 [i_8]))), (min((arr_33 [i_8]), (arr_33 [i_8])))));
    }
    /* LoopNest 3 */
    for (long long int i_9 = 3; i_9 < 17; i_9 += 1) 
    {
        for (short i_10 = 1; i_10 < 16; i_10 += 4) 
        {
            for (unsigned short i_11 = 2; i_11 < 17; i_11 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_12 = 3; i_12 < 15; i_12 += 2) 
                    {
                        arr_45 [i_9] [i_10] [i_11] [i_9] [i_11] [(signed char)1] = ((/* implicit */unsigned int) (unsigned char)130);
                        var_30 = ((/* implicit */unsigned short) ((4234772895U) | (((/* implicit */unsigned int) ((var_12) / (((/* implicit */int) var_2)))))));
                        arr_46 [i_9 - 1] [i_9] [i_11] [i_12 + 1] [i_9] = (i_9 % 2 == zero) ? (((/* implicit */unsigned long long int) ((arr_26 [i_9]) << (((arr_26 [i_9]) - (4941973795954046672LL)))))) : (((/* implicit */unsigned long long int) ((arr_26 [i_9]) << (((((arr_26 [i_9]) - (4941973795954046672LL))) + (2171207340210156898LL))))));
                        /* LoopSeq 2 */
                        for (short i_13 = 1; i_13 < 14; i_13 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) arr_47 [i_9] [i_10] [i_11 + 1] [i_12] [i_13]);
                            arr_49 [i_11] [i_10] [i_11] [i_10] [i_13] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [(short)3])) || (((/* implicit */_Bool) var_12))));
                            arr_50 [i_9] [i_10] [2U] [i_12] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            arr_53 [i_9 - 3] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) arr_34 [i_11 - 2]);
                            arr_54 [i_9] [i_10] [i_11 + 1] [i_12] [i_14] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)82)) && (((/* implicit */_Bool) 7858025580350047739LL))));
                            var_32 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_43 [i_12] [i_10 + 1]))));
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [6] [i_9])) ? (var_16) : (((/* implicit */int) arr_47 [i_9 - 3] [(short)15] [i_11 - 2] [i_12 - 3] [i_14]))));
                            arr_55 [i_9] [i_11 - 1] [i_9] [i_12] [i_14] = ((/* implicit */unsigned long long int) ((unsigned short) var_13));
                        }
                        var_34 = ((/* implicit */_Bool) var_13);
                    }
                    for (short i_15 = 4; i_15 < 14; i_15 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_27 [i_9]) + (arr_38 [i_10 + 2] [i_11] [i_15]))) / (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_14)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((unsigned int) arr_38 [i_11 + 1] [i_10] [i_11]))));
                        arr_59 [i_9] [i_9] [i_11] [i_15] = ((/* implicit */short) (unsigned short)44494);
                    }
                    arr_60 [i_9] [i_10] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_9 - 1]))))) << ((+(((/* implicit */int) ((2533419115131338274LL) < (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_9] [5ULL] [i_11] [i_9] [i_9]))))))))));
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_29 [i_10 + 1] [i_11] [i_9 + 1])))))))));
                    arr_61 [i_9] [i_10] [i_10] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_9])))));
                }
            } 
        } 
    } 
}
