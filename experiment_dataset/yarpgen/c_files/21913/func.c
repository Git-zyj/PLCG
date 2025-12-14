/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21913
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
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2])) & (((/* implicit */int) arr_4 [(unsigned short)4] [i_2 + 1] [i_2 - 3])))));
                    arr_7 [i_0] = ((/* implicit */short) ((signed char) ((unsigned short) arr_4 [i_2 + 1] [i_2 + 3] [i_2 + 3])));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_18 += ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_3])) ? (arr_11 [5LL] [5LL] [i_2 + 2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_9 [i_1] [i_3] [i_4])))))) == ((~(arr_2 [i_4]))))))) : ((+(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_2 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-15298)))))))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483631)) && (((/* implicit */_Bool) 2252983763885381254ULL))))) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])) : ((-((-(281474976710655ULL)))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned short) (short)-1587)))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((long long int) arr_5 [i_0] [i_1]))))) ? (((/* implicit */int) arr_9 [i_4] [i_1] [i_1])) : (min((((((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)1])) ^ (((/* implicit */int) var_13)))), (((/* implicit */int) ((signed char) var_16)))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_5]))) : (arr_5 [i_0 - 1] [i_0 - 1])))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_11 [i_0] [i_2] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_3] [i_5]))))))), (((/* implicit */long long int) arr_5 [i_0] [i_5]))));
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_2] [i_2 - 3]) ^ (arr_11 [i_0] [i_3] [i_2] [i_2 + 3]))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */short) var_1);
                            var_25 = ((/* implicit */long long int) max((min((arr_19 [i_0] [i_6] [i_2 - 1] [i_6] [i_0]), (arr_19 [i_0] [i_1 + 1] [i_2] [i_6] [i_6]))), (min((arr_19 [i_1] [(short)8] [i_2 - 1] [i_6] [i_6]), (arr_19 [i_0 - 3] [i_0 - 3] [i_3] [i_6] [i_6])))));
                            var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) arr_15 [i_0 - 1] [i_0 + 1] [i_2] [i_2] [i_2] [i_2 + 2] [i_6]))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_0] [i_1 - 1] [i_2] [i_3] [i_6]))))), (((unsigned long long int) arr_4 [i_0] [i_0] [i_6]))))));
                        }
                        arr_20 [i_0 - 2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))));
                    }
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            arr_28 [i_0] [i_7] [i_8] = ((/* implicit */short) arr_0 [i_0] [i_0 - 2]);
                            arr_29 [i_0 - 2] [i_1] [i_2 - 1] [i_7] [i_8] = ((/* implicit */unsigned short) ((min((var_12), (((/* implicit */unsigned long long int) arr_21 [i_0 - 4] [i_1 - 1] [i_0 - 1] [i_0] [i_2 + 1])))) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_16 [i_0] [i_0 - 3] [i_0] [i_1 - 1] [i_1])), ((~(var_9))))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned int) arr_19 [i_8] [i_7] [i_2] [i_7] [i_0])))))));
                        }
                        for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_0 - 1])) ? (arr_0 [i_2 - 1] [i_0 - 3]) : (arr_0 [i_2 - 2] [i_0 - 3]))), (((/* implicit */int) arr_23 [i_0] [i_1] [(short)6]))));
                            arr_32 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_9])) ? (((/* implicit */int) arr_4 [i_0 - 4] [i_1 - 1] [i_7])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_2 + 2]))))) ? (((/* implicit */int) max((arr_4 [i_2] [i_7] [(unsigned short)10]), (arr_4 [i_0 - 4] [(signed char)4] [i_0 - 4])))) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))));
                        }
                        var_29 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_7]))))) + (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2 - 2] [i_0])) ? (((/* implicit */int) arr_18 [i_1] [1LL] [i_1])) : (((/* implicit */int) var_17))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [i_0 - 4] [i_2 - 2])) / (arr_2 [i_0])))) ? (min((arr_22 [i_0] [i_0] [i_0] [i_0]), (var_12))) : (((/* implicit */unsigned long long int) ((arr_5 [i_0 - 4] [i_7]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2 - 2] [i_2 - 2])))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 2] [i_0])) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_13 [i_0] [7LL] [i_2] [i_7] [i_7] [i_7])) : (arr_11 [(unsigned short)4] [i_1] [i_1] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_2] [i_2]))))))));
                    }
                    arr_33 [i_2] [i_1 - 1] [i_0 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) min((arr_5 [i_0 - 4] [i_0 - 4]), (((/* implicit */unsigned int) var_15)))))) ? ((~(((((/* implicit */_Bool) arr_13 [i_2] [(short)3] [i_1] [(short)3] [(short)3] [(short)3])) ? (((/* implicit */int) var_11)) : (var_16))))) : (((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned short) min((min((((((var_2) + (9223372036854775807LL))) >> (((((/* implicit */int) var_13)) - (45))))), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 2) 
        {
            for (signed char i_12 = 3; i_12 < 17; i_12 += 3) 
            {
                {
                    arr_41 [i_10] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */long long int) arr_38 [i_12])) : (var_2)))) ? (((((/* implicit */_Bool) arr_38 [i_11])) ? (16ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11 + 1]))) % (arr_39 [i_10] [i_12])))))) ? (((((/* implicit */_Bool) arr_40 [i_12] [i_12] [i_12 - 3] [(short)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_34 [i_10])))) : (((unsigned long long int) arr_37 [i_11])))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10]))) : (arr_38 [i_10]))), (((/* implicit */unsigned int) arr_34 [i_10])))))));
                    var_31 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) (short)-1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32755))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */unsigned long long int) arr_37 [i_11 - 1])), ((-(arr_39 [i_11] [i_10]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-62))))));
                    var_32 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_38 [i_10])) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_40 [i_10] [i_11] [i_12] [i_11 - 1])))) + (2147483647))) >> (min((((unsigned int) arr_34 [i_10])), (((/* implicit */unsigned int) arr_36 [i_10]))))));
                }
            } 
        } 
    } 
}
