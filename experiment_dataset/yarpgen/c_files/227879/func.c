/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227879
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
    var_12 = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1181918287U))))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))));
    var_13 = ((/* implicit */int) min((var_10), ((~(((((/* implicit */_Bool) (unsigned char)73)) ? (1293784142U) : (3001183135U)))))));
    var_14 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(unsigned char)17] [i_1] = ((/* implicit */int) max(((+(((((/* implicit */_Bool) arr_3 [i_0] [(signed char)13])) ? (1913255065005954997ULL) : (((/* implicit */unsigned long long int) 1293784161U)))))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) (signed char)54)), (-4111298063769922179LL))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) min((max((arr_3 [i_1 - 1] [i_1]), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 3])))))));
                            var_16 = ((/* implicit */unsigned long long int) min((-1394455689), (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_1 - 2] [i_1])) <= (((((((/* implicit */int) (signed char)-87)) + (2147483647))) >> (((/* implicit */int) var_5)))))))));
                            arr_11 [16ULL] [i_1] [10U] [(unsigned short)7] = ((/* implicit */unsigned int) arr_2 [i_1 - 3]);
                            arr_12 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4))) - (min((((/* implicit */unsigned int) (signed char)-121)), (658476572U))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    arr_15 [i_1] [i_1 - 4] [11LL] [8] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1] [8U])) ? (var_1) : (((/* implicit */int) var_0)))) >= (((/* implicit */int) ((unsigned char) arr_0 [i_4] [i_0])))))) >= (((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_0)))) : ((+(((/* implicit */int) (signed char)-127))))))));
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_14 [i_0] [i_1] [i_0])))) ? (arr_8 [i_0] [i_1 - 4]) : (((/* implicit */int) arr_0 [i_1 - 4] [i_1 - 3]))))) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_0])) : (max(((+(((/* implicit */int) (unsigned char)126)))), (((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 2])))));
                }
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    var_18 = (-(3001183153U));
                    var_19 = ((/* implicit */int) ((unsigned char) var_11));
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1]))))));
                }
                for (unsigned short i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                arr_28 [i_1] [i_1] [i_1] [i_6 + 1] [i_7] [i_7] [i_8] = max((arr_9 [i_0] [i_1 - 2] [i_6 - 2] [i_6 + 2]), (min((((/* implicit */int) var_0)), (arr_1 [i_1 - 3]))));
                                var_21 = ((/* implicit */signed char) min((max((9637324884725228149ULL), (((/* implicit */unsigned long long int) (signed char)-116)))), (((/* implicit */unsigned long long int) (~(arr_21 [i_1 - 1] [i_6 + 2] [i_6 - 2]))))));
                                var_22 = ((/* implicit */unsigned long long int) arr_21 [i_6] [i_1 - 1] [i_6 - 2]);
                                var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) min((var_0), (var_9))))), (min((((17944879297068241319ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63154))))), (((/* implicit */unsigned long long int) min((arr_9 [(short)3] [i_1] [i_6] [i_6]), (var_1))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        arr_33 [i_1] [i_1] [i_6] [i_9] = arr_0 [i_0] [i_0];
                        var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 2])) <= (((/* implicit */int) arr_2 [i_1 + 1])))))) >= (((((arr_24 [i_9] [(unsigned char)5] [i_9] [i_9]) * (arr_21 [14U] [17] [i_9]))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_6] [i_0])) ? (((/* implicit */int) (unsigned short)43292)) : (((/* implicit */int) (unsigned short)19932)))))))));
                    }
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */int) arr_0 [i_0] [i_1 - 4]);
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_30 [i_1] [i_1 - 2] [i_1 - 4])) % (arr_31 [i_1 - 2] [i_6 + 2] [6] [i_6] [i_6] [i_6 - 3]))) >= ((-(((/* implicit */int) arr_19 [i_1] [i_6 - 3] [i_6] [i_6]))))));
                    }
                    var_27 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (unsigned char)45)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned int) (signed char)121)))) != (((/* implicit */unsigned int) 2147483647))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) max((((/* implicit */int) var_5)), (arr_1 [i_0]))))) != (((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 16; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            {
                                arr_43 [i_0] [i_1 - 4] [i_1] [i_11 + 1] [15] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_37 [6] [6] [i_1]) : (((arr_8 [i_11 - 1] [12]) >> (((((/* implicit */int) var_6)) - (30539)))))))), (((unsigned long long int) ((var_8) > (((/* implicit */int) var_0)))))));
                                arr_44 [i_1] = ((/* implicit */signed char) min(((((+(((/* implicit */int) arr_3 [(signed char)15] [i_1 - 3])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60804))))))), (((/* implicit */int) var_7))));
                                var_29 = ((/* implicit */unsigned char) (short)-1);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (signed char i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            {
                                arr_53 [i_0] [i_1] [i_13] = ((/* implicit */long long int) min((1293784154U), (((/* implicit */unsigned int) (signed char)116))));
                                arr_54 [i_1] [i_1] [i_14] [i_15] = ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (unsigned short)60804)))) ? (((((/* implicit */int) var_0)) >> (((arr_23 [i_0] [i_1] [i_13]) - (949638117082751918ULL))))) : (((var_5) ? (((/* implicit */int) arr_26 [i_1] [i_1] [13] [2LL] [i_15])) : (((/* implicit */int) var_5)))))));
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116))))) : (((/* implicit */int) min((((var_3) >= (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_17 [i_0] [i_1])) && (((/* implicit */_Bool) var_7)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
