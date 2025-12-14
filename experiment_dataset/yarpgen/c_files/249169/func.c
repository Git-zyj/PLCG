/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249169
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
    var_14 ^= ((/* implicit */int) var_9);
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3ULL))))), ((~((~(18446744073709551612ULL)))))));
    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(18446744073709551612ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-70))))) : (((((/* implicit */unsigned long long int) var_8)) ^ (18446744073709551610ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2105796856U)) ? (((/* implicit */int) ((signed char) var_0))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))) : (var_5)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 -= ((/* implicit */signed char) (~(((/* implicit */int) (((~(((/* implicit */int) arr_1 [(signed char)0])))) != (((/* implicit */int) (signed char)-4)))))));
                var_18 = ((/* implicit */_Bool) arr_2 [i_1]);
                arr_6 [i_0] = ((/* implicit */short) 18446744073709551604ULL);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 2]))) ^ (3ULL))))))));
                            arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_2 - 3])), (arr_0 [i_2 - 2])))) ? (((/* implicit */int) ((arr_4 [i_2 - 2]) >= (arr_4 [i_2 - 1])))) : (max((arr_0 [i_2 - 4]), (arr_0 [i_2 + 1])))));
                            var_20 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551604ULL))))) >> (((((-3156933936422337637LL) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) + (3156933936422327388LL)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_0 + 1]))));
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 22; i_6 += 4) 
                        {
                            var_22 *= ((/* implicit */signed char) arr_0 [i_0 - 2]);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_5] [8])) ? (((/* implicit */unsigned int) -423647697)) : (3990355268U)))))));
                            arr_21 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) 304612027U));
                            var_24 = ((/* implicit */short) min((var_24), (arr_2 [i_0 + 1])));
                            arr_22 [i_0] [i_1] [i_4] = ((/* implicit */int) (((((~(0LL))) + (9223372036854775807LL))) << (((((-7542815821335891492LL) + (7542815821335891540LL))) - (48LL)))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 3) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_1] [i_1 - 1] = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) 3990355264U)))))) : (min((arr_11 [i_7] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_10 [10LL] [i_1] [10LL] [i_1])))))) % (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)11]))));
                        var_25 ^= ((/* implicit */unsigned char) (+(max((arr_19 [i_0 - 1] [i_1 - 1] [i_7 - 1] [i_1 - 1] [i_0 - 1]), (((/* implicit */unsigned int) arr_5 [i_1 + 2]))))));
                        arr_27 [i_0] [(_Bool)1] [i_4] [i_4] [i_4] [i_4] = arr_17 [18U] [i_7] [i_4] [i_7] [7ULL] [i_1];
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 2; i_9 < 22; i_9 += 2) 
                        {
                            arr_33 [i_8] [i_8] [i_0] [12ULL] [i_9 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 304612016U)) - (-443550411045448864LL)))) * (2ULL)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_4]))) != (arr_3 [i_0 - 2] [i_0])))), ((-(arr_15 [i_9] [i_9] [i_9]))))) : (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) != (443550411045448863LL))))));
                            var_26 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                            var_27 *= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_24 [i_1] [i_1 - 1] [i_1 + 2] [i_1])) ? (arr_32 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1 + 2]) : (arr_32 [i_1] [i_1] [i_1 - 1] [22LL] [i_1 + 2] [i_1 - 1] [i_1 - 1])))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) (-(((arr_29 [i_10] [i_8] [(short)11] [(short)11]) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_25 [i_0] [i_1 - 1] [i_1 - 1] [i_4] [i_10])), ((unsigned char)207)))) : (((/* implicit */int) min((arr_35 [(short)12] [i_0] [i_4] [i_8] [i_10] [9ULL]), ((short)-5997))))))));
                            arr_37 [i_10] [i_8] [i_0] [i_0] [i_0] [i_0] = (-(((/* implicit */int) arr_1 [i_0])));
                            var_29 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((signed char) arr_20 [i_4] [i_4] [i_4] [i_4] [(unsigned char)17] [i_4] [i_4]))), (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [(_Bool)1])))))) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_10 [i_10] [i_0] [i_1] [i_0]))))), (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))) : (18446744073709551605ULL))))) - (18446744073422514958ULL)))));
                        }
                        arr_38 [i_0] [i_1] [(_Bool)1] [i_0] [i_8 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (((-(3ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [18LL] [i_4] [i_8])))))) | (((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))));
                        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)25912))))), (((((/* implicit */_Bool) (unsigned char)65)) ? (3827730009U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0]))))))))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((18098213834494270528ULL) >> (((511U) - (472U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)928))) * (arr_19 [i_0] [i_1] [i_1] [i_4] [i_11])))) : ((~(15441769344045826559ULL))))) >> (((arr_11 [i_0 - 2] [i_1 + 1] [i_1 + 2] [i_11 + 1]) - (797834721U))))))));
                        var_32 |= ((/* implicit */unsigned long long int) ((arr_36 [i_0 - 1] [i_11] [i_4] [i_0 - 1] [i_11] [16U]) ? (((((/* implicit */_Bool) (+(arr_12 [i_0 + 1] [i_1] [i_4] [i_4] [i_1] [i_11])))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [(unsigned char)22] [i_4] [i_4] [(unsigned char)22])) ? (((/* implicit */long long int) arr_40 [i_0] [i_1] [i_4] [(short)22])) : (arr_12 [i_11] [i_11 - 1] [i_0] [i_1 + 2] [i_1] [i_0]))) : (((/* implicit */long long int) (-(4288101708U)))))) : (((/* implicit */long long int) arr_0 [i_0]))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned int) (_Bool)1);
                            var_34 = ((/* implicit */_Bool) (short)-25915);
                        }
                    }
                }
                for (long long int i_13 = 2; i_13 < 23; i_13 += 3) 
                {
                    arr_48 [i_0] [i_0] [i_1 + 1] [i_1] = ((/* implicit */short) ((((((/* implicit */long long int) arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 1] [13LL])) == (((((/* implicit */_Bool) arr_15 [i_0] [(_Bool)1] [i_13 - 2])) ? (7542815821335891484LL) : (((/* implicit */long long int) arr_47 [i_0 + 3] [i_1] [i_13 + 1])))))) ? (-4LL) : (((/* implicit */long long int) 6865572U))));
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        for (short i_15 = 2; i_15 < 20; i_15 += 2) 
                        {
                            {
                                arr_57 [i_13] [i_1 + 2] [i_13] [i_0] [i_15] [i_15] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((1964409855U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [18U] [i_0] [i_13] [12] [i_13] [i_15]))))) ? (((((/* implicit */_Bool) 469851047U)) ? (((/* implicit */int) arr_18 [i_15 + 1] [i_0] [i_0] [i_1])) : (((/* implicit */int) (signed char)-77)))) : (((/* implicit */int) arr_46 [i_0] [i_1 + 1] [i_14 + 1] [17U])))));
                                var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_15] [i_13 - 2] [i_13 - 2] [i_0])) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) arr_34 [i_15] [15ULL] [i_13 + 1] [i_1] [i_0 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_0] [i_1 + 1] [i_15 - 2] [i_14])) ? (((/* implicit */int) (short)-5997)) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_0]))))) : (arr_7 [i_0] [i_0]))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0])))))));
                                var_36 *= ((/* implicit */unsigned int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_13] [i_1] [i_13] [i_15 + 1])))))))));
                                var_37 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) arr_30 [i_0] [i_13] [i_13] [i_0])) || (((/* implicit */_Bool) 4294967284U)))), (arr_39 [14ULL] [i_15] [i_1 + 1] [i_14] [i_15] [(short)0]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_7 [i_15] [i_1 + 1])))) & (12U)))));
                                var_38 *= ((/* implicit */long long int) ((((/* implicit */int) (short)-22058)) < ((-(((/* implicit */int) (signed char)36))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_16 = 1; i_16 < 23; i_16 += 1) /* same iter space */
                    {
                        arr_60 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_16 + 1] [i_13] [i_0] [i_1 + 1] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 511U)) ? (arr_12 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0 + 3]) : (((/* implicit */long long int) arr_20 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))))));
                        arr_61 [i_0] [i_0] [i_13 - 2] [i_0] [i_13] [i_13] = ((/* implicit */short) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 3]);
                        arr_62 [i_0] [(unsigned char)6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_54 [i_1 - 1] [i_16] [i_1 - 1] [i_1 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1] [i_1 + 1] [i_1 + 1] [i_1]))) : (arr_54 [i_13] [i_13 - 2] [i_1 + 2] [i_1] [i_0 + 3])));
                        var_39 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_56 [i_16] [i_13 + 1] [i_13] [i_0] [i_0])))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 + 1] [i_1] [i_13] [i_1]))) == (18446744073709551605ULL))))));
                    }
                    for (short i_17 = 1; i_17 < 23; i_17 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_43 [(signed char)8] [(_Bool)0] [i_0] [i_1 + 2] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_1 + 1] [i_1 + 1] [i_1] [(short)12] [i_1] [i_1]))) : (arr_54 [i_17] [(unsigned char)22] [i_13] [i_1 + 2] [i_0])))))) ? (10ULL) : (((/* implicit */unsigned long long int) ((arr_47 [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13)))))))))));
                        var_41 = ((/* implicit */short) arr_18 [i_0 + 2] [i_0] [i_0] [i_13]);
                        var_42 -= ((/* implicit */unsigned char) (~(arr_55 [i_0])));
                    }
                }
            }
        } 
    } 
    var_43 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(var_8)))) ? (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (6865572U)))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_2), (((/* implicit */short) var_1))))), ((~(((/* implicit */int) (signed char)107)))))))));
}
