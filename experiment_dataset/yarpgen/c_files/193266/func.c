/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193266
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
    var_16 = ((/* implicit */long long int) (((~(((/* implicit */int) var_12)))) ^ (max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) var_9)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))))) : (((/* implicit */int) arr_3 [i_0])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 3; i_3 < 6; i_3 += 4) 
                    {
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)4] [(signed char)0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -7890168275395248163LL)))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86)))))));
                        arr_10 [i_0] [i_1] [i_0] [i_2] [i_0] [(signed char)7] = ((/* implicit */unsigned char) ((long long int) arr_4 [i_0 - 3] [i_1 + 1]));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_2 + 1] [i_1] = ((/* implicit */long long int) (unsigned char)19);
                        var_19 -= ((/* implicit */short) min(((unsigned char)241), (((/* implicit */unsigned char) ((signed char) arr_12 [(signed char)8] [i_0] [i_0] [i_0 + 3])))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (var_9)))) ? (arr_11 [(signed char)2] [(signed char)2] [i_4] [i_1 - 1] [i_2 - 1] [i_5 + 1]) : (max((4403154660852257628LL), (((/* implicit */long long int) (unsigned char)241)))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) : (max((arr_4 [i_0] [i_1]), ((-9223372036854775807LL - 1LL)))))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-8558135091803910380LL), (((/* implicit */long long int) arr_0 [i_0] [0LL]))))) ? (arr_15 [i_5 + 1] [i_1 + 1] [i_5] [i_5 - 1] [i_2 - 1] [i_1 + 1] [i_1]) : (((((/* implicit */_Bool) var_14)) ? (arr_15 [i_0 - 3] [(unsigned char)1] [(unsigned char)1] [i_4] [i_4] [i_5 - 1] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20071)))))))) % ((+(arr_7 [i_4])))));
                            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) arr_14 [i_2 - 1] [(unsigned short)2] [i_1] [i_2]))), (((min((arr_11 [i_1] [i_5] [i_1] [i_1] [i_5] [i_1]), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1] [i_5])))) * (((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_0] [7ULL] [i_1] [(unsigned char)3] [3ULL]), (((/* implicit */unsigned short) var_14))))))))));
                            arr_18 [i_0 + 3] [i_1] = ((/* implicit */long long int) var_5);
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)247))));
                            var_24 = ((/* implicit */long long int) arr_19 [i_1] [i_0]);
                            var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) arr_14 [i_1] [i_2 + 1] [i_1] [i_2 + 1])) : (((/* implicit */int) (unsigned short)6221))))) ? (((/* implicit */int) ((signed char) 3464534284580404371LL))) : (((/* implicit */int) (signed char)44)))), (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2] [i_1] [i_4]))));
                        }
                    }
                    var_26 -= ((/* implicit */long long int) (signed char)-51);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_7 = 2; i_7 < 6; i_7 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                var_27 += ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0] [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)207))));
                var_28 = ((/* implicit */unsigned short) max((var_28), (arr_8 [i_0 - 2] [i_7] [i_7 + 1] [i_7])));
                var_29 = ((unsigned char) arr_4 [i_0] [i_7]);
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)38108)) : (((/* implicit */int) ((signed char) (unsigned char)6)))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 2; i_10 < 9; i_10 += 2) 
                    {
                        var_31 -= var_9;
                        var_32 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-25))));
                        var_33 -= ((long long int) arr_17 [(short)2] [i_0] [i_9] [i_0 - 1] [i_0]);
                        arr_34 [i_0] [(unsigned short)0] [i_7] [i_8] [(unsigned char)6] [i_9] [(signed char)6] = ((/* implicit */long long int) (signed char)-35);
                        arr_35 [(unsigned short)8] [i_7] [i_8] [(unsigned short)3] [i_9] [i_10 - 1] = ((/* implicit */short) ((unsigned short) (unsigned char)238));
                    }
                    arr_36 [(signed char)9] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) (-(arr_4 [i_0 + 2] [i_0 + 3])));
                }
                for (unsigned char i_11 = 2; i_11 < 7; i_11 += 4) 
                {
                    arr_39 [9U] [i_8] [i_7] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_0] [i_7] [i_8] [(signed char)0]))));
                    arr_40 [(signed char)7] [(signed char)7] [i_8] [(unsigned short)4] [i_0 + 3] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 2] [i_11 - 1] [i_8] [i_7 + 2]))) + ((-(5892496943525237087LL)))));
                    var_34 += ((/* implicit */unsigned char) 8451891623420893818LL);
                }
                for (long long int i_12 = 3; i_12 < 9; i_12 += 2) 
                {
                    arr_44 [i_0] [i_7] [i_8] [i_12] [i_8] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_8])) ? (((/* implicit */int) arr_23 [7ULL])) : (((/* implicit */int) (unsigned short)23))))) ? (((((/* implicit */_Bool) -4407312153512556567LL)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) arr_2 [i_8])))) : (((/* implicit */int) arr_8 [i_0] [i_7] [6U] [i_7 - 2]))));
                    arr_45 [(unsigned short)6] [i_12 - 3] = arr_27 [i_7] [i_0 - 3];
                }
            }
            var_35 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)231)), (var_7)))) : ((-(16874562653493753778ULL)))))) || (((/* implicit */_Bool) -8451891623420893821LL))));
        }
        var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_4 [i_0] [i_0])))))) ? ((((!(((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_0 - 3] [i_0])))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_38 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), ((unsigned char)236)))))) : (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-111)), ((short)-8192)))) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((unsigned char) (unsigned char)128)))))));
        var_37 += ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_23 [i_0 + 1])) + (((/* implicit */int) arr_23 [i_0 + 1])))));
    }
}
