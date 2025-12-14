/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219422
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
    var_20 = ((/* implicit */short) (~(((4869146215395547501LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_7 [i_0] [i_1 + 1] [i_2]) != (var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_19))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_7 [i_2] [i_2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [(unsigned char)8])) : (((/* implicit */int) var_10)))))))))));
                    arr_8 [i_0] [(_Bool)1] = ((unsigned int) max((var_14), (var_14)));
                }
                for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (short i_5 = 3; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)107))));
                                arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 2] [(short)7])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_13))), (((/* implicit */long long int) (-(var_16))))));
                                arr_17 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned char)5] [i_0] [i_0])) ? (arr_9 [i_4] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [4ULL])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)110)))))))));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */signed char) arr_5 [4] [4]);
                }
                for (unsigned char i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    arr_21 [i_0] [i_0] = var_0;
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_8]);
                                arr_28 [i_0] [i_1] [i_0] [i_6 + 1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_26 [(signed char)0] [i_1 + 2] [i_6 - 1] [i_7] [i_8])) : (((/* implicit */int) arr_6 [i_0] [i_6 - 1] [i_0] [i_8]))))))))));
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)10] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */long long int) var_16)) / (var_5))) >= (((/* implicit */long long int) max((((/* implicit */int) var_2)), (511)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 10; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((_Bool) max((arr_19 [i_1 + 2] [i_6 + 1] [i_9 + 1]), (arr_31 [i_9 + 4] [6LL] [6LL] [i_6 + 1])))))));
                                var_26 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_6 + 1] [i_6] [2ULL] [(short)11] [i_1 - 1])))))));
                                arr_36 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) arr_6 [i_9 + 2] [i_0] [i_0] [i_1 + 2]))))) % (max((((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_0] [i_1 + 1] [i_6] [i_9 - 1] [i_10]))))), (var_5)))));
                                var_27 = ((/* implicit */_Bool) (-(min((arr_25 [i_6] [i_6] [i_0] [i_10] [i_10]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) max((min((arr_18 [i_1 + 2] [i_0] [i_6 + 1]), (((/* implicit */short) var_6)))), (min((arr_18 [i_1 - 1] [i_0] [i_6 + 1]), (arr_18 [i_1 - 1] [i_0] [i_6 - 1])))));
                }
                for (int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_22 [i_1 + 2] [i_1 + 2] [i_1 + 2])), ((~(arr_7 [i_0] [i_1 + 2] [i_0])))))) ? ((((_Bool)1) ? (703609254U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26426))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_37 [i_0] [i_1] [i_1 - 1] [9]), (((/* implicit */short) var_15))))) ? (((((/* implicit */int) var_6)) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_1 - 1])))))))));
                    var_30 += ((/* implicit */unsigned char) min((((var_10) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)30), (var_15))))) : (min((var_3), (((/* implicit */long long int) var_16)))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_20 [(short)8] [i_11] [(unsigned char)0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_7)))))))));
                }
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_13))));
                    arr_41 [i_0] [i_1] [i_12] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_34 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_34 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) ? ((((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_1 + 1])) ? (arr_14 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_12] [i_12] [i_0] [i_12]))))) : (arr_14 [i_0] [i_12] [i_12]))) : (((((min((((/* implicit */long long int) var_14)), (arr_25 [i_12] [(short)0] [i_0] [i_0] [i_0]))) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_11 [i_0] [i_0])) + (((/* implicit */int) var_18)))) + (17803))) - (1)))))));
                }
                arr_42 [i_0] [i_1 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (unsigned char)219)))))));
            }
        } 
    } 
    var_32 = ((/* implicit */short) var_8);
}
