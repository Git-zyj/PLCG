/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42394
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
    var_18 += ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) min((((/* implicit */short) (unsigned char)34)), (var_15)))))));
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >> (((max((((((/* implicit */int) var_1)) % (((/* implicit */int) var_14)))), (((((/* implicit */int) var_1)) / (((/* implicit */int) var_10)))))) - (215)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (unsigned short)22655))));
                                var_21 = ((/* implicit */long long int) arr_7 [i_1] [i_1] [i_4]);
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */unsigned long long int) ((short) min((max((arr_2 [i_0] [i_1]), (var_11))), (arr_8 [i_1] [i_2]))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) var_0))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                {
                    var_24 *= ((/* implicit */short) max((((/* implicit */int) arr_15 [i_0] [i_0])), (max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-15102)))), (((/* implicit */int) var_16))))));
                    var_25 ^= var_2;
                    var_26 ^= ((/* implicit */short) 0ULL);
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) ((arr_16 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))));
                    var_28 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_10 [i_1] [(short)1] [i_1] [i_0] [i_0]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(((/* implicit */int) arr_14 [i_0] [i_1] [i_6])))))));
                        var_30 += ((((/* implicit */_Bool) arr_10 [i_0] [8LL] [i_1] [i_6] [i_7])) ? (arr_10 [i_6] [i_1] [i_6] [i_7] [i_1]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                        var_32 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_18 [i_0] [(unsigned short)20] [(short)12])) ? (((/* implicit */int) arr_14 [i_7] [(short)9] [i_0])) : (((/* implicit */int) var_6)))) << (((((((/* implicit */_Bool) arr_17 [i_7] [i_6] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-15120)))) - (82)))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (short)25860))))))));
                        var_34 ^= ((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [(_Bool)1] [i_0]);
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0])))) & (((arr_5 [(_Bool)1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_6] [i_8])))))));
                        var_36 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)24313))));
                    }
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                        {
                            var_37 ^= ((/* implicit */_Bool) arr_23 [(unsigned char)6] [i_6] [(unsigned char)6] [(unsigned char)6]);
                            var_38 ^= ((/* implicit */unsigned short) arr_7 [i_6] [i_6] [i_10]);
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_10] [i_10] [i_10] [i_10] [i_10])) & (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_0]))))) ? (arr_16 [i_0] [i_9] [i_6] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_26 [i_0] [i_1] [i_6] [i_9] [i_10]))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                        {
                            var_40 = ((/* implicit */long long int) ((arr_4 [i_1] [i_11]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            var_41 *= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) 18446744073709551608ULL)));
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (unsigned short)24313))));
                            var_43 = arr_20 [i_11] [i_0] [i_6] [i_0] [i_0];
                        }
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                        {
                            var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_22 [i_9] [i_6] [22ULL] [22ULL]))))))));
                            arr_34 [i_0] [i_1] [i_6] [i_0] [(unsigned char)17] = ((/* implicit */unsigned int) arr_31 [i_0] [i_1]);
                            var_46 = ((/* implicit */unsigned char) (~(arr_12 [i_0] [i_0] [i_1] [i_1] [i_1])));
                        }
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned char) var_5);
                            var_48 ^= ((/* implicit */long long int) ((short) var_13));
                            var_49 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_35 [i_13] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1])))))) && (((/* implicit */_Bool) (unsigned char)41))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_43 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) var_6);
                            var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) var_11)))));
                            var_51 = ((/* implicit */unsigned char) (short)-29822);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            var_52 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_6] [i_9])) ? (((/* implicit */int) arr_8 [i_1] [i_15])) : (((/* implicit */int) arr_8 [i_15] [i_1]))));
                            var_53 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
                        }
                    }
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) ((unsigned int) arr_13 [i_0] [i_1] [i_6] [i_16])))));
                        var_55 = ((/* implicit */unsigned short) ((unsigned long long int) var_8));
                        /* LoopSeq 4 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_52 [i_1] [i_0] [i_0] [i_16] = ((/* implicit */int) ((arr_16 [i_0] [i_0] [i_0] [i_0]) * (arr_4 [i_0] [i_0])));
                            var_56 = ((((/* implicit */_Bool) var_6)) ? (arr_18 [i_0] [i_0] [i_6]) : (arr_18 [i_6] [i_6] [i_17]));
                            var_57 &= ((/* implicit */unsigned short) ((short) arr_41 [i_0] [i_1] [i_17] [i_16]));
                            var_58 = ((/* implicit */_Bool) arr_19 [(unsigned short)12] [(unsigned short)12] [i_6]);
                        }
                        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) 
                        {
                            arr_56 [i_0] [i_16] |= ((/* implicit */int) (unsigned char)38);
                            var_59 = ((/* implicit */unsigned char) var_17);
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_60 ^= ((/* implicit */unsigned short) var_11);
                            var_61 = ((/* implicit */int) var_13);
                            var_62 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_16])) > (((/* implicit */int) arr_53 [i_0] [i_1] [i_6] [i_0] [i_0] [i_16] [i_19]))));
                        }
                        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) 
                        {
                            var_63 = ((/* implicit */long long int) ((var_12) > (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0] [i_1] [(unsigned char)22] [i_20])))));
                            var_64 = ((/* implicit */int) max((var_64), (((((/* implicit */_Bool) arr_45 [i_16] [i_1] [12U] [i_16])) ? (((/* implicit */int) arr_41 [i_16] [i_1] [i_6] [i_16])) : (((/* implicit */int) arr_45 [i_1] [i_1] [i_6] [i_20]))))));
                            var_65 &= ((/* implicit */unsigned char) ((arr_1 [i_1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197)))));
                            var_66 = arr_44 [i_0] [i_1] [i_6] [i_16] [i_0];
                            var_67 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned char) (short)15102)));
                        }
                        var_68 = ((unsigned char) arr_48 [1ULL] [1ULL] [1ULL] [i_6] [i_16] [i_16]);
                        var_69 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_6] [i_16])) ? (((/* implicit */int) (short)-15102)) : (841225688))) + (((/* implicit */int) arr_13 [i_0] [i_1] [i_6] [i_6]))));
                    }
                    var_70 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                }
                for (unsigned char i_21 = 0; i_21 < 24; i_21 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_22 = 0; i_22 < 24; i_22 += 2) /* same iter space */
                    {
                        var_71 = ((/* implicit */_Bool) min((var_71), (((/* implicit */_Bool) min((var_10), (((/* implicit */short) (!(((/* implicit */_Bool) arr_63 [6U] [i_22]))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_23 = 0; i_23 < 24; i_23 += 3) 
                        {
                            var_72 = ((/* implicit */unsigned char) min((var_72), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 4178985752U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))))));
                            var_73 = ((/* implicit */long long int) arr_42 [21ULL] [21ULL] [i_21] [21ULL] [21ULL]);
                            var_74 = ((/* implicit */unsigned char) arr_17 [i_21] [i_21] [i_21]);
                        }
                    }
                    for (unsigned char i_24 = 0; i_24 < 24; i_24 += 2) /* same iter space */
                    {
                        var_75 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_38 [i_0])) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) var_14))));
                        var_76 = ((/* implicit */_Bool) min((var_76), (((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    for (unsigned char i_25 = 0; i_25 < 24; i_25 += 2) /* same iter space */
                    {
                        var_77 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(short)7] [16U] [i_21] [i_25] [15LL]))) : (arr_5 [i_25]))))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_1] [i_1] [i_21] [i_25])) : (((((/* implicit */int) (unsigned char)191)) / (((/* implicit */int) var_6))))))));
                        var_78 ^= ((/* implicit */long long int) max((((((/* implicit */int) var_10)) % (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_1] [(unsigned char)21] [i_1] [i_1] [i_1] [i_1] [(unsigned char)12])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (arr_75 [i_0] [i_1] [i_0] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) var_9))))));
                    }
                    var_79 = ((/* implicit */_Bool) var_8);
                }
                var_80 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_74 [i_1] [i_1] [i_1] [i_0]), (arr_74 [(_Bool)1] [(_Bool)1] [i_1] [i_0]))))));
            }
        } 
    } 
}
