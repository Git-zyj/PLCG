/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49574
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
    var_16 = ((/* implicit */signed char) ((long long int) min((((((/* implicit */_Bool) (short)-16980)) ? (((/* implicit */unsigned long long int) var_3)) : (var_6))), (var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((int) arr_1 [i_0]));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_5 [i_0] [10] [i_1 + 1] [(signed char)17]) >> (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_2])), (var_0)))))) >> (((min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)5]))))))) - (10437366078609805478ULL)))));
                    arr_7 [i_0] = ((/* implicit */unsigned int) min((((((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_1 [i_2 - 2])))))))));
                    arr_8 [i_0] [i_0] [i_2 + 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1) ^ (arr_2 [(short)0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0)))) : (arr_4 [i_1 - 1] [i_1 - 1])))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (var_7))), (((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_0])))))) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)0)))), (((-81797135) ^ (((/* implicit */int) (_Bool)1))))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))) : (var_14))))) | (((min((var_2), (((/* implicit */long long int) var_0)))) ^ (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255)))))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 333054037)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))))) : (min((((/* implicit */unsigned long long int) arr_9 [i_3])), (((((/* implicit */_Bool) (signed char)0)) ? (10073645673476940247ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_3])))))))));
                    arr_13 [i_0] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (7147366810695781657ULL)))))), (arr_12 [i_0] [i_1 - 1] [i_3])));
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_19 [i_4] [i_5] [i_4] [i_4] [i_4 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                            var_21 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_15 [i_5] [i_4] [i_3] [i_0] [i_0]))) >= (min((arr_15 [(unsigned short)6] [i_1] [i_1] [7ULL] [i_5]), (((/* implicit */unsigned long long int) var_7))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_1 - 1] [(signed char)20] [(unsigned short)19] [i_1 - 1] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1] [i_4 - 1]))));
                            var_22 = ((/* implicit */unsigned int) (((+(var_6))) | (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1 - 1] [i_0]))));
                        }
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_15 [i_3] [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15)))))))) || (((/* implicit */_Bool) min((((/* implicit */int) min(((signed char)-39), ((signed char)-107)))), ((+(((/* implicit */int) (unsigned char)128)))))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((signed char) var_11))));
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-117)), (var_0)))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((signed char) var_13)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) var_8)) : (var_1)))) - (min((var_2), (((/* implicit */long long int) var_15)))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)49500)))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                        {
                            var_25 -= (-(((/* implicit */int) (signed char)(-127 - 1))));
                            var_26 = ((/* implicit */unsigned char) ((short) (+((-2147483647 - 1)))));
                            arr_31 [i_0] [(short)7] = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned long long int) var_7)) : (11299377263013769960ULL)))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((unsigned long long int) arr_24 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]))));
                        }
                        for (short i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)120)) || (((/* implicit */_Bool) var_4))))), (((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * ((+(var_12)))))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_2))) << (((min((((/* implicit */unsigned int) (short)25775)), (var_11))) - (25768U)))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(var_3))), (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [0ULL] [16ULL] [16ULL] [i_4])))))))) ? (var_6) : (17592152489984ULL)));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                        {
                            var_31 &= ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))) : (var_9)));
                            var_32 = (signed char)30;
                            arr_40 [22] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_1 - 1] [i_1 + 1])) | (((/* implicit */int) arr_25 [i_1 - 1] [i_1 + 1]))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_2)) : (var_12)))) ? ((+(var_11))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) % (((((/* implicit */_Bool) (signed char)25)) ? (var_12) : (((/* implicit */unsigned long long int) var_9))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            arr_43 [17U] [i_1] [i_1] = ((/* implicit */signed char) var_15);
                            arr_44 [i_0] = (signed char)-25;
                            var_35 = ((/* implicit */signed char) ((long long int) ((min((13651006063341639451ULL), (((/* implicit */unsigned long long int) var_2)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        }
                    }
                    for (unsigned short i_12 = 2; i_12 < 21; i_12 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((_Bool) min((var_10), (((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_1]))))))));
                        var_37 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(10569896372652081031ULL)))) ? (0ULL) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (var_12))))) - (((((/* implicit */_Bool) ((var_3) & (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18446744073709551615ULL))))))));
                        arr_47 [i_0] [i_12] = ((/* implicit */unsigned long long int) var_15);
                    }
                    for (unsigned short i_13 = 2; i_13 < 21; i_13 += 4) /* same iter space */
                    {
                        arr_50 [(unsigned char)1] [(unsigned char)1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2665073144785976159LL)) ? (((/* implicit */int) (signed char)19)) : (arr_18 [i_0] [i_1 - 1] [i_3] [i_3] [i_13 - 1])))) : (min((6208414319019853872LL), (((/* implicit */long long int) (signed char)121))))))) / (arr_3 [i_3] [i_1])));
                        arr_51 [i_13] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (((((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)3507))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-3)))))))));
                        var_38 ^= ((/* implicit */unsigned char) ((unsigned short) min((arr_20 [i_0] [i_1 - 1] [i_3] [(unsigned char)7] [5]), (arr_20 [i_0] [i_1] [(_Bool)1] [i_3] [i_0]))));
                    }
                    for (unsigned short i_14 = 2; i_14 < 21; i_14 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), ((+(min((((/* implicit */unsigned long long int) (signed char)-111)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (var_6)))))))));
                            arr_56 [i_15] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))) : (3408794982U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((((/* implicit */_Bool) arr_52 [i_14])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9))))))) : (min((((var_3) >> (((var_5) - (5733767090989329264LL))))), (((((/* implicit */_Bool) var_0)) ? (arr_26 [i_15] [i_15] [i_15] [i_15] [i_15] [8]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)58)))))))));
                            var_40 = ((/* implicit */int) var_10);
                        }
                        for (unsigned int i_16 = 1; i_16 < 21; i_16 += 4) /* same iter space */
                        {
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [21U]))));
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_41 [i_16 + 1] [(_Bool)0] [i_0] [(unsigned short)21] [5LL] [(_Bool)0] [i_0])) : (var_5)))) & (min((17704061674252247795ULL), (0ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_37 [i_16 - 1])), (arr_33 [i_0] [i_1] [(signed char)20] [i_0] [i_16])))))))));
                            var_43 = ((/* implicit */signed char) var_6);
                        }
                        for (unsigned int i_17 = 1; i_17 < 21; i_17 += 4) /* same iter space */
                        {
                            var_44 |= var_7;
                            var_45 = var_11;
                        }
                        arr_63 [(signed char)19] = ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))), (min((arr_15 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_15)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_59 [i_14] [i_14 + 1] [i_14 - 2] [i_14 - 2] [i_14 + 1]) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (var_1))))))));
                    }
                }
                arr_64 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65535ULL)) ? (min((arr_14 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_45 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) var_2)) : (var_12)))));
            }
        } 
    } 
    var_46 |= ((/* implicit */int) min((((((/* implicit */_Bool) -738367398720208191LL)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24598))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_15))))))));
}
