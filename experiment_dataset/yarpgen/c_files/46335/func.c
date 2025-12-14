/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46335
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
    var_11 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)384)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (18446744073709551615ULL)))) ? (((/* implicit */int) (unsigned char)12)) : ((~(((/* implicit */int) (signed char)104))))))) : (var_4)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) var_2);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) (unsigned char)165);
                        var_13 = ((/* implicit */unsigned char) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [18] [i_1] [(signed char)14])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (max((((/* implicit */unsigned int) (unsigned char)165)), (arr_4 [17LL])))))), (max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_1] [16ULL] [i_4] [i_5])), (18215541680118344894ULL)))));
                                arr_18 [i_0] [i_4] [13U] [13U] [i_0] = ((/* implicit */signed char) arr_15 [i_0] [i_0] [i_0] [(unsigned char)21] [i_0] [(unsigned char)18]);
                                arr_19 [17ULL] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(-55456973)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_5))));
                    arr_20 [i_1] [i_0] = ((/* implicit */int) arr_9 [i_0] [i_0]);
                }
                for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), ((-((+(arr_8 [i_1] [22ULL]))))))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0] [i_6 + 2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6 + 2] [i_6 + 1] [i_6] [i_0] [i_6]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20093))) - (arr_8 [i_6 - 1] [i_0])))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)45443)) ? (var_9) : (arr_9 [i_0] [i_6 + 1]))) | (((((/* implicit */_Bool) arr_9 [i_0] [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_1)))));
                        arr_27 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) && (((/* implicit */_Bool) (unsigned char)127))));
                        var_19 = ((/* implicit */unsigned short) (short)-32753);
                    }
                    for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_31 [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20093)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18ULL)))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)91))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_0))))) : (var_0)));
                        var_20 = ((((/* implicit */_Bool) max(((-(1973022351307950403LL))), (((/* implicit */long long int) arr_22 [i_0] [i_1] [(unsigned char)21]))))) ? (min(((-(var_1))), (arr_12 [i_0] [0ULL] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)157)) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_0] [(unsigned char)1] [i_6] [(unsigned char)1] [(_Bool)1] [i_6])) : (((/* implicit */int) var_3))))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        arr_35 [i_9] [i_9] [i_9] [i_0] &= ((/* implicit */int) (unsigned char)157);
                        arr_36 [i_0] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_6] [i_0] [i_0]);
                    }
                }
                /* LoopSeq 2 */
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                {
                    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 65504LL)) ? (((/* implicit */int) (unsigned short)20096)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_10] [i_10] [i_1] [i_1])))) < (((/* implicit */int) var_8)))))));
                    var_22 -= ((((/* implicit */_Bool) min((arr_3 [(_Bool)1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned short)4] [i_10] [i_10])) ? (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) ((arr_30 [i_0] [i_0] [(signed char)2] [i_0] [(signed char)2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
                }
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                {
                    var_23 ^= ((/* implicit */unsigned char) (unsigned short)20093);
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_1] [i_11] [i_1]))));
                    arr_43 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65535);
                    arr_44 [i_0] [16LL] [i_11] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [2U] [i_11])) ? (2145630638301476504ULL) : (((var_0) + (arr_30 [i_11] [i_11] [10ULL] [i_1] [i_0])))));
                    var_25 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) / (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))))));
                }
                var_26 = arr_41 [i_0];
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_12])) && (((/* implicit */_Bool) var_9)))))));
                    var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_0), (((/* implicit */unsigned long long int) arr_14 [i_0] [4LL] [i_0] [i_0] [i_0] [(unsigned short)12])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) * (arr_23 [i_0])))));
                    arr_47 [i_12] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_14 [0LL] [(_Bool)1] [i_12] [i_0] [i_0] [9U])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_10)) : (6628743316214010838ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3040065833568338167ULL)) ? (((/* implicit */int) arr_6 [(short)22] [(short)22] [i_12])) : (((/* implicit */int) (short)-2306))))))));
                    var_29 = ((/* implicit */int) arr_21 [i_1] [i_1] [i_12] [i_12]);
                }
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    arr_52 [i_0] [i_0] [(_Bool)1] [i_0] |= ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_28 [i_13] [i_13] [(unsigned short)20] [(unsigned short)20] [i_0] [i_0])) && (((/* implicit */_Bool) (short)32698))))));
                    var_30 = ((/* implicit */unsigned short) 956872197U);
                }
            }
        } 
    } 
}
