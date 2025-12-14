/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247189
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
    var_20 ^= ((/* implicit */unsigned long long int) ((signed char) var_1));
    var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) max(((~(var_4))), (((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0] [i_1])))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (arr_5 [i_1 - 2] [i_1 + 1])))) + ((+(((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1]))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_2] [i_0]), (((/* implicit */unsigned char) max((arr_1 [i_0] [i_1 - 2]), (var_13)))))))) >= (((((/* implicit */_Bool) 9589496802183734533ULL)) ? (((((/* implicit */_Bool) var_16)) ? (arr_0 [i_0]) : (9589496802183734547ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max(((+(min((3891914737U), (((/* implicit */unsigned int) var_14)))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_13)), (max((((/* implicit */unsigned char) var_12)), (var_11)))))))))));
                                arr_16 [i_2] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_21 [1ULL] [i_2] [i_1 + 1] [(unsigned char)2] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]);
                                var_25 = ((/* implicit */_Bool) 3891914708U);
                                var_26 = (signed char)7;
                            }
                        } 
                    } 
                }
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 2])) ? (((long long int) 3621911474U)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8))))));
                    arr_26 [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                    var_28 = ((/* implicit */_Bool) arr_10 [i_7] [7U] [i_7] [(unsigned short)7]);
                }
                for (signed char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) var_15);
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-71)) ? (7535548398136033796ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))))))));
                                var_31 = (+(((/* implicit */int) var_8)));
                                var_32 = ((/* implicit */unsigned long long int) ((short) (+(10650169427096940165ULL))));
                                arr_33 [i_0] [i_1 - 1] [i_0] [(unsigned short)2] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 10221153576374153648ULL)) ? (3891914737U) : (arr_15 [i_0] [i_1 - 2] [i_0] [i_9] [i_10] [i_10])));
                            }
                        } 
                    } 
                }
                for (signed char i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 3; i_12 < 10; i_12 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 3; i_13 < 8; i_13 += 3) 
                        {
                            arr_42 [i_0] [i_1] [(signed char)0] [i_11] [i_12] [i_13 + 2] [i_1] = ((/* implicit */signed char) var_13);
                            var_33 = ((/* implicit */unsigned long long int) ((signed char) (-(-1066199502))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_34 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_41 [i_0] [4U] [i_11] [i_14])), (7535548398136033796ULL)))) ? (403052558U) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-16)))))))));
                            arr_45 [i_1 + 1] = (~(arr_0 [i_11]));
                            var_35 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 12112400957785615009ULL)) ? (arr_18 [i_1] [i_1 - 1] [i_1] [i_1 - 2] [i_1] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((unsigned char) arr_18 [i_1] [5U] [i_1] [i_1 - 2] [i_1 - 1] [(signed char)6])))));
                        }
                        arr_46 [i_12 - 3] = ((((/* implicit */_Bool) (~(arr_22 [i_12] [i_1 + 1] [i_1] [i_12 + 1])))) ? (max((var_1), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [(unsigned short)10] [(signed char)2] [i_12 - 3] [i_12])))) : (var_1));
                    }
                    arr_47 [i_11] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) 10331463101596490168ULL)))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_16 = 3; i_16 < 7; i_16 += 3) 
        {
            var_36 = ((unsigned long long int) arr_3 [i_16 + 3] [i_16]);
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    {
                        var_37 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_15] [i_18])) ? (((/* implicit */int) arr_8 [(_Bool)1])) : (((/* implicit */int) var_19))))) ^ (var_1));
                        arr_58 [i_15] [i_15] [i_16] [i_15] = ((/* implicit */unsigned short) var_9);
                        arr_59 [i_15] [i_16] [i_17] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [2ULL] [i_16 + 3] [i_16 - 1] [i_16 - 1])) ? ((-(((/* implicit */int) (signed char)3)))) : (((/* implicit */int) arr_50 [i_16 - 3] [5ULL]))));
                        var_38 = ((/* implicit */_Bool) ((arr_36 [i_15] [i_15] [i_17] [i_18]) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    }
                } 
            } 
            arr_60 [i_15] [(signed char)3] = ((/* implicit */_Bool) (unsigned char)31);
            /* LoopSeq 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (408568748U)));
                /* LoopNest 2 */
                for (unsigned int i_20 = 2; i_20 < 9; i_20 += 3) 
                {
                    for (unsigned short i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        {
                            arr_69 [i_21] [i_16 - 1] [2] [i_20] [i_21] = ((/* implicit */short) ((((/* implicit */int) (signed char)-11)) < ((-(((/* implicit */int) arr_35 [i_15] [i_16 + 1]))))));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_16 - 3] [i_16 - 3] [i_20 - 2] [i_20 - 2] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_37 [7U])) > (((/* implicit */int) (_Bool)1)))))) : (arr_0 [i_19])));
                            var_41 ^= ((/* implicit */_Bool) arr_2 [i_15] [i_15]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 3) 
                    {
                        {
                            arr_77 [i_15] [(short)3] [i_19] [i_22] [i_23] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13748542968102377722ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_16] [i_16] [i_16] [i_16 - 2] [i_16] [i_16 + 3]))) : (7535548398136033778ULL)));
                            arr_78 [i_15] [i_16 - 3] [i_19] [i_22] [i_23] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_68 [i_15] [i_15] [i_19] [(unsigned short)6] [i_19] [(unsigned short)6] [i_19])) ? (arr_70 [4ULL] [i_22] [i_22] [i_22] [i_22] [i_22]) : (5829926608184394158ULL))));
                            arr_79 [i_16 - 1] [i_16] = ((/* implicit */_Bool) arr_63 [i_23] [i_22] [(signed char)9] [i_19] [i_16 + 1] [i_15]);
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_15] [i_16 - 1] [i_16] [(unsigned char)0] [i_19] [i_22] [(unsigned char)0]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
                            var_43 = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) (unsigned char)240)))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((unsigned char) arr_55 [i_16] [i_16 - 3] [i_16] [i_16 + 2])))));
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_39 [i_16] [i_16] [i_16] [i_15] [i_15]))))))));
                var_46 = arr_61 [i_15] [i_16 - 3];
                /* LoopNest 2 */
                for (unsigned long long int i_25 = 0; i_25 < 10; i_25 += 3) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned long long int) (+(arr_15 [i_26] [i_16 - 3] [i_16] [i_16 + 1] [i_16 - 1] [i_15])));
                            var_48 = (~(((/* implicit */int) ((signed char) arr_7 [i_15] [i_16] [(unsigned short)0] [i_26]))));
                        }
                    } 
                } 
                arr_89 [i_15] [i_24] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)11))));
            }
            for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_28 = 0; i_28 < 10; i_28 += 3) 
                {
                    var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((unsigned long long int) var_4)))));
                    var_50 = ((/* implicit */short) ((arr_80 [i_16 - 2]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (2634354536U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))))))));
                    var_51 = ((/* implicit */signed char) var_0);
                }
                arr_94 [i_15] [i_16] [i_27] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)253));
                var_52 ^= ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_15] [i_15] [i_15])))));
                var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-3399354455194909960LL)))) ? (((/* implicit */unsigned long long int) 2256512297U)) : (arr_90 [i_16 + 1] [i_16 - 2])));
                arr_95 [i_27] [i_16] [i_16 - 3] [i_15] = ((/* implicit */short) arr_13 [i_15] [i_16 + 1] [i_16 + 1] [i_27]);
            }
        }
        for (unsigned long long int i_29 = 0; i_29 < 10; i_29 += 3) 
        {
            var_54 = ((/* implicit */signed char) arr_7 [i_15] [i_15] [7LL] [i_15]);
            /* LoopNest 2 */
            for (signed char i_30 = 0; i_30 < 10; i_30 += 3) 
            {
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    {
                        var_55 = ((/* implicit */_Bool) var_7);
                        var_56 = ((/* implicit */unsigned short) ((((var_0) && (((/* implicit */_Bool) (signed char)0)))) ? (((((/* implicit */_Bool) 14665363712689525338ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)69)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12)))))));
                        /* LoopSeq 2 */
                        for (short i_32 = 0; i_32 < 10; i_32 += 3) 
                        {
                            arr_106 [i_32] [i_32] [i_32] [i_32] [i_32] [i_32] = ((/* implicit */int) var_13);
                            var_57 = ((/* implicit */unsigned long long int) (unsigned short)1834);
                            arr_107 [i_15] [i_32] [i_30] [i_31] [i_15] [i_31] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) arr_54 [(unsigned char)4] [(unsigned char)4] [i_30] [i_30]))));
                        }
                        for (unsigned long long int i_33 = 3; i_33 < 8; i_33 += 3) 
                        {
                            arr_111 [i_30] [i_15] [i_15] [i_33] [i_33] [i_29] = ((/* implicit */_Bool) ((unsigned int) arr_76 [i_33 - 1] [i_33] [i_33 + 2]));
                            var_58 = ((/* implicit */unsigned long long int) (unsigned short)32973);
                            var_59 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_36 [i_33] [(signed char)7] [(signed char)7] [i_33])) ? (var_1) : (var_17))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-3399354455194909960LL))))));
                        }
                    }
                } 
            } 
        }
        var_60 = ((/* implicit */_Bool) 14655686546474301254ULL);
        var_61 = ((/* implicit */unsigned long long int) (unsigned short)11946);
    }
}
