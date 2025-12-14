/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243360
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)64)) * (((/* implicit */int) (_Bool)0))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) < (arr_2 [i_0])))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (_Bool)1))));
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) 1696843040);
            var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_0 [i_1]) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) >= (min((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) arr_1 [i_0])))))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 6481653646681283351ULL)) ? (3873466369U) : (3873466369U)))))) ? (((((/* implicit */int) (unsigned short)65472)) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_1]))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) (_Bool)1));
        var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_3 [i_0] [(unsigned char)3])))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : ((~(arr_2 [i_0])))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        arr_11 [(short)8] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)32256)) ? (2983728884U) : (3221225472U))), (((/* implicit */unsigned int) ((arr_9 [i_2 + 1]) ^ (arr_9 [i_2 + 1]))))));
        var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2 + 1]))))) : (arr_10 [i_2] [i_2 + 1])));
        var_15 ^= ((/* implicit */_Bool) arr_9 [i_2 - 1]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_16 |= ((unsigned char) arr_12 [i_3]);
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            for (unsigned short i_5 = 2; i_5 < 21; i_5 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) var_3)) >= (arr_16 [i_4] [i_4]))), ((_Bool)1)));
                        var_18 = ((/* implicit */long long int) min((((((/* implicit */int) max((((/* implicit */unsigned short) arr_20 [i_3] [i_4] [i_4] [i_6])), (arr_17 [i_4] [i_4])))) % (((((/* implicit */_Bool) var_5)) ? (arr_23 [i_3] [i_3] [i_4] [i_3]) : (((/* implicit */int) arr_15 [i_3] [i_4])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-2368)), (421500927U)))))))));
                        var_19 = ((/* implicit */unsigned long long int) max((arr_22 [i_5] [i_5 - 2] [i_4] [i_5 - 2] [i_5 - 2]), (min((arr_22 [i_5] [i_5 + 1] [i_4] [i_5 + 1] [i_5 + 1]), (arr_22 [i_5] [i_5 - 2] [i_4] [i_5] [i_5 - 1])))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (-1149961654849686979LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_4]))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            arr_30 [i_4] = ((/* implicit */signed char) (!(arr_15 [i_4 - 1] [i_4])));
                            arr_31 [i_3] [i_4 - 1] [i_4] [i_3] [(unsigned short)1] [i_7] [(unsigned short)3] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_23 [i_8] [i_4] [i_4] [i_3])) ? (arr_16 [i_4] [i_5 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765))))));
                        }
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~(((((/* implicit */int) var_0)) + (((/* implicit */int) var_0)))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            arr_38 [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_4 + 1] [i_5 - 1] [(signed char)17])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((arr_12 [i_3]) >> (((var_7) + (2822418192419417377LL))))))));
                            arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((arr_21 [i_3] [i_3]) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_5] [i_4] [i_10] [i_3])) ? (((/* implicit */int) arr_17 [14ULL] [i_4])) : (((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) arr_33 [i_4 + 1] [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 2])) ? (min((((/* implicit */long long int) var_1)), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                            arr_40 [i_3] [i_3] [i_4] [i_5] [i_9] [i_9] [i_9] |= ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_5 - 1] [i_9] [i_5 + 1] [i_3] [i_10] [i_9] [i_3]))) * (arr_22 [i_5 - 2] [i_5 - 1] [i_9] [i_5 + 1] [i_4 + 1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_5 - 2] [i_4] [i_9] [i_3] [i_5 + 1] [i_10] [i_9])))))));
                            var_22 = ((arr_21 [i_4 + 1] [i_4 + 1]) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_27 [i_4 + 1] [i_5 + 1] [i_10] [i_4] [i_10] [(_Bool)1])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)32256)) <= (((/* implicit */int) min((arr_18 [i_5 + 1] [i_4] [i_3]), (var_8))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            arr_43 [i_4] = ((/* implicit */long long int) var_5);
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_42 [i_5] [i_9]))));
                            arr_44 [i_11] [i_9] [i_3] [i_4] [i_3] |= ((arr_18 [i_4 + 1] [i_11] [i_9]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4 - 1] [i_5] [i_11]))));
                        }
                        for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            arr_47 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_4 - 1] [i_4] [i_4] [i_4] [i_4 + 1] [(_Bool)1])) ? (2519234330U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5] [i_5 + 1] [i_5 - 2] [i_4]))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 402653184U)) ? (((/* implicit */unsigned long long int) -8565116897423682462LL)) : (0ULL)));
                            arr_48 [i_3] [i_3] [i_5 - 2] [i_4] [i_12] = ((/* implicit */_Bool) (+((-(min((((/* implicit */int) var_5)), (arr_23 [i_3] [i_3] [i_4] [i_3])))))));
                            var_25 |= ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned long long int) 2147483647))));
                        }
                        arr_49 [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) (~(var_3)))) + (max((((/* implicit */unsigned long long int) arr_28 [i_3] [i_4] [i_4 - 1] [i_4] [i_5 - 1] [i_9] [i_4])), (arr_36 [i_3] [i_3] [i_3] [i_3] [i_4] [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [i_4])))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
        arr_50 [i_3] = ((/* implicit */_Bool) arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
        var_27 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((3892314112U) << (((3873466368U) - (3873466359U)))))) + (max((-8565116897423682462LL), (((/* implicit */long long int) 3873466369U))))));
        var_28 = (_Bool)1;
    }
    var_29 |= ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
    {
        arr_54 [4ULL] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_13] [i_13] [i_13] [0LL] [i_13] [i_13])) <= (((/* implicit */int) (_Bool)1))));
        var_30 = ((/* implicit */short) (_Bool)1);
        var_31 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_33 [i_13] [i_13] [i_13] [i_13] [i_13]))));
    }
    for (int i_14 = 1; i_14 < 13; i_14 += 1) 
    {
        arr_58 [i_14] [i_14 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3410968438661754751LL)) ? (-8565116897423682462LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_14 - 1] [i_14] [10U] [i_16])) | (((/* implicit */int) arr_34 [i_14 + 3] [i_14 + 2] [i_14 + 1] [i_16]))))), (((((/* implicit */_Bool) arr_34 [i_14 + 3] [i_14] [i_14 - 1] [i_16])) ? (35184372072448ULL) : (((/* implicit */unsigned long long int) arr_55 [i_14 + 4]))))));
                        var_33 ^= ((/* implicit */unsigned int) arr_36 [i_17] [i_14] [i_16] [i_16] [i_16] [i_14] [i_14]);
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_16 [i_16] [i_16]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_14 + 4] [i_16])))))) ? (((((/* implicit */_Bool) arr_63 [i_14 + 3] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_63 [i_14 - 1] [i_17]))) : (((/* implicit */long long int) (-(arr_24 [i_14 + 2] [i_14 + 4] [i_14 + 2] [i_14 - 1])))))))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_14])) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-16)), ((unsigned short)33279))))));
        var_36 = ((/* implicit */unsigned char) 4294967295U);
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_14 [i_14])) + ((-2147483647 - 1)))), (arr_55 [i_14 + 2])))) ? (((((/* implicit */_Bool) arr_16 [4ULL] [i_14])) ? (((/* implicit */int) arr_59 [i_14 + 2] [i_14 - 1])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (_Bool)1))));
    }
    var_38 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (1073741838U)))) >= (((((/* implicit */int) var_0)) % (((/* implicit */int) var_8)))))))) >= (var_4)));
}
