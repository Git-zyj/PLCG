/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190600
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_14 *= var_0;
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) 2147483640)), (arr_3 [i_0] [i_0])));
            arr_5 [i_1] = ((/* implicit */unsigned char) (unsigned short)8064);
            arr_6 [i_1] = ((/* implicit */short) arr_3 [i_1] [i_0]);
        }
        for (signed char i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (short)1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) var_0)))))) : (arr_9 [i_0] [i_0] [i_2 - 2]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) * (296270101U))))));
            arr_10 [(unsigned short)5] [i_0] [(unsigned short)5] = ((/* implicit */long long int) ((unsigned long long int) (signed char)-5));
            var_16 += ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) (signed char)-1))))), (min((((/* implicit */unsigned long long int) arr_1 [i_2 - 1])), (arr_9 [i_0] [i_0] [i_0]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)1)))))));
            var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((max((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)63))), ((unsigned char)51))))));
            var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [(short)3] [i_2 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_2 [i_0] [i_2 - 1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2 - 1])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (arr_2 [i_0] [i_2] [i_2])))) : (var_1))))));
        }
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [5U] [i_0])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) min((max(((short)(-32767 - 1)), (((/* implicit */short) (signed char)77)))), (((/* implicit */short) (signed char)1)))))));
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_7 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_9 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-21)), (2147483647))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])) * (max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) == (arr_0 [i_0] [i_0]))))))));
    }
    var_21 = ((/* implicit */short) min((((/* implicit */int) min(((_Bool)1), (((((/* implicit */_Bool) -8795006052198682306LL)) && (((/* implicit */_Bool) (short)(-32767 - 1)))))))), (min((((/* implicit */int) var_10)), (((var_4) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))));
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(9223372036854775801LL))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    arr_18 [3LL] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min(((signed char)-101), ((signed char)-19)))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3])) == (((/* implicit */int) var_12)))))));
                    arr_19 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) min((((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (19258155U))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) min((var_0), (((/* implicit */short) var_10))))) >= (((/* implicit */int) arr_16 [i_3] [i_4] [i_5])))))));
                    var_23 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (signed char)1)), (2573527484U))), (((/* implicit */unsigned int) arr_14 [i_4 + 2] [i_4 - 1] [i_3]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 3; i_6 < 17; i_6 += 1) 
                    {
                        arr_22 [i_3] [i_3] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) ((((min((var_11), (((/* implicit */unsigned long long int) var_2)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (4275709140U) : (((/* implicit */unsigned int) 2147483647))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */_Bool) arr_16 [i_6] [(signed char)11] [i_4])) || (((/* implicit */_Bool) arr_17 [i_6] [i_3])))), (((((/* implicit */_Bool) (unsigned char)112)) && (((/* implicit */_Bool) (short)1)))))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)4032))) * (((((/* implicit */_Bool) 7385210965609270018ULL)) ? (((/* implicit */long long int) var_5)) : (arr_21 [i_3] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4])))))));
                        var_24 = min((((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)-28))) == (min((arr_20 [i_3] [i_3] [i_3]), (arr_20 [i_6] [i_6] [(unsigned short)0])))))), (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)-20057)) : (((/* implicit */int) min(((short)32767), (((/* implicit */short) (signed char)-28))))))));
                        arr_23 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) var_7)), (var_5)));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) 4275709141U))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        arr_27 [i_5] [i_4] [i_5] [(short)2] [i_5] &= ((/* implicit */signed char) arr_16 [i_7] [i_7] [i_4 + 2]);
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_7))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_31 [i_3] [i_3] [i_5] [i_3] [i_5] [i_5] = ((max((((((/* implicit */long long int) 130560U)) / (arr_13 [i_3]))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_8))))) + (((/* implicit */long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_3] [(short)4] [i_3])) : (((/* implicit */int) arr_14 [i_5] [i_7] [i_3])))), (var_5)))));
                            var_27 += ((/* implicit */_Bool) (-(130546U)));
                            var_28 = ((/* implicit */signed char) ((((arr_20 [i_3] [i_3] [i_5]) == (((/* implicit */int) var_13)))) ? (max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_26 [i_4] [i_3] [i_4] [i_7] [i_7])), (130560U)))), (arr_28 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4] [i_4 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 71494644084506624LL)) >= (((((/* implicit */_Bool) arr_15 [i_4] [i_7] [i_3])) ? (((/* implicit */unsigned long long int) 389024119U)) : (arr_30 [i_3] [i_7] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_3])))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            arr_36 [i_3] [i_3] [(signed char)18] [i_3] = ((/* implicit */long long int) ((max((((/* implicit */long long int) 4275709141U)), (arr_25 [i_3]))) == (min((arr_25 [i_3]), (((/* implicit */long long int) arr_33 [i_4 + 4] [i_4 + 3] [i_4 + 4] [i_4 + 4] [i_4 - 2] [i_4 + 4]))))));
                            arr_37 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (-652535697334246995LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) && (var_4)))), (arr_25 [i_3])));
                            arr_38 [i_5] [i_3] [i_5] [i_7] [0LL] = ((/* implicit */_Bool) min((((((/* implicit */int) (signed char)62)) * (((/* implicit */int) ((((/* implicit */int) (signed char)62)) == (((/* implicit */int) (unsigned char)43))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (short)-12568))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && ((_Bool)1)))) : (((/* implicit */int) var_4))))));
                        }
                        arr_39 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_10);
                        var_29 = ((/* implicit */short) max((((/* implicit */unsigned int) (signed char)-2)), (1831136278U)));
                    }
                    /* LoopNest 2 */
                    for (signed char i_10 = 4; i_10 < 17; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            {
                                var_30 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10 - 2] [i_10 - 2] [i_10 - 3] [i_10 - 2] [(unsigned char)0] [i_3])) ? (((/* implicit */int) arr_16 [i_3] [i_3] [i_5])) : (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (var_13))))))));
                                var_31 += min((min((((/* implicit */long long int) min((((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5])), (var_5)))), (arr_13 [i_5]))), (var_8));
                                arr_45 [i_3] [i_4 + 1] [i_3] [i_5] [i_10] [i_3] [i_11] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), (var_10)))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_2), (((/* implicit */short) arr_32 [i_5] [i_4] [i_5] [i_10] [i_11]))))) : (min((var_6), (((/* implicit */int) arr_32 [i_3] [i_3] [(signed char)11] [i_10] [i_10]))))))));
                                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), (min((var_7), (arr_14 [i_5] [i_4] [i_11])))))))))));
                                arr_46 [i_11] &= ((/* implicit */long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) ((((/* implicit */int) arr_35 [i_3] [i_3] [i_5] [i_10 + 1] [i_11] [i_5])) == (2147483647))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
