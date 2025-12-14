/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232026
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned short) min(((((~(((/* implicit */int) arr_0 [i_0] [6ULL])))) * (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_1))))))), (((/* implicit */int) arr_0 [i_0] [(unsigned short)4]))));
        var_21 &= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) << (((/* implicit */int) ((15257831656827972600ULL) <= (((/* implicit */unsigned long long int) 2111717939U)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) max((max((min((((/* implicit */unsigned int) var_3)), (2183249356U))), (((/* implicit */unsigned int) ((arr_1 [i_0]) != (arr_1 [i_0])))))), (((/* implicit */unsigned int) arr_1 [(signed char)1]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1] [4])) >> ((((-(((/* implicit */int) (signed char)31)))) + (36)))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) arr_4 [10U]);
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [6U] [6U]))))) ? (max((((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_6 [i_1]))), (((arr_6 [i_1]) % (var_19))))) : (((/* implicit */unsigned int) ((int) max((0ULL), (var_4)))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_5 + 1] [i_5 + 1] [i_6])) == (((/* implicit */int) arr_14 [i_2 - 1] [i_2] [i_2] [i_2] [i_5]))))), (arr_14 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5 + 2])));
                            var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((short) arr_2 [i_6]))))) && ((!(((/* implicit */_Bool) (short)(-32767 - 1)))))));
                        }
                        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            arr_23 [i_5] [i_2] [i_3] [i_5] [i_3] [i_7] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 1]))))), (min((9097912830966376199ULL), (((/* implicit */unsigned long long int) var_14))))));
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_7]) << ((((+(arr_9 [i_1] [i_5] [9ULL]))) - (1950565409U))))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 10; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_9 [i_5 + 3] [i_5] [i_5])) ? (((/* implicit */int) arr_12 [i_5 + 3])) : (((/* implicit */int) arr_2 [i_8]))))));
                            var_27 = arr_5 [i_1];
                        }
                    }
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        var_28 &= ((/* implicit */short) ((int) arr_0 [i_2 - 1] [10ULL]));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_29 += ((/* implicit */unsigned short) (~(((/* implicit */int) arr_19 [i_2 - 1] [i_2 - 1] [8] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                            var_30 = ((/* implicit */unsigned short) ((int) arr_10 [i_2] [i_2 - 1] [(_Bool)1]));
                            var_31 = ((/* implicit */unsigned char) var_18);
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_9] [i_3] [2U])) ? (arr_28 [i_9]) : (((var_8) + (arr_18 [i_1] [i_2] [i_3] [(unsigned short)5] [i_9] [8LL] [i_10])))));
                        }
                        for (short i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned int) arr_1 [i_2 - 1]);
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1] [(signed char)2] [i_3] [i_9] [i_11])) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            var_35 = ((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                            var_36 = ((/* implicit */unsigned short) (!(((2111717942U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
                        }
                        var_37 = (~(((/* implicit */int) arr_24 [i_9] [i_3] [i_2])));
                    }
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_35 [i_1] [i_3] [i_3] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 6545519258236033978ULL)) && (((/* implicit */_Bool) (short)-32761))))) | (((/* implicit */int) ((short) arr_11 [i_2 - 1] [i_2 - 1] [i_2])))));
                        var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_27 [8])), (((((/* implicit */_Bool) arr_24 [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_12)))))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) ((_Bool) ((arr_28 [(short)4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_12] [i_3] [i_2] [7U])))))))));
                    }
                    arr_36 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 - 1])) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_12 [i_1]))))) ? (((arr_18 [i_1] [i_1] [i_1] [i_2 - 1] [i_3] [(short)0] [(unsigned char)9]) | (arr_18 [i_1] [i_2 - 1] [i_3] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3])))));
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551608ULL))))));
                    var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (+(((/* implicit */int) arr_27 [6ULL]))))))));
                }
            } 
        } 
        var_41 = var_14;
        var_42 = ((short) arr_26 [8U]);
    }
    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_15)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) - (1400079971U))) : (min((var_9), (((/* implicit */unsigned int) var_17))))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_5)))), (((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) var_14)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (var_4) : (((/* implicit */unsigned long long int) (-(var_12))))))));
    var_44 = ((/* implicit */int) var_7);
}
