/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240519
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
    var_19 = ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_20 += var_5;
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_7 [i_2] [i_1 - 1] [(signed char)10] [(signed char)10] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-31)), ((+(((/* implicit */int) (_Bool)0))))))) ? ((-((-(var_3))))) : (((((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */short) (signed char)-22))))) / (((-1258136918) / (((/* implicit */int) (signed char)16))))))));
                    arr_8 [i_0] [i_0] [(signed char)8] [(unsigned char)4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1]))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_1] [i_2]))) : (((/* implicit */int) (unsigned char)22)))))));
                    var_21 &= var_15;
                }
                /* LoopSeq 4 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)30))))))) ? (((/* implicit */unsigned long long int) (-(arr_3 [i_1 - 1])))) : (arr_6 [i_3] [i_3])));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned int) var_8)), (3456822237U))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((-215063048), (((/* implicit */int) var_16)))) : (((((/* implicit */int) var_11)) << (((arr_6 [i_0] [(signed char)4]) - (4117925370370632354ULL))))))) : ((-(((/* implicit */int) var_6))))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        for (int i_6 = 4; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [0] [0] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) var_15)) == (arr_3 [i_1 + 1])));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(unsigned short)2] [i_6] [(_Bool)1] [(unsigned char)5] [i_4 + 1] [(unsigned short)10])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_10 [i_4 + 1] [i_4] [i_4 + 1] [i_1 + 1]))));
                                var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (long long int i_8 = 4; i_8 < 10; i_8 += 3) 
                        {
                            {
                                arr_28 [(unsigned char)7] [i_1] = ((/* implicit */signed char) ((arr_23 [i_1 - 2] [i_1 + 3] [i_7] [i_7] [i_8 + 2] [i_8]) ? (((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_12)) % (var_17)))));
                                arr_29 [i_1 + 2] [i_4] |= ((/* implicit */unsigned char) ((((3654374908U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >> (((arr_27 [i_0] [i_1 + 3] [i_4] [i_7] [i_7]) - (3624676356401688677ULL)))))) : (((((/* implicit */_Bool) var_14)) ? (1885346979U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 1; i_9 < 8; i_9 += 2) 
                    {
                        arr_34 [2ULL] [2U] [i_4] [(short)10] &= ((/* implicit */unsigned short) ((_Bool) var_6));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), ((signed char)22)));
                            var_25 = ((/* implicit */_Bool) ((int) arr_3 [i_0]));
                            arr_38 [(short)5] [6U] [i_9] [i_9] [1LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) - (3456822219U)))));
                            arr_39 [i_0] [i_0] [i_9] [i_10] [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (signed char)22)) <= (((/* implicit */int) (signed char)-15))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_5 [i_10])))) / (((/* implicit */int) ((((/* implicit */int) arr_30 [i_10] [i_10] [i_10] [i_0])) >= (((/* implicit */int) (signed char)-29))))))))));
                        }
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_3 [(_Bool)1]))) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_1 - 3] [i_4] [i_0] [i_12])) : ((+(arr_43 [i_0] [5] [i_0] [9LL] [5] [i_11 + 1] [i_12])))));
                            var_28 = ((((unsigned int) arr_37 [i_0] [4U])) * (((/* implicit */unsigned int) var_3)));
                        }
                        var_29 = ((((/* implicit */_Bool) arr_35 [i_4 + 2])) && (((/* implicit */_Bool) arr_35 [i_4 - 1])));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_30 |= ((/* implicit */short) ((((/* implicit */_Bool) -2147483625)) ? (((/* implicit */unsigned long long int) var_9)) : (7811384718818075659ULL)));
                        arr_49 [i_13] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_32 [i_0] [i_1 - 2] [i_0] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2])))));
                        arr_50 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                        arr_51 [i_0] [i_0] [i_4] [(signed char)0] [i_1] &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_40 [i_4 + 1] [i_4] [i_1 + 1]))));
                    }
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    arr_54 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3456822219U)) ? (((((/* implicit */unsigned int) -1432020724)) + (1107920094U))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_0])) ? (9223090561878065152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [2LL] [i_14] [i_14])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_42 [i_0] [i_1] [i_1] [i_14] [8U]), ((short)7695))))) : (var_5)))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 2; i_16 < 11; i_16 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) arr_40 [i_15] [9U] [i_15]);
                                var_32 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (2409620316U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_14] [i_0]))))))))), ((~(((long long int) arr_33 [i_0] [(short)8] [i_14] [i_15]))))));
                            }
                        } 
                    } 
                }
                for (int i_17 = 3; i_17 < 10; i_17 += 2) 
                {
                    var_33 = ((/* implicit */unsigned short) 10635359354891475949ULL);
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        arr_69 [i_0] [i_1] [(signed char)0] [i_17] [i_18 - 1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [(unsigned char)10] [i_1 - 2] [i_17] [i_18])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_44 [i_0] [i_1] [i_1] [i_1] [(signed char)2] [i_18]))))) ? ((~(((/* implicit */int) (unsigned char)222)))) : ((~(((/* implicit */int) arr_26 [i_0] [i_1 - 2] [i_17] [i_1 - 2] [i_0]))))))));
                        var_34 = ((/* implicit */unsigned char) (-(max((838145076U), (((/* implicit */unsigned int) (short)8575))))));
                    }
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_35 *= ((/* implicit */signed char) (-(arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_0] [i_0] [i_17] [(unsigned char)9]))) > (3456822209U)))) < (((/* implicit */int) ((signed char) 1565305312272587160LL))))))));
                        var_37 |= -1333963254;
                        /* LoopSeq 1 */
                        for (short i_20 = 0; i_20 < 12; i_20 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned short) ((arr_0 [i_1 + 3]) ? (((/* implicit */int) arr_68 [i_1 - 1])) : (((/* implicit */int) arr_68 [i_1 - 1]))));
                            arr_76 [i_0] [10ULL] [i_19] [i_19] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)14)) ? (7811384718818075659ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39732)))));
                        }
                        arr_77 [i_0] [i_1 + 1] [i_17] [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) 1885346972U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)22)))));
                    }
                    arr_78 [i_0] [(signed char)2] [i_0] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)144))))));
                }
                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) arr_59 [i_0] [i_1] [i_1 + 2] [4ULL] [i_1 - 2]))));
                var_40 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)191)) >> (((((/* implicit */int) (signed char)-20)) + (40))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 838145076U)) ? (arr_27 [i_0] [i_0] [i_0] [i_1 - 3] [i_1 + 3]) : (((/* implicit */unsigned long long int) 3456822220U))))))))));
            }
        } 
    } 
    var_41 = ((/* implicit */long long int) 2409620321U);
    var_42 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (var_17))))))));
}
