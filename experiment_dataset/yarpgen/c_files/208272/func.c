/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208272
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2 + 1])) ? (((/* implicit */int) ((-358353442) >= (((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */int) ((unsigned char) var_12)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_1 - 1])) | (var_10))))) : (((/* implicit */int) arr_0 [i_0 + 2] [i_2]))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    arr_11 [i_0 + 2] [i_1] [i_0 + 2] [i_2 - 1] [i_3] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2] [i_2 - 1])) ? (((((/* implicit */int) arr_7 [i_2 - 3] [i_1] [i_0 - 2])) * (((/* implicit */int) arr_10 [i_1] [i_2 - 4] [i_3])))) : (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (short)9359)) : (((/* implicit */int) (unsigned short)4441)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 + 1])) * (((/* implicit */int) arr_7 [(short)1] [i_0 - 2] [i_0]))));
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_2] [i_4]))))) ? (((/* implicit */int) ((signed char) var_2))) : (((((/* implicit */int) arr_12 [i_0] [i_4] [i_2] [i_3] [(unsigned short)11])) << (((((/* implicit */int) var_1)) - (54))))));
                        arr_16 [i_0 - 2] [i_0 - 1] [(signed char)0] [i_0] = ((/* implicit */short) var_4);
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_17 ^= ((/* implicit */signed char) ((short) arr_13 [i_3] [i_2 + 1] [i_1] [i_0] [i_0 - 2] [i_0]));
                        arr_19 [2ULL] [i_3] [(short)10] [(_Bool)1] [i_0 - 1] = ((/* implicit */_Bool) (~(3006585218U)));
                        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_1] [i_1 + 3] [i_1 + 3])) : ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_2 - 3]))))));
                        var_19 = ((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [i_1 + 1] [(short)3]);
                    }
                    var_20 = (~(max((((((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [(signed char)7] [i_3])) % (((/* implicit */int) (signed char)-43)))), (((/* implicit */int) ((short) 5234274974081633337ULL))))));
                }
                for (long long int i_6 = 2; i_6 < 12; i_6 += 3) 
                {
                    arr_22 [(unsigned short)0] [i_1] = ((signed char) ((signed char) arr_5 [(_Bool)1] [i_0] [i_1 + 2] [i_0]));
                    arr_23 [i_1 + 2] [i_1] [i_2] [i_6] [i_2 - 4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0 - 1] [(_Bool)1])), (((((/* implicit */_Bool) arr_13 [i_6] [i_2 - 3] [i_2] [(signed char)10] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_4 [i_1 + 2]))))) : (13212469099627918259ULL)))));
                }
                arr_24 [i_0] [i_1 + 1] [i_2] = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) 17LL)) ? (((/* implicit */int) (signed char)42)) : (var_12))))) != (((/* implicit */int) ((signed char) ((var_8) ^ (((/* implicit */int) (signed char)0))))))));
                arr_25 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_7 [i_2 - 3] [i_2 - 2] [i_2 - 4]))) - (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 2] [i_2 + 1]))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) min((arr_18 [i_2 - 1] [i_2] [i_1 + 1] [i_0] [i_0]), ((short)25397)))) : (((int) arr_2 [i_0] [i_2]))))))))));
            }
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (_Bool)1))));
            var_23 ^= ((/* implicit */int) max((((unsigned short) max((arr_17 [i_1] [i_1 + 3] [i_1] [(_Bool)1] [i_0]), (((/* implicit */short) var_0))))), (arr_12 [(signed char)12] [i_0 + 2] [(signed char)12] [i_0 + 1] [i_1 + 1])));
            var_24 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_1] [i_1 + 1])) ? (arr_13 [(_Bool)1] [i_0] [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [8ULL] [i_0] [i_0] [(unsigned char)6] [i_1 - 1]))))), (((/* implicit */unsigned int) ((int) arr_9 [2ULL] [i_1 + 1] [i_1 - 1]))))) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6)) % (((/* implicit */int) (signed char)-43)))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            arr_29 [i_7] = ((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_7] [i_7] [i_0] [i_0]);
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(short)3] [i_0] [i_7] [i_7] [i_8]))))) % (((/* implicit */int) ((arr_2 [i_7] [i_8]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_7] [i_8])))))))))));
                var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned short)61091)))));
                var_27 = ((/* implicit */unsigned long long int) var_13);
            }
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        arr_41 [i_7] [i_9] [(unsigned short)4] [i_9] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_37 [(signed char)2]))));
                        arr_42 [i_0] [i_7] [i_9] [i_10] [i_7] [i_11] [(_Bool)0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-9))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        arr_45 [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)105)) : (-1)));
                        var_28 = ((/* implicit */unsigned short) ((signed char) arr_27 [i_0 - 2] [i_0 + 2]));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((arr_13 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0 - 2]) + (arr_13 [i_0] [i_0 - 1] [i_0] [(unsigned short)10] [i_0] [i_0 - 2]))))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 12; i_13 += 4) 
                    {
                        arr_48 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_7] [i_0 - 2] = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12405)) ? (((/* implicit */int) arr_39 [i_0 - 1] [i_0] [i_0] [i_7] [i_7] [i_10] [i_13 + 1])) : (((/* implicit */int) (short)15789))))) / (arr_21 [i_13] [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-4248), (arr_18 [i_13] [i_13 + 1] [i_13 - 1] [i_13] [i_13 - 1])))))));
                        arr_49 [i_7] [i_9] [i_7] [i_7] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) arr_34 [i_0 + 2] [i_7] [i_9])) * (0LL)))) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) arr_4 [i_0]))))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))) : (56993885287740420ULL)))))));
                    }
                    arr_50 [(short)0] &= ((/* implicit */int) (short)511);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_14 = 2; i_14 < 11; i_14 += 3) 
                    {
                        var_30 += ((/* implicit */unsigned short) ((((arr_13 [(short)1] [i_7] [i_7] [i_9] [i_10] [3ULL]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_4 [i_14])) : (((/* implicit */int) arr_12 [i_14 + 2] [i_14] [i_14] [i_14 - 2] [(unsigned short)10]))));
                        arr_54 [i_7] = ((/* implicit */_Bool) arr_47 [i_7] [i_7]);
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (short)0))));
                    }
                    for (unsigned long long int i_15 = 1; i_15 < 11; i_15 += 4) 
                    {
                        arr_57 [i_15 + 2] [i_7] [i_9] [i_9] [i_7] [i_0] = ((/* implicit */unsigned char) arr_51 [(short)7] [i_10] [8LL] [4] [i_0 - 1]);
                        arr_58 [i_0] [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_35 [(unsigned short)2] [i_7] [i_7] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0 + 1] [i_7] [i_9] [i_0 - 2]))) : (((((/* implicit */_Bool) arr_46 [i_0] [i_7] [i_9] [i_7] [i_15] [(short)9] [(unsigned short)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0]))) : (arr_13 [(short)8] [i_7] [i_9] [i_10] [i_15] [i_10])))))) > (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_13))))) + (arr_26 [i_7])))));
                    }
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_0 + 1]))) : (arr_2 [i_0 + 2] [i_0])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [11ULL] [i_7] [i_9]))));
                }
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) arr_27 [i_0 - 2] [i_7]))));
                arr_59 [i_0 - 1] [i_7] [i_7] [i_0 - 1] = ((/* implicit */long long int) var_14);
            }
        }
        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
        {
            var_34 = ((/* implicit */unsigned char) (_Bool)1);
            var_35 = ((/* implicit */unsigned short) min((arr_40 [i_0] [i_0] [i_16]), (arr_52 [i_0])));
            arr_62 [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [(signed char)4] [i_0 - 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (arr_31 [i_0 + 1] [(short)10] [i_16])))) : (((/* implicit */int) arr_31 [i_0 - 1] [(unsigned short)8] [i_16]))));
            var_36 = ((/* implicit */unsigned int) arr_51 [i_0] [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2]);
        }
    }
    var_37 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) ((unsigned short) var_3))) ^ (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))));
}
