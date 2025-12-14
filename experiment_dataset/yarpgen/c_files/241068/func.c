/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241068
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
    var_14 ^= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) var_11)), (max((((/* implicit */unsigned int) var_0)), (var_9))))), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) -616156977)), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_3)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)5108)) : (((/* implicit */int) arr_1 [i_0]))))))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (var_3)))));
        arr_4 [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [8U]))) : (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned char) var_8);
                var_16 = ((/* implicit */unsigned char) max((var_16), (arr_8 [i_2] [i_1] [i_0])));
            }
            for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) /* same iter space */
            {
                var_17 -= ((/* implicit */signed char) 802262451302098096ULL);
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [(short)2]))))) != (((/* implicit */int) var_7))));
            }
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        }
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
        {
            arr_19 [i_0 + 2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_11)) : (arr_10 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_4])))) ? (((8LL) * (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) (-(1957715017U))))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        arr_27 [3] = ((/* implicit */int) (unsigned short)3);
                        var_19 = ((/* implicit */short) ((((/* implicit */int) var_1)) + (((int) var_7))));
                        arr_28 [i_0 + 1] [i_4] [i_5] [i_6] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) min((18U), (((/* implicit */unsigned int) arr_9 [i_0 + 1] [i_5] [(unsigned short)14]))))) ? (((((/* implicit */_Bool) arr_10 [(short)4] [(_Bool)1] [(unsigned char)14] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) min((var_6), (((/* implicit */short) var_2)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_7 = 4; i_7 < 12; i_7 += 2) 
                        {
                            arr_31 [(unsigned char)11] [(signed char)9] [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_7] [i_5]))));
                            arr_32 [i_0 - 3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) arr_1 [i_0]);
                            arr_33 [i_0] [i_4] [i_6] [i_6] [i_6] [i_6] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) (unsigned short)44142)) : (((/* implicit */int) (short)8)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (var_5)));
                            var_21 = ((/* implicit */signed char) 2U);
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((unsigned char) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                            arr_37 [i_0 - 1] [i_4] [i_5] [i_5] [i_8] [i_5] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_16 [i_8]))))));
                            var_23 = ((/* implicit */int) var_6);
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                arr_40 [i_0] = ((/* implicit */short) var_2);
                var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_9] [i_4] [i_9])) ? (((/* implicit */int) arr_12 [i_9] [i_4] [i_0 - 2])) : (((/* implicit */int) arr_12 [i_0 - 3] [i_4] [i_9]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 + 2] [i_4] [i_9])) ? (((/* implicit */int) arr_12 [i_0] [i_4] [i_9])) : (((/* implicit */int) (_Bool)1)))))));
                arr_41 [i_0] [i_4] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) arr_36 [i_0 - 1] [i_4] [i_4] [i_0] [i_0])) > (((/* implicit */int) var_4))))) : (((/* implicit */int) ((4294967278U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) (unsigned short)62168);
                            arr_48 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) var_6))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_24 [i_11] [(unsigned short)0] [8LL] [i_0])) : (11639877850781671523ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)118)), (var_6)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (arr_42 [i_0 - 1] [i_0 + 1] [i_0 + 2]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    var_26 = ((/* implicit */_Bool) var_4);
                    arr_53 [i_12] [(unsigned char)0] [(unsigned char)0] [i_12] = ((/* implicit */signed char) var_12);
                    var_27 = ((/* implicit */long long int) var_4);
                }
                for (int i_13 = 1; i_13 < 13; i_13 += 1) 
                {
                    arr_56 [i_0] [i_4] [i_9] [i_13] = ((/* implicit */short) var_3);
                    arr_57 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((var_8), (((/* implicit */unsigned int) var_13))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) || (((((/* implicit */_Bool) arr_38 [i_4] [i_9])) || (((/* implicit */_Bool) var_10))))))) : ((+(((/* implicit */int) var_7))))));
                    arr_58 [i_0 - 1] [i_13] [i_4] [i_9] [i_13] [i_13] = ((/* implicit */unsigned long long int) var_0);
                }
            }
            arr_59 [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_0 + 1] [i_0 - 3])) * (((/* implicit */int) arr_39 [i_0 + 1]))))) % (var_9)));
            arr_60 [i_0 + 2] = var_8;
        }
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [i_0] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_20 [(short)9] [i_0 - 3] [i_0]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [(short)8] [i_14])) | (((/* implicit */int) arr_44 [i_0] [i_14])))))));
            arr_65 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_8 [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_14] [i_14])) : (((/* implicit */int) arr_8 [i_14] [i_14] [i_0 - 2])))), (min((((/* implicit */int) arr_36 [i_0] [12U] [(unsigned char)4] [i_14] [i_14])), (arr_54 [i_0 + 1] [(signed char)0] [i_14] [i_14])))));
        }
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
        {
            arr_68 [4LL] [i_0] &= ((/* implicit */_Bool) var_4);
            arr_69 [i_15] [i_0] [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)85))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_15]))) : (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_15])))))));
            arr_70 [i_15] [i_15] [i_0 + 2] = ((/* implicit */short) arr_43 [i_0] [i_15] [i_0]);
        }
        var_29 = ((/* implicit */_Bool) max((((arr_55 [i_0 - 1] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_3))));
        arr_71 [i_0] = ((/* implicit */signed char) arr_21 [i_0] [i_0]);
    }
    var_30 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65527))));
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_5)) * (((((/* implicit */int) (short)8)) >> (((9150688621513011879ULL) - (9150688621513011868ULL)))))))));
    var_32 = ((/* implicit */_Bool) var_3);
}
