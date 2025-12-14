/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193640
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
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (-(((unsigned long long int) arr_5 [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (short)-23527)) : (var_9)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_0)) <= (-1))) ? (((/* implicit */int) ((_Bool) var_6))) : (-1718201862)))) : (((((/* implicit */_Bool) ((unsigned char) (signed char)-40))) ? (9223372036854775807LL) : (((/* implicit */long long int) min((arr_4 [i_0]), (((/* implicit */unsigned int) arr_10 [i_2] [i_0])))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [5U] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) min((arr_4 [i_0]), (((/* implicit */unsigned int) var_14))))))));
                            arr_14 [i_0 - 1] [i_0] = ((/* implicit */signed char) (unsigned short)65535);
                        }
                        for (signed char i_5 = 3; i_5 < 9; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_14)) ? (arr_12 [i_5] [i_5 - 3] [i_5] [i_5 + 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                            var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_8 [i_5 - 2] [i_0] [i_0] [1LL]))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [i_5] [i_0] [i_0] [i_1])))), (((/* implicit */int) var_17))));
                            var_23 += ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned short) var_7))))) >= (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_1 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                            var_24 -= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_8 [i_2] [4LL] [4LL] [i_1 + 3]))))));
                            arr_19 [i_0] [9] [i_2] [i_3] [i_2 + 2] = ((/* implicit */unsigned int) min((arr_18 [i_2 + 2] [i_2] [i_3] [i_3] [i_3]), ((+(arr_18 [i_2 - 2] [i_5] [i_5 - 3] [i_5 - 3] [8U])))));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_25 += ((((/* implicit */_Bool) ((arr_21 [i_0] [i_0 + 1] [i_0] [6U] [i_0 - 2]) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)117)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0 + 2] [i_1 + 1] [0U] [i_3 + 1])) & (((/* implicit */int) arr_9 [i_0 - 3] [i_1 + 3] [(short)4] [i_3 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_1] [10U] [i_3])) ? (((/* implicit */long long int) arr_2 [(unsigned short)10])) : (arr_21 [(signed char)2] [i_1] [(_Bool)1] [(short)4] [(short)4])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) - (arr_1 [i_0] [i_1]))) : (((6584071162095707787LL) + (arr_1 [i_0] [i_0]))))));
                            var_26 *= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_1 + 3] [i_1 + 3]) & (arr_1 [i_1 + 3] [i_1])))) ? (((arr_1 [i_1 + 3] [(_Bool)1]) % (arr_1 [i_1 + 3] [i_0 + 2]))) : (((arr_1 [i_1 + 3] [(unsigned char)7]) + (arr_1 [i_1 + 3] [i_1])))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            arr_26 [i_0] [(_Bool)1] [6ULL] [6ULL] [i_7] = ((/* implicit */short) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0])))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_18))) + (((((/* implicit */_Bool) var_12)) ? (arr_2 [i_7]) : (var_7)))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_7 - 1] |= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((arr_10 [i_2] [(_Bool)0]) + (2147483647))) >> (((arr_20 [(signed char)4] [i_1] [(signed char)4] [i_3] [i_7]) - (1721252029)))))) : (arr_15 [6] [i_3 - 1] [i_7 - 1] [10LL])));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */int) var_13);
                            arr_30 [i_0] [i_0 - 2] [i_1 + 3] [10] [i_0 - 2] [(_Bool)0] = ((/* implicit */unsigned char) arr_1 [i_0 - 3] [i_0]);
                        }
                        /* vectorizable */
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 1) 
                        {
                            var_29 = (+(arr_10 [i_1 + 2] [i_0]));
                            arr_35 [i_0] [i_1 - 1] [i_2] [i_0] [i_2] [i_3] [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) var_1))));
                            arr_36 [i_0] [(signed char)5] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = ((((/* implicit */_Bool) arr_28 [i_9] [i_9 + 1] [i_0])) ? (((/* implicit */int) arr_28 [7LL] [(signed char)10] [i_0])) : (((/* implicit */int) arr_8 [i_0 - 3] [5LL] [i_0] [i_0 + 1])));
                        }
                        var_30 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)10] [(signed char)0] [i_3])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_24 [(_Bool)0] [i_1] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20113)) ? (arr_4 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) || (((/* implicit */_Bool) max((arr_16 [i_3] [i_3] [i_2] [i_1 + 2] [i_1 + 1] [i_1 + 1]), (arr_16 [3LL] [i_3] [(short)0] [i_1 + 3] [i_1] [i_1]))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */signed char) arr_18 [i_1] [4] [i_0] [i_0] [i_0]);
            arr_37 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned int) var_0))), (arr_15 [i_0] [i_1] [(_Bool)1] [i_0])));
            var_32 = ((/* implicit */long long int) ((max((arr_18 [i_0] [i_1 + 1] [(signed char)2] [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) var_13)))) + (((/* implicit */unsigned long long int) ((long long int) arr_18 [i_0] [i_1 - 1] [i_1] [i_1 + 4] [i_0 - 1])))));
        }
        var_33 = ((((_Bool) ((arr_34 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [6LL] [i_0 - 2])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) ((_Bool) (((_Bool)0) ? (-1LL) : (((/* implicit */long long int) var_8)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_28 [(unsigned char)0] [i_0 - 3] [i_0])), ((unsigned short)64337)))));
        var_34 += ((/* implicit */_Bool) ((((/* implicit */long long int) min((var_8), (var_9)))) - (((((((/* implicit */_Bool) var_9)) ? (arr_21 [i_0] [i_0 + 1] [10] [8LL] [i_0]) : (((/* implicit */long long int) var_6)))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0]))))))));
        arr_38 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8580402141098632051LL)) ? (((/* implicit */int) max((arr_16 [(_Bool)0] [i_0] [i_0 + 1] [(short)8] [i_0] [3]), (arr_16 [i_0] [i_0 + 1] [i_0 - 3] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((unsigned short) arr_33 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 2])))));
    }
    var_35 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_16))))) ? (((/* implicit */int) var_0)) : (var_7))), (((/* implicit */int) var_1))));
    var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(var_5))), (((/* implicit */int) var_2))))) ? (147287972U) : (((/* implicit */unsigned int) var_15))));
}
