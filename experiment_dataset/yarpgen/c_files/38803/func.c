/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38803
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [(short)0] [i_0] [i_0] [i_3] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_0])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)29393))))));
                                var_17 = ((((/* implicit */_Bool) ((arr_1 [i_3]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)36142)) - (((/* implicit */int) (unsigned short)29393)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(short)16] [i_2] [(_Bool)1] [i_2]))) : (min((((((/* implicit */_Bool) (signed char)56)) ? (-3815050340255855635LL) : (-5916347125480379147LL))), (((/* implicit */long long int) (unsigned char)165)))));
                                arr_16 [i_4] [i_1] [i_0] [12] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_11);
                                var_18 = ((((/* implicit */int) ((((/* implicit */int) arr_13 [16LL] [i_1] [i_2] [i_3] [(_Bool)1])) < (((/* implicit */int) arr_8 [i_0]))))) <= (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)36142)))) % (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [(unsigned char)10] [i_1 - 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            arr_22 [i_6] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_1);
                            var_19 = ((/* implicit */_Bool) max((var_19), (arr_5 [i_0])));
                            arr_23 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) ((672580337292554975LL) | (672580337292554975LL))));
                            var_20 |= ((/* implicit */long long int) ((_Bool) (~(0ULL))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (signed char)-32)) ? (1239793473U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_5 [i_1]))))));
                        }
                        arr_24 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) - (var_6)))) || (((/* implicit */_Bool) arr_27 [5LL] [i_1 + 1] [i_1] [i_1] [i_1]))));
                            arr_30 [i_0] [i_1] [i_2] [i_7] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_7 + 1] [i_7 - 1] [i_8])) ? (arr_17 [i_0] [i_2] [i_0] [i_7] [i_8] [(unsigned short)14]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (_Bool)0))))))));
                            arr_31 [i_1] = ((/* implicit */unsigned int) (-(((unsigned long long int) 4154927343U))));
                            arr_32 [i_0] [i_0] [i_0] [12ULL] [12ULL] &= ((/* implicit */short) (!(((/* implicit */_Bool) (+(672580337292554975LL))))));
                            var_22 -= ((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 10393823718754058254ULL)))) : (((((/* implicit */_Bool) (unsigned short)9666)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (var_14)))));
                        }
                        for (signed char i_9 = 1; i_9 < 18; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_1] [i_0] [i_0] [6ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_9 + 2] [i_7 - 1] [i_2] [i_1 - 1])) * (((/* implicit */int) (unsigned short)29393))));
                            var_23 += ((/* implicit */short) var_6);
                            var_24 ^= ((/* implicit */_Bool) arr_4 [i_2]);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_20 [i_9] [i_9 + 1] [i_9] [i_9] [i_9]))));
                        }
                        for (long long int i_10 = 2; i_10 < 18; i_10 += 1) 
                        {
                            arr_39 [i_0] [i_0] [(signed char)12] [i_7 + 1] [i_7] [i_0] &= ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)4950)) % (((/* implicit */int) var_9))))));
                            var_26 ^= ((/* implicit */unsigned int) 0LL);
                            arr_40 [i_1] [i_7] [i_7] [i_2] [i_1] [i_1] = ((/* implicit */signed char) var_10);
                        }
                        var_27 ^= ((/* implicit */unsigned int) (signed char)-112);
                        var_28 = ((/* implicit */signed char) ((arr_28 [i_7] [i_2] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112)))));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 19; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((10393823718754058254ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))))) ? (((/* implicit */long long int) (+(117292498)))) : (-5916347125480379147LL)));
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_1] [i_2] [i_1] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_11 + 1] [i_11] [i_11] [i_11 - 1]))) : (((((/* implicit */unsigned long long int) var_13)) | (5911395663420867323ULL))))))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1])) ? (arr_12 [i_0] [i_1 + 1] [(_Bool)1] [i_1 + 1] [i_13 - 1] [i_13 - 1]) : (((/* implicit */unsigned long long int) arr_28 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])))))));
                            var_32 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_17 [i_0] [i_1] [10LL] [i_0] [i_13] [i_13])) ? (((/* implicit */int) arr_8 [(unsigned char)17])) : (((/* implicit */int) var_16))))));
                        }
                        for (signed char i_14 = 1; i_14 < 16; i_14 += 2) 
                        {
                            arr_52 [i_0] &= ((/* implicit */signed char) arr_34 [i_0] [i_1] [i_2] [(_Bool)1] [i_14]);
                            arr_53 [i_1] = ((unsigned long long int) -1933108269201289046LL);
                            var_33 -= ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)9666))))) ? (((long long int) (unsigned char)91)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3393427839733102035ULL)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (signed char)99))))));
                        }
                        var_34 ^= ((/* implicit */long long int) 10393823718754058254ULL);
                        /* LoopSeq 4 */
                        for (unsigned char i_15 = 1; i_15 < 16; i_15 += 4) 
                        {
                            arr_58 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)90);
                            arr_59 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1280987134)) ? (((/* implicit */int) (unsigned short)27006)) : (((/* implicit */int) (short)0))))) < (((((/* implicit */_Bool) arr_46 [i_15] [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90)))))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)165))));
                            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_0 [i_0]))));
                        }
                        for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            arr_65 [i_1] [(signed char)13] [i_11] [i_2] [i_2] [(short)11] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)55870)) ? (((/* implicit */int) arr_26 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_26 [i_1 - 1] [i_1 - 1]))));
                            arr_66 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_1 - 1] [i_1] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-99)) + (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_11 + 1] [i_11 - 1]))));
                            arr_67 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_11] [i_11 + 1] [i_11] [i_11])) ? (-5916347125480379147LL) : (((/* implicit */long long int) ((unsigned int) var_1)))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_71 [i_0] [i_1] [i_18] [i_0] [(signed char)13] [i_18] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                            var_37 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_11 - 1] [i_11 + 1] [i_11] [i_11 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) arr_28 [i_1 + 1] [i_1] [i_1 + 1] [i_11 - 1])) : (6202380152400649334ULL)));
                        }
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) min((min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55870))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (unsigned char)91)))))), (((/* implicit */int) arr_42 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])))))));
                        /* LoopSeq 2 */
                        for (long long int i_20 = 0; i_20 < 20; i_20 += 3) 
                        {
                            var_39 -= ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_41 [i_0] [i_1] [(short)19] [i_1 - 1] [i_20] [(_Bool)1])))) + (2147483647))) << (((((/* implicit */int) ((signed char) arr_41 [i_1] [i_1] [i_2] [i_1 + 1] [i_20] [i_0]))) - (69)))));
                            var_40 -= (!(((/* implicit */_Bool) (unsigned char)91)));
                        }
                        /* vectorizable */
                        for (unsigned short i_21 = 1; i_21 < 19; i_21 += 2) 
                        {
                            var_41 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_1 - 1] [i_1] [i_21 + 1] [i_1] [i_21] [i_1]))) < (var_11)));
                            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (unsigned char)91))))) ? (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)41))) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                arr_86 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 0LL)))));
                                var_43 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) arr_18 [i_1] [i_23])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (unsigned char)83))))))) ? (((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_2] [i_22] [i_22 - 1])) : ((+(((/* implicit */int) arr_8 [i_1 + 1]))))));
                            }
                        } 
                    } 
                    arr_87 [(_Bool)1] [i_1] [(signed char)17] [i_1] = ((/* implicit */signed char) ((min((arr_49 [i_1 - 1] [i_1] [i_1] [i_1]), (arr_49 [i_1 - 1] [i_1] [i_1] [i_1]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (short)-12771)))))));
                }
            } 
        } 
    } 
    var_44 = ((/* implicit */int) var_10);
}
