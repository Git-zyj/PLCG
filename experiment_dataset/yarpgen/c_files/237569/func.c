/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237569
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
    var_10 = ((/* implicit */short) ((min((var_5), (((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) (-(((unsigned long long int) ((signed char) var_5)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_12 = ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (-8756188528128967228LL));
                                arr_14 [i_0] [18U] [i_2] = (-(max((((/* implicit */long long int) ((unsigned char) arr_2 [i_0]))), (min((((/* implicit */long long int) arr_0 [i_0] [(unsigned char)11])), (-8756188528128967228LL))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) -2587973373576533022LL);
                    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4194303U)) | (17413612829164554726ULL))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((1924019916U) >> (((1629793836U) - (1629793833U))))), ((~(var_7))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_2))));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                            var_18 -= ((/* implicit */int) ((signed char) ((var_3) >> (((((/* implicit */int) (short)32767)) - (32767))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_8 [(unsigned char)0] [i_7] [i_9]))))) >= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-9094362684594977661LL)))));
                            arr_28 [i_7] [i_6] = ((/* implicit */unsigned int) var_1);
                        }
                        for (signed char i_10 = 4; i_10 < 10; i_10 += 1) 
                        {
                            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_6 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_18 [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) (_Bool)1))));
                            arr_31 [i_5] [i_5] [i_6] [i_7] [i_8] [i_10] |= ((/* implicit */int) var_7);
                            arr_32 [i_5] [i_6 + 1] [i_5] [i_8] [i_5] [i_10] = ((/* implicit */long long int) (~(((((/* implicit */int) var_8)) & (var_0)))));
                        }
                        var_21 -= ((/* implicit */unsigned char) (short)0);
                    }
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        arr_35 [4LL] [i_6] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((10183018269599125407ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1974372817U))))) : (((((/* implicit */int) (unsigned char)252)) >> (((/* implicit */int) (signed char)13))))))));
                        arr_36 [i_11] [i_6] [i_6] [(unsigned char)2] [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_11 [i_6 + 1] [i_7] [i_7] [i_11]), (((/* implicit */int) (unsigned short)48600)))))));
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]))))) ? (max((((/* implicit */int) arr_9 [i_5] [i_6 + 1] [i_7])), (var_1))) : (((/* implicit */int) arr_6 [i_6 + 2] [i_6 - 1] [i_6 + 3])))) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [i_5] [(unsigned short)5] [i_6] [6ULL] [i_11])), (0U)))) ? ((+(((/* implicit */int) arr_33 [i_11] [(signed char)5] [i_5])))) : (((/* implicit */int) var_4))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((9223372036854775807LL) != (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)88)), (min((0U), (((/* implicit */unsigned int) (unsigned char)181)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 7136983546391109440ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3222483895U))))))));
                            arr_43 [(_Bool)1] [0U] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_16 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [i_6 + 3]))))) : (max((((((/* implicit */_Bool) 4188685306U)) ? (arr_20 [i_6] [(signed char)7] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_13]))))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        }
                    }
                    var_25 = ((/* implicit */int) var_7);
                    arr_44 [i_5] [i_5] [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((7611722950516377995ULL), (((/* implicit */unsigned long long int) (signed char)126))))) || (((/* implicit */_Bool) var_8))));
                    arr_45 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) arr_10 [i_5] [i_6]);
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        arr_49 [i_7] [i_6] [(signed char)10] [i_7] [i_6] [i_14] = ((/* implicit */long long int) 10835021123193173621ULL);
                        arr_50 [i_5] [9LL] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_17 [i_5] [i_5]), (var_5))))))), (max(((-(10183018269599125407ULL))), (((/* implicit */unsigned long long int) var_9))))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        arr_53 [i_5] [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) ((_Bool) max((arr_42 [i_5] [(signed char)9] [i_7] [i_6 - 1] [i_15]), (arr_42 [i_5] [i_7] [i_7] [i_6 - 1] [i_7]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_34 [i_5] [i_6] [4U] [i_5] [i_7])), (arr_56 [i_5] [i_15] [i_7] [i_15] [(unsigned char)9])))), (((unsigned int) (_Bool)1))))) == (-4571140861596685889LL)));
                            var_27 = ((/* implicit */signed char) arr_26 [(signed char)4]);
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
                        {
                            arr_59 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_25 [(_Bool)1]);
                            arr_60 [i_5] [i_5] [i_5] [(short)2] [3LL] = ((/* implicit */short) var_9);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (4867706731260668739ULL) : (((/* implicit */unsigned long long int) 0U)))))));
                        var_29 -= ((/* implicit */unsigned short) (~(((unsigned int) arr_9 [(_Bool)1] [i_6] [i_6]))));
                        /* LoopSeq 2 */
                        for (signed char i_19 = 0; i_19 < 12; i_19 += 4) 
                        {
                            arr_65 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (397963870379551422ULL))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_5] [i_6 + 1] [i_6 + 1] [3LL]))) <= (3368722324U))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_56 [i_5] [i_5] [(unsigned char)11] [(_Bool)1] [i_19])) : (-9223372036854775805LL)))));
                            var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                            var_32 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (366680578U) : (3368722300U)));
                            var_33 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) -3469286422043835363LL)))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_34 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (_Bool)0)) ^ (1036521708)))));
                            var_35 -= ((/* implicit */_Bool) 3581522979U);
                            arr_68 [i_20] [5LL] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                    }
                }
                arr_69 [i_6] = ((/* implicit */int) ((unsigned int) ((max((var_0), (((/* implicit */int) (short)23814)))) <= ((-(((/* implicit */int) (_Bool)1)))))));
                arr_70 [i_5] [i_6] [6ULL] = ((/* implicit */short) arr_52 [(signed char)6] [i_6] [i_5] [i_5] [i_5]);
                /* LoopSeq 1 */
                for (long long int i_21 = 2; i_21 < 9; i_21 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        for (unsigned long long int i_23 = 1; i_23 < 10; i_23 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned long long int) arr_4 [i_6] [i_6]);
                                var_37 = ((/* implicit */long long int) ((int) var_3));
                                var_38 = ((/* implicit */long long int) (~(((/* implicit */int) arr_51 [(_Bool)1] [i_21] [(_Bool)1] [i_5]))));
                                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_5]))) : (9223372036854775807LL)))))) ? (((long long int) ((((/* implicit */int) arr_22 [(signed char)0] [i_6] [(signed char)8] [i_22])) & (((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)127)), (-12LL))))))))));
                            }
                        } 
                    } 
                    var_40 -= ((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-60)), ((unsigned short)0)));
                }
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_7)))) ? (min((((/* implicit */unsigned int) var_0)), (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_1))))))) ? (min((var_2), (((/* implicit */unsigned int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-23802)) ? ((+(((/* implicit */int) var_5)))) : ((~(((/* implicit */int) (_Bool)1)))))))));
}
