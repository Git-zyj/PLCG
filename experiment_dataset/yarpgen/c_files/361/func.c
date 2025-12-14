/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/361
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) (signed char)89);
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            var_17 = ((/* implicit */signed char) 11027460167028930301ULL);
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) var_12);
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0 + 1] [10LL] [i_4] [i_1] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_11 [i_0] [(unsigned short)9] [(unsigned short)8] [i_1])))) + (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))) || (((/* implicit */_Bool) arr_13 [i_4] [i_4]))));
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [(signed char)7] [(short)7]))) ? (((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)56)))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [10ULL] [i_1 + 2] [i_2] [i_3] [i_4] [i_4])) > (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) arr_0 [i_3] [(unsigned short)0])) : (((((/* implicit */_Bool) max((3761078932U), (((/* implicit */unsigned int) (unsigned char)94))))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) arr_13 [i_4] [i_1 - 1])))));
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-74)))) + (((/* implicit */int) arr_12 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))) / ((-(((((/* implicit */_Bool) 850109564)) ? (1078760889160572610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176)))))))));
                            var_20 = ((/* implicit */signed char) 1720162573078204045LL);
                            var_21 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [(_Bool)1] [(unsigned short)8])) & (((/* implicit */int) min((((unsigned char) var_4)), (((/* implicit */unsigned char) arr_8 [i_1] [i_1] [i_1] [i_1 - 1])))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_5 = 3; i_5 < 11; i_5 += 3) 
        {
            var_22 = ((/* implicit */signed char) (+((((+(var_14))) ^ (((/* implicit */int) var_5))))));
            var_23 = ((/* implicit */unsigned char) arr_13 [i_5] [i_5]);
            arr_18 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) == (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)14792)) : (((/* implicit */int) var_8))))));
            arr_19 [i_5] = ((/* implicit */unsigned long long int) var_10);
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_24 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (unsigned short)29797)))));
            var_25 = ((/* implicit */long long int) var_7);
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((unsigned long long int) var_13)))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_27 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1]))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (arr_17 [(_Bool)1] [i_7]) : (((/* implicit */long long int) arr_5 [i_0 + 1] [(short)9])))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_11)))))))));
                        }
                    } 
                } 
            }
            for (signed char i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) (~(((arr_9 [i_0] [i_6] [3ULL] [3ULL] [i_6]) >> (((((/* implicit */int) arr_0 [i_6] [i_6])) - (18054)))))));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [10LL])) ? (533888359U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                            arr_37 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [(_Bool)1] [i_12])) ? (((((/* implicit */_Bool) var_7)) ? (-1106189792) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [3] [i_6] [i_10] [i_10] [3] [3])) || (((/* implicit */_Bool) arr_0 [(signed char)7] [(signed char)7])))))));
                            var_31 += ((((/* implicit */int) (short)32711)) | (((/* implicit */int) arr_1 [i_0 - 1])));
                            arr_38 [i_12] [i_6] [i_10] [i_6] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_21 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : (arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        }
                    } 
                } 
            }
            for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_3 [i_0 - 1] [i_0])));
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((var_14) > (((/* implicit */int) arr_30 [i_0 - 1] [i_0 - 1])))))));
                var_34 = ((/* implicit */short) (+(9144982735980094925ULL)));
            }
        }
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                arr_51 [i_0] [i_14] [i_15] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) min((arr_5 [(_Bool)0] [(_Bool)0]), (((/* implicit */unsigned int) (unsigned short)50745))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1720162573078204046LL))))))));
                arr_52 [i_15] [i_14] [(signed char)2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_40 [i_14] [i_0 - 1] [i_15] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [2ULL] [i_14] [i_0 - 1])) + (((/* implicit */int) (short)-31834))))))) << (((((arr_29 [8ULL] [i_0 + 1] [i_15]) ? (((/* implicit */unsigned long long int) (-(2147483647)))) : (arr_25 [i_0] [(signed char)2] [i_0 - 1]))) - (18446744071562067922ULL)))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_16 = 2; i_16 < 11; i_16 += 3) 
            {
                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) ? (9301761337729456690ULL) : (((/* implicit */unsigned long long int) arr_54 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned short i_17 = 1; i_17 < 10; i_17 += 3) 
                {
                    var_36 ^= ((/* implicit */int) arr_39 [(_Bool)1] [i_17]);
                    var_37 = ((/* implicit */signed char) var_10);
                    arr_58 [i_0] [i_0] [(_Bool)0] [(short)0] |= ((/* implicit */short) (unsigned short)65523);
                }
            }
        }
        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1720162573078204050LL)), (896ULL)))) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) ((arr_56 [i_0 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0 + 1] [i_0] [(unsigned short)2] [(unsigned short)1]))))))))))));
        arr_59 [i_0 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_0 - 1] [i_0])) || (((/* implicit */_Bool) 896ULL))))), (((((/* implicit */_Bool) 7797988390132713344ULL)) ? (arr_50 [(unsigned short)3] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
    }
    var_39 = ((/* implicit */unsigned int) var_3);
}
