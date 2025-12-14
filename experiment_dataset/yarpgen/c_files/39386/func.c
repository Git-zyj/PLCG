/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39386
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned short)3] [(unsigned short)3] [i_2] [i_2] = ((/* implicit */int) (short)31746);
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_0)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)31722)) + (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_2]))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_3))) : (((/* implicit */unsigned long long int) -4271146176038839807LL))))));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 2; i_6 < 10; i_6 += 2) 
                {
                    {
                        arr_21 [i_5] [i_4 - 1] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_1)) ? (3278333708U) : (((/* implicit */unsigned int) -1952177776)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_0 [i_4] [i_3])))))));
                        arr_22 [(_Bool)1] [i_5] [i_5] [(signed char)3] [i_5] = ((/* implicit */unsigned long long int) min((max((arr_15 [i_5] [i_6 - 2] [i_4 - 1]), (((/* implicit */unsigned char) var_14)))), ((unsigned char)252)));
                        var_16 ^= ((/* implicit */short) max((((/* implicit */long long int) arr_11 [i_4] [i_5] [i_5])), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_5] [i_6 - 2]))) : (((((/* implicit */_Bool) (signed char)-36)) ? (4271146176038839802LL) : (4271146176038839806LL)))))));
                    }
                } 
            } 
            var_17 ^= ((/* implicit */int) (+(arr_2 [i_3])));
            arr_23 [i_3] [i_4] [4U] = ((/* implicit */unsigned int) (unsigned short)32256);
            arr_24 [i_4 - 2] [(unsigned short)9] [i_3] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_18 [i_3] [i_4] [i_3] [i_4 - 2] [i_3] [i_4]))))));
        }
        for (int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_18 [7LL] [i_3] [i_7] [i_3] [(_Bool)1] [i_7])) ? (((/* implicit */int) arr_18 [i_7] [i_3] [i_7] [i_3] [i_3] [i_7])) : (((/* implicit */int) (short)31746)))), (((/* implicit */int) max((arr_18 [i_7] [i_3] [i_3] [6] [i_3] [(_Bool)0]), (arr_18 [(short)4] [(short)4] [8ULL] [i_3] [i_7] [i_7]))))));
            /* LoopSeq 2 */
            for (short i_8 = 3; i_8 < 9; i_8 += 3) 
            {
                arr_30 [i_8] [i_8] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) : (arr_17 [i_3] [i_7] [i_8] [7LL] [i_8 - 2] [7LL])))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        {
                            arr_36 [5ULL] [i_10] [i_9] [i_8] [0] [i_7] [i_3] = ((/* implicit */_Bool) arr_20 [(signed char)5] [i_8] [i_3] [i_8]);
                            var_19 ^= ((/* implicit */signed char) max(((~(((/* implicit */int) var_9)))), (((((/* implicit */int) arr_35 [i_8 - 1] [i_8 + 1] [i_8] [i_8 + 2] [i_8 + 1])) ^ (((/* implicit */int) arr_35 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_8 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 10; i_11 += 2) 
                {
                    for (long long int i_12 = 2; i_12 < 7; i_12 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */int) var_4);
                            arr_42 [i_12] [i_12] [i_8 - 3] [i_12] [10LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (arr_10 [i_12 + 4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [(signed char)10] [i_3] [i_3] [i_3] [i_3]))) : (((((((/* implicit */int) arr_6 [i_7] [i_12])) >= (((/* implicit */int) var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [i_8 - 2] [i_7]))) : (((var_4) | (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_12] [(signed char)0])))))))));
                            arr_43 [i_3] [i_3] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_3] [i_8] [i_8] [i_3])) ? (((/* implicit */int) (unsigned short)33289)) : (((/* implicit */int) arr_20 [i_12] [i_8] [i_8] [i_11 + 1])))) - (((/* implicit */int) min((arr_20 [i_12 + 2] [i_8] [i_8] [i_7]), (arr_20 [i_12] [i_8] [i_8] [i_8]))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_14 = 1; i_14 < 10; i_14 += 1) 
                {
                    arr_50 [6U] [7ULL] [i_13] [i_13] [(signed char)0] [0ULL] = ((/* implicit */int) arr_13 [(unsigned short)7] [i_7] [i_14 + 1]);
                    arr_51 [i_3] [(short)3] [(short)0] [i_13] = ((/* implicit */short) (unsigned char)248);
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13] [i_15 - 1] [i_15] [i_15] [i_15 - 1] [i_13]))) >= (arr_17 [5] [i_15 - 1] [i_13] [i_13] [i_15 - 1] [i_14 + 1])));
                        arr_54 [i_14] [i_14] [i_13] [i_13] [i_13] [10LL] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)189))));
                        arr_55 [i_15] [i_13] [i_13] [i_13] [i_3] [i_13] [i_3] = ((/* implicit */int) (-((-(3834549732U)))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_11))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_59 [i_16] [i_13] [i_3] [i_13] [i_7] [i_13] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [0U])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [1] [(unsigned char)15]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31571))) : (((var_10) >> (((-4271146176038839826LL) + (4271146176038839837LL)))))));
                        var_23 = ((/* implicit */long long int) ((signed char) (_Bool)0));
                    }
                    arr_60 [i_13] [i_7] [i_7] [i_7] = var_10;
                    var_24 -= ((/* implicit */short) var_3);
                }
                /* LoopSeq 2 */
                for (signed char i_17 = 2; i_17 < 10; i_17 += 2) 
                {
                    arr_63 [(signed char)1] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -123315686535375874LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (max((-4271146176038839807LL), (((/* implicit */long long int) arr_18 [i_17] [i_3] [4ULL] [i_7] [4ULL] [i_3]))))))) ? (((((min((((/* implicit */int) arr_61 [i_17] [i_7] [i_13] [i_17] [i_13])), (arr_29 [3] [3]))) + (2147483647))) << ((((+(((/* implicit */int) var_12)))) - (172))))) : ((~(((int) var_13))))));
                    var_25 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 19ULL)) ? (arr_16 [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (signed char)-124))))) ? (((((_Bool) var_9)) ? (max((210662990U), (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_31 [i_3] [i_7])) + (2147483647))) << (((((-4271146176038839807LL) + (4271146176038839816LL))) - (9LL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_17 + 1] [i_17 + 1] [i_17 - 2] [i_17 - 2] [i_17 - 1] [i_17 - 2] [i_17 + 1])) < (((/* implicit */int) arr_33 [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 - 2] [i_17 - 2] [i_17 + 1]))))))));
                }
                for (unsigned int i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 1; i_19 < 7; i_19 += 1) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_19 + 4] [i_19 + 2] [i_19] [(signed char)7] [i_19 + 4])) ? (((((/* implicit */int) arr_35 [i_19 + 4] [i_19 + 2] [3LL] [i_19] [i_19 + 4])) - (((/* implicit */int) arr_35 [i_19 + 4] [i_19 + 2] [9LL] [i_19] [i_19 + 4])))) : (((/* implicit */int) min((arr_35 [i_19 + 4] [i_19 + 2] [i_19] [i_19 + 2] [i_19 + 4]), (arr_35 [i_19 + 4] [i_19 + 2] [i_19 + 4] [(unsigned char)7] [i_19 + 4]))))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((~(var_7))), (((/* implicit */unsigned int) arr_34 [i_19 + 3] [i_19 + 4] [i_19 + 2] [i_3] [8U]))))) % (max((((((/* implicit */_Bool) 917504)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12028))) : (0ULL))), (((/* implicit */unsigned long long int) max((arr_52 [(short)6] [i_7] [i_13] [i_18]), (((/* implicit */int) (short)29980)))))))));
                    }
                    arr_70 [i_3] [i_7] [i_13] [i_18] = ((/* implicit */unsigned char) ((min((arr_6 [i_3] [i_13]), (arr_6 [i_3] [i_13]))) ? (((/* implicit */int) ((arr_6 [i_13] [i_13]) || (arr_6 [i_13] [i_13])))) : ((-(((/* implicit */int) arr_6 [i_3] [i_13]))))));
                    arr_71 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_13])), (arr_37 [i_7]))))) | (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)123))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_47 [i_3] [i_7] [9ULL] [i_18])))) : (((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(_Bool)0] [i_3] [i_7] [i_3] [i_3])))))))));
                }
            }
            arr_72 [1U] [i_7] [9U] = min((-4271146176038839807LL), (((/* implicit */long long int) ((((/* implicit */int) max((arr_5 [i_3] [16ULL] [i_7]), (((/* implicit */unsigned char) (signed char)-124))))) != (((/* implicit */int) arr_27 [(_Bool)1] [6LL] [i_7]))))));
            /* LoopSeq 1 */
            for (signed char i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_21 = 2; i_21 < 10; i_21 += 4) 
                {
                    var_28 = ((/* implicit */int) ((((unsigned int) (_Bool)0)) - (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)53508)))))));
                    arr_80 [i_21] [i_20] [i_3] [i_3] = ((/* implicit */unsigned char) arr_58 [(signed char)4] [i_21 - 1] [i_21 + 1] [i_21 + 1] [i_21] [i_21] [(signed char)4]);
                }
                arr_81 [i_3] [8U] [8U] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)12050)), (((((-4346354958045542429LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)103))))) ? (max((-189857929), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)41478))))));
                var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31))));
                arr_82 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_7]))) - (max((((/* implicit */unsigned int) var_6)), (arr_25 [i_3] [i_7] [i_20]))))))));
            }
        }
        /* vectorizable */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_86 [i_3] [i_22] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_22])) ? (((/* implicit */int) arr_18 [4LL] [i_22] [5] [(_Bool)1] [i_22] [i_22])) : (1072693248)));
            arr_87 [i_22] = ((/* implicit */_Bool) arr_35 [i_22] [i_22] [(signed char)8] [i_3] [i_3]);
        }
        var_30 = ((/* implicit */signed char) ((long long int) (signed char)-103));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_23 = 0; i_23 < 11; i_23 += 4) 
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_61 [i_3] [(unsigned char)4] [i_3] [4U] [i_23])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) -4271146176038839802LL)) ? (var_8) : (((/* implicit */int) var_11))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_24 = 4; i_24 < 9; i_24 += 1) 
            {
                arr_93 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned char) arr_47 [i_3] [i_23] [i_24] [i_24 - 2]));
                /* LoopSeq 2 */
                for (int i_25 = 1; i_25 < 7; i_25 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_26 = 1; i_26 < 10; i_26 += 3) 
                    {
                        arr_100 [i_25] [i_24 - 3] [(_Bool)1] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_3] [i_3])) >> (((((unsigned long long int) (unsigned short)24060)) - (24034ULL)))));
                        arr_101 [3] [i_23] [i_23] [i_23] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-93)) || (((/* implicit */_Bool) (short)-29672))));
                        arr_102 [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) 14706144278278597437ULL)) ? (2466736518U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_25 + 3] [i_25] [i_25 - 1] [i_25 + 1])))));
                        var_32 = ((/* implicit */short) (+(((/* implicit */int) ((short) var_6)))));
                    }
                    arr_103 [i_25] [i_25] [i_25] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_66 [i_3] [i_23] [i_23] [i_3]))));
                }
                for (unsigned char i_27 = 1; i_27 < 10; i_27 += 4) 
                {
                    var_33 |= ((/* implicit */int) (+(((long long int) -5263257580660376617LL))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_28 = 2; i_28 < 8; i_28 += 2) /* same iter space */
                    {
                        var_34 = var_5;
                        arr_110 [(short)0] [i_27 - 1] [1] [i_24] [(short)0] [i_3] = ((/* implicit */int) arr_28 [2LL] [(signed char)0]);
                        var_35 ^= ((/* implicit */unsigned short) arr_88 [i_3]);
                        var_36 = ((((/* implicit */int) (unsigned char)109)) >> (((13343438922352657938ULL) - (13343438922352657913ULL))));
                    }
                    for (unsigned long long int i_29 = 2; i_29 < 8; i_29 += 2) /* same iter space */
                    {
                        arr_113 [i_3] [(unsigned char)9] [i_3] [i_3] [(_Bool)1] [i_3] [i_3] = ((((/* implicit */_Bool) arr_107 [i_3] [i_24 + 1] [i_27 - 1] [i_29 + 1])) ? (((((/* implicit */_Bool) (short)-29681)) ? (((/* implicit */long long int) ((/* implicit */int) (short)768))) : (4346354958045542429LL))) : (((/* implicit */long long int) arr_64 [i_27 - 1] [i_27 + 1] [i_27 - 1])));
                        arr_114 [i_29] [i_27] [i_3] [i_3] = ((/* implicit */unsigned char) ((signed char) (unsigned char)245));
                    }
                    arr_115 [i_3] [(unsigned short)0] [i_27] [i_3] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_91 [9ULL] [i_23] [i_3]))))) ? (12937298727693954305ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_66 [i_3] [i_3] [i_3] [i_3])))))));
                }
                var_37 = ((/* implicit */short) ((signed char) arr_31 [i_24 - 2] [i_24 + 1]));
                var_38 -= arr_28 [i_24] [i_24];
            }
        }
        arr_116 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3] [i_3] [(unsigned char)0] [i_3] [i_3] [i_3])) * ((+(((/* implicit */int) arr_78 [i_3] [i_3]))))));
    }
}
