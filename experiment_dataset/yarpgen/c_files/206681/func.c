/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206681
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
    var_10 = ((/* implicit */unsigned int) max((var_10), ((-(min((var_6), (((/* implicit */unsigned int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_11 = (+(((unsigned int) (unsigned char)75)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_0))))));
                            arr_13 [i_0] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_2))));
                        }
                        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_13 ^= ((/* implicit */unsigned int) (~(((unsigned long long int) var_1))));
                            arr_16 [i_2] = arr_15 [1U] [i_3 - 1] [i_1] [i_3 - 1] [i_2] [i_1] [i_0];
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)180)) - (((/* implicit */int) (unsigned char)75))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [8ULL] [i_2]))))))))));
                        }
                        arr_17 [i_2] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [6LL] [i_2 - 2] [i_3 - 1] [i_3]))));
                        var_16 = (-(((unsigned int) var_3)));
                    }
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_21 [2LL] [11U] [2LL] [i_2] [12LL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)249), (((/* implicit */unsigned char) (signed char)16)))))) != (18001202703861854652ULL)));
                        var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) min((arr_6 [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) var_2))))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (var_7)))))), (((unsigned long long int) arr_18 [i_0] [i_1] [i_2 + 1] [i_2 - 2] [i_2]))));
                    }
                    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 78639345U))))) != (((/* implicit */int) ((min((((/* implicit */unsigned int) arr_10 [10U] [5ULL] [10U] [10U])), (var_6))) != (((/* implicit */unsigned int) var_8)))))));
                    var_19 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((int) var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)65535))))), (16596180564106007000ULL)))));
                                var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((~(4294967284U))) <= (min((var_6), (((/* implicit */unsigned int) var_1)))))))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), ((((+(((unsigned long long int) var_0)))) + (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) var_9)), (var_5))))))))));
                                arr_26 [i_0] [i_1] [(unsigned char)8] [i_2] [i_8] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)210)) / (((/* implicit */int) (unsigned char)156))));
                            }
                        } 
                    } 
                }
                for (int i_9 = 1; i_9 < 11; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        arr_34 [i_0] [i_1] [i_9] [i_10] = ((((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9 + 4]))))) ? (min((((/* implicit */long long int) arr_27 [i_10])), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_1])) <= (((/* implicit */int) var_2))))) >= (var_8))))));
                        arr_35 [i_1] [i_9] [i_1] [i_0] = ((/* implicit */unsigned char) min((min(((~(((/* implicit */int) var_9)))), (var_8))), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_6))))))));
                    }
                    for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        arr_39 [i_9 - 1] [i_1] [i_11] = ((/* implicit */long long int) max((((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_15 [i_0] [i_1] [i_0] [i_0] [8ULL] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_11] [i_1] [i_11] [i_11])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_9), (var_1)))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((max((var_6), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            arr_42 [i_12] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))))) * (((/* implicit */int) var_4))));
                            var_24 = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)180)))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38))) <= ((-(12U))))))));
                            var_25 = ((/* implicit */signed char) var_3);
                            arr_43 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((arr_29 [i_0] [i_0] [i_9] [i_11]), (((/* implicit */short) ((-893500984) > ((-(1042011174))))))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            var_26 = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) ((signed char) arr_36 [i_0] [i_1] [i_9] [i_11] [8U] [i_13]))))));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)24012), (((/* implicit */short) (signed char)64))))) ? (((/* implicit */unsigned long long int) 2170235382U)) : (((((/* implicit */unsigned long long int) -550005425)) / (3275786456020309935ULL)))));
                            arr_48 [i_13] [i_13] [i_11] [i_9] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((min((var_7), (((/* implicit */long long int) var_6)))) | (((/* implicit */long long int) (~(var_8)))))), (((/* implicit */long long int) min((var_6), ((~(var_6))))))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+(((((((/* implicit */_Bool) arr_40 [i_13] [(unsigned char)6] [i_1] [i_1] [i_0])) ? (var_7) : (var_7))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))))))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            var_28 *= (~(arr_7 [i_9 + 3] [i_1] [i_9] [i_9 + 1]));
                            var_29 = ((/* implicit */signed char) var_2);
                            arr_52 [i_0] [i_0] [0ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_1] [i_1] [i_9 + 2] [i_11] [i_1])) ? (arr_45 [4LL] [(unsigned short)13] [i_9 + 4] [i_9 + 2] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                            var_30 = ((/* implicit */unsigned short) ((arr_4 [i_9 + 2]) ? (((/* implicit */unsigned long long int) var_6)) : (arr_33 [i_9 + 2])));
                            var_31 += ((/* implicit */short) (~(((((/* implicit */int) var_9)) + (var_8)))));
                        }
                        var_32 = ((/* implicit */int) ((_Bool) (-2147483647 - 1)));
                    }
                    arr_53 [i_0] [i_9 + 3] = ((/* implicit */int) var_4);
                }
                /* vectorizable */
                for (int i_15 = 1; i_15 < 11; i_15 += 2) /* same iter space */
                {
                    arr_56 [i_0] [(unsigned short)5] [i_0] = ((/* implicit */int) (~(var_5)));
                    var_33 = ((/* implicit */long long int) (+(arr_7 [i_0] [i_0] [i_0] [i_0])));
                }
                var_34 = ((/* implicit */signed char) var_1);
            }
        } 
    } 
    var_35 |= ((var_5) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((signed char) var_4))))))));
    var_36 |= ((/* implicit */int) (+(var_7)));
}
