/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248392
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
    var_18 ^= ((/* implicit */long long int) var_17);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned short)9] [i_1] [(unsigned short)9] = ((/* implicit */signed char) (_Bool)0);
                    var_19 = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) -1839304579)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1184332576U)))) & (((((/* implicit */_Bool) -1839304598)) ? (((/* implicit */long long int) -1839304579)) : (var_0)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0 - 3] [i_1] [i_1] [i_2] [i_1] [(unsigned char)4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_12 [i_3] [i_0 - 3] [9])))));
                                var_20 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((unsigned char) 1839304562))) == (((/* implicit */int) var_12)))));
                                var_21 &= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2])) != (((/* implicit */int) (unsigned char)66)))))));
                                var_22 = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_0 - 3] [(signed char)11] [i_0])), (((unsigned int) (-(((/* implicit */int) var_11)))))));
        var_23 = ((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)1)))), ((+(((/* implicit */int) (_Bool)1))))));
        var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65472)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (arr_4 [i_0 - 3] [i_0] [i_0])))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)233)) ? (max((arr_6 [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182)))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 4; i_6 < 7; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) < (((/* implicit */int) ((arr_3 [i_5] [i_5] [0LL]) < (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_12 [9ULL] [i_7] [11ULL])) : (arr_22 [i_5])))))))));
                            var_27 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (2581656293668810258ULL))))), (var_15)));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) max((var_28), (((((((((/* implicit */int) ((short) var_0))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)57467)) == (var_9)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_5 [i_5] [i_6 + 3] [(unsigned short)5])))))))));
                            var_29 = ((/* implicit */long long int) (unsigned char)9);
                            var_30 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_12)) == (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (_Bool)1))))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((-1839304582), (((/* implicit */int) (unsigned char)78)))))))));
                            arr_31 [i_5] [i_10] [i_7] [i_8] [i_5] = ((/* implicit */unsigned char) (signed char)62);
                        }
                        var_31 = ((/* implicit */unsigned int) ((long long int) ((_Bool) 14080015058128839886ULL)));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (unsigned short)15))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_12 = 3; i_12 < 8; i_12 += 3) 
                        {
                            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_6] [i_7] [i_7] [i_7]))));
                            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)23329)) ? (-1839304552) : (((/* implicit */int) (unsigned char)242)))) != (((/* implicit */int) var_1))));
                            var_35 = ((signed char) arr_25 [i_5] [i_6] [i_6] [(unsigned char)6] [i_12 - 3] [i_6 + 3]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 3; i_13 < 8; i_13 += 4) 
                        {
                            var_36 = arr_10 [(signed char)0] [i_6] [i_7 + 1] [i_7 + 1];
                            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (+(var_13))))));
                            var_38 = ((/* implicit */long long int) ((unsigned long long int) var_15));
                            var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                            var_40 = ((/* implicit */unsigned long long int) ((var_14) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_39 [i_5] [i_5] [i_7] [i_5] [i_5]))))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)14)))))));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -5296326779141261770LL)) != (10026923365046598803ULL)));
                            var_43 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)177)) + (((/* implicit */int) var_7)))) >> (((var_14) - (3116025981316519187LL))))) == (((/* implicit */int) ((signed char) ((unsigned char) (unsigned char)0))))));
                            var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) arr_22 [i_11]))));
                            var_45 = ((/* implicit */long long int) ((((_Bool) (!(((/* implicit */_Bool) arr_0 [i_6 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [(unsigned char)6] [i_7 + 1] [i_6 - 1] [(unsigned char)6] [i_14])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_40 [i_6] [i_7 + 1] [i_6 + 3] [5ULL] [i_6 + 3])))))));
                        }
                        arr_44 [i_5] [i_7] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((1536040102509976042ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_39 [i_5] [i_5] [5LL] [i_5] [i_11])), (arr_28 [(unsigned char)2] [i_5] [i_6] [i_6] [i_7 + 1] [i_6] [i_6])))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) arr_39 [i_5] [i_5] [i_7] [i_5] [i_5])))))))));
                        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((long long int) (_Bool)1)), (((/* implicit */long long int) arr_28 [i_6] [i_6 + 2] [i_6 - 1] [i_6] [i_6 + 2] [i_6 - 1] [i_7 - 1]))))) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) var_16)), (var_15)))))) : (((unsigned long long int) arr_42 [i_5] [i_6] [(short)7] [(short)9]))));
                        arr_45 [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_6] [i_7])) ? (((long long int) arr_6 [i_6] [11] [11])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)1))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_20 [i_5] [i_11]))))), (((((/* implicit */_Bool) 14080015058128839886ULL)) ? (arr_26 [i_11] [i_11] [(signed char)9] [i_7] [i_6 + 1] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_11)))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        arr_50 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_5] [i_6 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4467570830351532032LL)));
                        /* LoopSeq 3 */
                        for (unsigned char i_16 = 1; i_16 < 8; i_16 += 2) 
                        {
                            arr_55 [i_5] [i_5] [(signed char)6] [i_15] [i_16 + 2] = ((/* implicit */int) var_1);
                            var_47 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_16 + 1] [i_6 + 3]))));
                            var_48 |= ((/* implicit */unsigned char) arr_29 [i_7] [i_7 - 1] [i_7] [i_7] [i_7] [i_7] [i_7 - 1]);
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_49 = ((/* implicit */unsigned char) var_1);
                            var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((unsigned long long int) (_Bool)1)))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            arr_62 [i_5] [i_5] [i_7] [0LL] [i_5] [(signed char)9] = ((/* implicit */unsigned short) var_3);
                            arr_63 [i_5] [i_6] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((int) arr_49 [i_5] [i_6 + 2]));
                            arr_64 [i_5] [i_15] [i_7] [i_7] [i_6] [i_5] = ((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [(unsigned char)2]);
                            var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) (-(((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_11)))))))));
                        }
                        var_52 ^= ((/* implicit */unsigned char) ((long long int) var_15));
                    }
                }
            } 
        } 
        var_53 = ((/* implicit */int) ((-1LL) < (((max((((/* implicit */long long int) arr_12 [10LL] [i_5] [8ULL])), (var_6))) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_5])))))));
    }
}
