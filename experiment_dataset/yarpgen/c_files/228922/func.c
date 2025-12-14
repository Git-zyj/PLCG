/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228922
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
    var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (var_7))) ? (((((var_2) + (9223372036854775807LL))) >> (((var_13) - (530758920))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)37035)) : (((/* implicit */int) (signed char)120))))))) << (((((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-24321)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)37024)), (2147450880U)))) : (((var_8) / (var_8))))) - (2147450853LL)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_2 [(short)2]);
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_16 = max((((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_1])) << (((((((/* implicit */int) (short)-29445)) + (29475))) - (18)))))))), (((((((/* implicit */unsigned int) -1684727497)) * (131072U))) >> (((((/* implicit */int) arr_5 [i_1] [i_1])) - (52))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((arr_1 [i_1] [i_3]) ^ (((/* implicit */int) arr_4 [7ULL])))) : (((((/* implicit */int) (unsigned char)182)) - (((/* implicit */int) arr_5 [(_Bool)1] [8U]))))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-120)) < (arr_0 [7U] [i_3]))))) * (((((/* implicit */_Bool) arr_1 [i_1] [i_3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_1] [(short)9] [(short)9])))))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [8U])) ? (arr_7 [i_3] [i_3] [5U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [1ULL]))))))) < (((((/* implicit */unsigned long long int) min((450689216), (((/* implicit */int) arr_4 [i_4]))))) + (arr_7 [i_1] [i_2] [i_3])))));
                    arr_12 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)29450))));
                }
                var_19 = ((/* implicit */short) max((arr_0 [i_2] [6LL]), (max((((/* implicit */int) (short)-17413)), (((arr_6 [i_1] [i_1] [i_3]) / (((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_3]))))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((17935144670053683430ULL), (((/* implicit */unsigned long long int) arr_11 [(unsigned short)2] [i_2] [(unsigned short)2] [i_2])))))));
                var_21 = ((/* implicit */long long int) (~(3153082368U)));
            }
            for (short i_5 = 1; i_5 < 7; i_5 += 1) 
            {
                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(signed char)3])) >> (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_1] [i_1] [(short)0]) < (((/* implicit */int) (short)-17967)))))) : (max((((/* implicit */unsigned long long int) (unsigned short)28488)), (15675093645729009015ULL))))) * (0ULL)));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1] [i_2])) % (((((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [6LL])) / (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    var_24 += ((/* implicit */long long int) arr_4 [(unsigned char)9]);
                    var_25 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)187))))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3717047121U)) && (((/* implicit */_Bool) 3495842450U)))))));
                }
                for (int i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_8 = 4; i_8 < 9; i_8 += 4) 
                    {
                        var_27 = 4294967295U;
                        arr_25 [i_1] [i_2] [i_5] [i_1] = ((((((((/* implicit */int) (signed char)3)) < (((/* implicit */int) (_Bool)1)))) ? (arr_13 [i_1] [i_1] [i_1] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)24576))))))) - (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_9 [0LL] [i_1] [i_2] [i_1])) + (((/* implicit */int) arr_10 [i_2] [i_5] [i_7]))))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        arr_29 [i_1] [i_5] [(short)0] = ((/* implicit */unsigned int) arr_2 [i_7]);
                        arr_30 [i_1] [i_1] [i_5] = ((/* implicit */signed char) (-(arr_15 [i_5 + 2] [i_5 + 2])));
                        var_28 = ((/* implicit */unsigned long long int) (short)17412);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) arr_13 [(unsigned short)0] [i_1] [i_2] [i_1]);
                        arr_33 [i_5] [i_2] [i_5] [7U] [(unsigned short)8] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-11))) / (4294967295U))) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)19421)) - (-1845622280))))))) ? (max((((((/* implicit */_Bool) (short)8067)) ? (2948734671U) : (799124824U))), (((4294836224U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4585))))))) : (max((((/* implicit */unsigned int) (signed char)-27)), (arr_28 [(short)9] [(short)9] [i_5 + 1] [i_5])))));
                    }
                    arr_34 [i_5] [i_2] [i_2] [i_7] [(short)1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) -1845622280)), (131071U)));
                    var_30 = ((/* implicit */short) arr_1 [i_2] [i_1]);
                }
                arr_35 [i_5] [i_2] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-5144)), (arr_1 [i_1] [(_Bool)1])));
            }
            arr_36 [i_1] [i_2] [0U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_13 [i_1] [(unsigned short)9] [(unsigned short)9] [i_1])))) ? (((((/* implicit */unsigned long long int) ((arr_21 [(unsigned short)7] [i_2] [(signed char)9] [(signed char)9]) * (arr_28 [i_1] [i_2] [(short)8] [i_2])))) * ((-(arr_13 [i_1] [(_Bool)1] [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_16 [i_1] [i_2] [i_1] [i_1])), (15LL))))));
            arr_37 [(signed char)8] [(signed char)8] = ((/* implicit */short) ((18446744073709551604ULL) >> (((/* implicit */int) (signed char)21))));
        }
    }
}
