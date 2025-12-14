/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42369
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
    for (unsigned short i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) arr_0 [i_0 - 2] [2U]))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned short)7]);
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)4021)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)12)) && (((/* implicit */_Bool) arr_9 [i_1 - 1]))))) : (((/* implicit */int) arr_5 [i_2]))));
                        var_13 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-4021)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) | (((3200466804951718992ULL) + (((/* implicit */unsigned long long int) arr_0 [i_1 - 2] [i_0 + 1])))))))));
                        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (arr_12 [i_0] [i_2] [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-8))))))) < (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 + 3])) ? (arr_7 [i_0] [i_0] [i_0 + 3]) : (arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 3])))));
                        var_15 = ((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_0]);
                        var_16 *= ((/* implicit */short) (-(((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((((/* implicit */int) var_5)) & (arr_10 [i_0 + 3] [i_0 + 3] [i_0] [i_0]))) : (((/* implicit */int) arr_3 [i_1 + 1]))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
        {
            var_17 -= ((/* implicit */short) ((unsigned short) arr_6 [i_0 - 2] [i_0 - 2] [i_4]));
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                var_18 -= ((/* implicit */signed char) arr_14 [i_0 + 1] [i_4]);
                arr_18 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((arr_2 [i_0 + 2]) | (arr_2 [i_0 + 1])));
            }
            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_0])));
                var_20 = ((/* implicit */unsigned short) ((arr_4 [i_0]) / (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0 + 3] [i_0]))));
            }
            for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                var_21 ^= ((/* implicit */short) (-(((arr_21 [i_0] [i_4] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 2])))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_21 [i_7] [i_4] [i_7]))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) (short)4042)))))));
                var_24 ^= ((/* implicit */unsigned char) ((unsigned short) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7] [i_0]))))));
            }
            var_25 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 3]))) != (arr_4 [i_0]))))) + (((var_4) | (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 + 2] [i_0] [i_4] [i_4])))))));
            var_26 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) >= (arr_12 [i_0] [i_0] [i_4] [i_4]))) ? (((/* implicit */int) arr_16 [i_0 + 1])) : (((/* implicit */int) ((0U) > (arr_12 [4] [i_0] [i_0 + 1] [i_0 + 1]))))));
        }
        for (long long int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
        {
            var_27 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) == (((((/* implicit */int) var_1)) * (((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_0 + 1] [i_0])))))));
            arr_27 [i_8] [i_0] &= ((((/* implicit */_Bool) (short)4014)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (arr_21 [i_0] [i_0 + 4] [i_0 + 4]));
        }
    }
    for (int i_9 = 2; i_9 < 17; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (unsigned char i_12 = 1; i_12 < 20; i_12 += 4) 
                {
                    {
                        arr_38 [i_9] [i_9] [11ULL] [i_9 - 2] &= var_6;
                        var_28 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) ^ (3122440022U))))));
                        arr_39 [(short)2] [i_10] [(short)2] [i_10] [i_10] &= ((/* implicit */long long int) min((((/* implicit */int) arr_28 [i_12 - 1])), (((((/* implicit */_Bool) arr_28 [i_12 - 1])) ? (((/* implicit */int) arr_30 [i_9 - 1] [i_9 + 4])) : (((/* implicit */int) arr_28 [i_12 + 1]))))));
                    }
                } 
            } 
            var_29 -= ((/* implicit */unsigned char) (signed char)46);
        }
        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_35 [9] [i_9] [1] [i_9 - 1] [10U]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) >= (((arr_34 [i_9] [i_9 + 3] [i_9] [i_9]) ^ (((/* implicit */long long int) -10)))))))) : (((unsigned long long int) (unsigned short)4095))));
        var_31 = ((/* implicit */unsigned int) arr_35 [i_9 + 3] [i_9] [i_9] [i_9] [12ULL]);
        /* LoopNest 3 */
        for (short i_13 = 3; i_13 < 18; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                for (short i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    {
                        var_32 -= ((/* implicit */unsigned short) arr_35 [i_9] [i_9 - 2] [i_9] [i_9] [i_9]);
                        arr_48 [i_15] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_15] [i_15] [i_15] [i_15])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_5))))) - (arr_33 [i_9 - 1] [i_9 - 2] [i_13 + 3] [i_13 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_9])) && (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)242)), (arr_40 [i_15]))))))))));
                        var_33 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (18446744073709551615ULL)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_16 = 3; i_16 < 20; i_16 += 4) 
        {
            for (unsigned short i_17 = 0; i_17 < 21; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) 
                        {
                            {
                                var_34 &= ((/* implicit */int) ((((/* implicit */int) (unsigned char)182)) != (((((((/* implicit */int) max(((short)-12), ((short)-4022)))) + (2147483647))) << (((((/* implicit */int) arr_32 [i_9] [i_17] [i_18] [i_19])) - (95)))))));
                                var_35 -= ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)151))))), ((short)-4021)))) + (((/* implicit */int) max((((short) arr_42 [i_9] [i_16 - 1] [i_17] [i_18])), (arr_43 [i_18] [i_16 + 1] [i_9 - 2] [i_9]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_20 = 0; i_20 < 21; i_20 += 4) 
                    {
                        var_36 -= ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_9 + 1] [i_9 + 2] [i_9 - 2] [i_9 + 4])) * (((/* implicit */int) arr_49 [i_9 - 2] [i_9 + 4]))));
                        /* LoopSeq 2 */
                        for (long long int i_21 = 0; i_21 < 21; i_21 += 3) 
                        {
                            var_37 = ((((/* implicit */_Bool) 172905885U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4026))));
                            var_38 *= ((/* implicit */unsigned short) arr_30 [(short)14] [i_21]);
                            var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 2137828188)) || (((/* implicit */_Bool) 4257918680U))))) == (((/* implicit */int) arr_62 [(unsigned short)2] [(unsigned short)2]))));
                        }
                        for (unsigned char i_22 = 2; i_22 < 18; i_22 += 3) 
                        {
                            var_40 -= ((/* implicit */unsigned int) (short)-4031);
                            var_41 *= ((/* implicit */unsigned int) arr_43 [0LL] [i_17] [i_20] [i_22]);
                            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_57 [i_9 + 4] [3] [i_9] [i_9 - 2] [i_9 + 4])) ? (((/* implicit */int) arr_32 [i_9 + 1] [i_16] [i_17] [i_20])) : (((/* implicit */int) arr_32 [i_9] [i_17] [i_20] [i_22 + 3])))) + (((/* implicit */int) arr_62 [i_9 + 3] [i_22 + 2])))))));
                            arr_68 [i_20] [i_20] [i_20] [(_Bool)1] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1397495929)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_40 [i_9])) : (10003253535092631829ULL)))));
                            var_43 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [3LL] [i_16 + 1] [i_17] [i_20])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_47 [i_9] [i_9])) : (((/* implicit */int) arr_28 [i_9 + 4]))))) : (((((/* implicit */_Bool) arr_30 [i_16] [i_9 - 1])) ? (arr_57 [i_9 + 3] [i_16 - 3] [i_17] [i_9 + 3] [(short)13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_23 = 0; i_23 < 21; i_23 += 4) 
                        {
                            arr_72 [i_23] [i_16 - 2] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_66 [i_23] [i_20] [i_17] [i_16] [i_9])) : (((/* implicit */int) arr_71 [i_9] [i_9] [i_9] [i_9 - 1])))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_9] [i_9] [i_9 - 1] [i_9 + 4] [i_9] [i_9] [i_9]))) >= (214294259U))))));
                            var_44 -= ((/* implicit */unsigned int) ((unsigned long long int) arr_62 [(short)1] [i_9]));
                        }
                        arr_73 [i_17] [(unsigned char)4] [i_17] [i_17] [i_17] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_17] [i_20])) ? (((/* implicit */unsigned long long int) arr_36 [i_9] [i_16 - 3] [i_9] [i_20] [i_20] [i_20])) : (10147339676080784992ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_49 [i_9] [i_16])) > (((/* implicit */int) arr_47 [i_9] [i_17]))))) : (((/* implicit */int) ((((/* implicit */long long int) arr_53 [i_9 - 1] [5LL] [i_9] [i_9])) != (var_4))))));
                        var_45 &= ((/* implicit */long long int) ((arr_41 [i_9 + 3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 2; i_24 < 20; i_24 += 1) 
                    {
                        for (unsigned long long int i_25 = 2; i_25 < 20; i_25 += 1) 
                        {
                            {
                                var_46 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (_Bool)0)))));
                                var_47 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(unsigned short)19] [i_17]))) + (420492546U))) != (arr_53 [i_9] [i_16 - 3] [i_17] [i_24])));
                                var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_35 [i_25 - 1] [i_24] [i_17] [(unsigned char)0] [i_9 + 4])) - (148))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_49 = ((/* implicit */unsigned char) min((var_49), (var_5)));
}
