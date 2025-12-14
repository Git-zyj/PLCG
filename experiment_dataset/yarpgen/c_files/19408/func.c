/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19408
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = min((((/* implicit */unsigned long long int) (+(arr_3 [i_1])))), (((((/* implicit */_Bool) (-(arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)86))))) : (arr_4 [i_0] [i_0] [i_0]))));
                var_15 -= ((/* implicit */unsigned short) (-(var_6)));
                var_16 |= ((/* implicit */signed char) arr_2 [i_1]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(((((((/* implicit */_Bool) 2270878194062267026LL)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (unsigned short)41809)))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) == (13120699813498206594ULL)))))))))));
        arr_8 [i_2] [i_2] &= 7299468552417515926ULL;
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_18 = arr_3 [i_3];
        var_19 *= ((/* implicit */signed char) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95)))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) 18446744073709551615ULL))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) || ((!(((/* implicit */_Bool) (unsigned short)42220))))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 8; i_4 += 2) 
        {
            var_22 *= ((/* implicit */short) ((((((/* implicit */int) (signed char)-79)) + (2147483647))) >> (((((unsigned int) (unsigned short)127)) - (123U)))));
            arr_15 [i_4] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_10 [i_3])))) ? (((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_13 [i_3] [i_4]) : (((/* implicit */long long int) arr_3 [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) == (arr_9 [i_3] [i_4])))))));
        }
        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) arr_0 [i_5]);
            arr_19 [i_3] [i_5] = (-(3965841345U));
            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -7560941435866404443LL))) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))))) ? ((~(((/* implicit */int) (unsigned char)252)))) : (((/* implicit */int) arr_0 [i_5]))));
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (unsigned int i_7 = 2; i_7 < 7; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52327)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-104))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16492)) / (((/* implicit */int) (_Bool)1)))))))));
                            var_25 = ((/* implicit */long long int) max((var_25), (max((2270878194062267016LL), (((/* implicit */long long int) (_Bool)1))))));
                            var_26 += var_13;
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3324906601U)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3004404438835728695LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-1))))) * (min((((/* implicit */unsigned long long int) -7134087980826942101LL)), (12343572499226690813ULL))))) : (((6103171574482860803ULL) * (((/* implicit */unsigned long long int) ((-3004404438835728695LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))))))))))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_32 [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_9]))))), (((((/* implicit */_Bool) arr_30 [i_9])) ? (arr_30 [i_9]) : (arr_30 [i_9])))));
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_29 [i_9])) && (((/* implicit */_Bool) arr_30 [2U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [(unsigned short)10] [i_9])) && ((((_Bool)1) || (((/* implicit */_Bool) arr_29 [(unsigned short)9]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2124)) ? (arr_29 [i_9]) : (arr_29 [i_9])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 576179277326712832LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_7))))))))))));
        var_29 = ((/* implicit */unsigned long long int) (-(arr_31 [i_9] [i_9])));
        /* LoopNest 2 */
        for (unsigned int i_10 = 3; i_10 < 15; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) min((var_30), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_29 [i_10])) : (arr_38 [i_12] [i_10]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_37 [i_9] [i_10] [i_12])))))))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) arr_41 [i_10 - 3] [i_10 - 3] [i_10 - 3] [i_10 - 3] [i_10] [i_11])) ? (arr_36 [i_10] [i_10 + 1] [i_10 + 1]) : (arr_36 [i_10] [i_10] [i_10 - 1])))))));
                                var_31 &= ((/* implicit */_Bool) arr_30 [i_13]);
                                var_32 &= ((/* implicit */long long int) min(((!((_Bool)1))), ((((!(((/* implicit */_Bool) arr_35 [(unsigned short)13] [(unsigned short)13] [i_11])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)13)), (arr_42 [i_9] [i_9] [i_11] [3ULL] [i_13]))))))));
                                var_33 = ((/* implicit */long long int) max((var_33), (min((((/* implicit */long long int) arr_34 [i_11] [i_12])), (arr_38 [i_10] [i_10])))));
                            }
                        } 
                    } 
                    arr_43 [i_9] [i_9] [i_10 - 1] [i_11] = ((/* implicit */short) arr_38 [i_9] [i_11]);
                }
            } 
        } 
        arr_44 [i_9] = ((/* implicit */unsigned long long int) arr_42 [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
    for (unsigned short i_14 = 2; i_14 < 11; i_14 += 1) 
    {
        arr_49 [10LL] &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-2813)))))) ? (min((((/* implicit */unsigned long long int) var_8)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_0)) : (arr_30 [12LL]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_14 - 1] [i_14] [16LL] [i_14] [i_14 - 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23316)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_14 + 1])) ? (((/* implicit */int) arr_34 [i_14] [i_14])) : (((/* implicit */int) arr_42 [i_14] [i_14 - 2] [(signed char)1] [i_14] [i_14])))))))));
        var_34 = arr_38 [i_14] [i_14];
        var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_45 [(_Bool)1] [i_14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (min((var_13), (((/* implicit */unsigned int) arr_34 [i_14] [i_14]))))))) ? (min((var_6), (arr_2 [i_14 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_14] [i_14] [i_14 + 1] [i_14 - 2] [i_14] [(short)0])))));
        /* LoopNest 2 */
        for (signed char i_15 = 1; i_15 < 11; i_15 += 4) 
        {
            for (unsigned int i_16 = 2; i_16 < 9; i_16 += 4) 
            {
                {
                    arr_56 [i_14 + 1] [i_14 + 1] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)38093)))) & (((((/* implicit */unsigned long long int) 73104583U)) & (3298320081325625575ULL)))));
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((arr_29 [i_16]), (((/* implicit */unsigned int) arr_1 [i_14 + 2]))))) * (max((((/* implicit */unsigned long long int) arr_45 [i_14] [(_Bool)1])), (var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25956))) : (((unsigned int) ((((/* implicit */int) arr_0 [i_14])) / (((/* implicit */int) (signed char)-111)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_17 = 1; i_17 < 12; i_17 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_18 = 1; i_18 < 12; i_18 += 1) 
                        {
                            arr_62 [i_16] [i_15] [i_16] [i_17] [i_18 - 1] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_59 [i_16] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_16] [i_18]))) : (arr_47 [i_14 - 2]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) > (arr_3 [i_17])))))));
                            var_37 = ((/* implicit */unsigned short) arr_6 [i_16]);
                            var_38 |= ((/* implicit */long long int) ((((/* implicit */int) ((arr_52 [i_18] [i_18] [i_17]) && (((/* implicit */_Bool) var_5))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_16] [i_17])))))));
                            var_39 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_17 - 1] [15LL])) ? (((((/* implicit */_Bool) arr_38 [i_16] [i_18 + 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_15 + 1] [i_16 + 1] [i_18]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [(unsigned short)10] [i_16] [i_18])) - (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned int i_19 = 0; i_19 < 13; i_19 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned short) arr_38 [i_14] [i_19]);
                            var_41 += ((/* implicit */unsigned long long int) arr_42 [(signed char)15] [i_15] [i_16] [i_16] [1U]);
                        }
                        arr_65 [i_16 + 2] [i_15] [i_16] [i_16] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(3740780783U)))) ? (11567811973921487803ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (unsigned short)43146)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                    }
                    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((((/* implicit */_Bool) arr_64 [i_14] [i_14] [i_14] [i_16 + 3] [11U] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((arr_52 [i_14] [i_14 + 2] [i_14 + 1]) ? (((/* implicit */int) arr_52 [i_14 - 1] [(short)10] [i_14 + 1])) : (((/* implicit */int) arr_52 [i_14] [i_14] [i_14 + 1]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775788LL)) ? (((/* implicit */int) arr_41 [i_14] [i_15] [10ULL] [i_16 + 4] [(unsigned short)6] [i_16])) : (((/* implicit */int) (unsigned short)20112))))), (max((((/* implicit */unsigned long long int) -2270878194062267016LL)), (var_12)))))))));
                }
            } 
        } 
    }
    var_43 |= ((/* implicit */unsigned char) ((min(((+(var_10))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_7))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7)))) ? (((var_7) - (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
}
