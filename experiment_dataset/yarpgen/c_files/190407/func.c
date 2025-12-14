/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190407
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */_Bool) arr_0 [0ULL])) ? (((/* implicit */int) arr_1 [(signed char)10])) : (((/* implicit */int) (unsigned char)108)))) % ((+(((/* implicit */int) arr_1 [(_Bool)1]))))))))));
        var_20 = ((/* implicit */short) ((unsigned int) min((((-4672621438090075254LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) arr_0 [i_0])))));
        var_21 = ((/* implicit */_Bool) ((signed char) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_0)))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_4 [i_1] [(short)8] = ((/* implicit */signed char) ((unsigned short) (-(((((/* implicit */int) (signed char)65)) / (((/* implicit */int) arr_2 [i_1])))))));
        arr_5 [i_1] [(signed char)9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (min((((/* implicit */int) (signed char)125)), (arr_3 [i_1]))) : (((arr_3 [i_1]) / (((/* implicit */int) arr_2 [i_1])))))) + (max((arr_3 [i_1]), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_1]))))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (((_Bool)0) ? ((-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_6 [i_1] [i_2]))))));
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */int) (((~(var_13))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_1]))))));
        }
        for (signed char i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
        {
            arr_12 [i_1] = ((/* implicit */_Bool) (signed char)-2);
            arr_13 [i_1] = ((/* implicit */unsigned short) (-(((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_3])) ? (701860216507248865ULL) : (((/* implicit */unsigned long long int) arr_7 [i_1])))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_4]))) < (3378599922U))) ? (((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_3 + 1]))))) | ((~(-5913395140121745312LL))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_10 [i_3] [i_1])) : (((/* implicit */int) arr_2 [i_3 + 1])))))))));
                var_23 = ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) arr_6 [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_3 + 1] [7ULL] [7ULL]))) : (0ULL)))))));
            }
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                arr_20 [i_1] [i_3] [8U] = arr_17 [i_1] [i_3 - 1] [i_3 - 1] [i_3 + 1];
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((signed char) (~(((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */short) (unsigned char)0)))))))))));
            }
            var_25 ^= ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_1] [i_1])), (-2088499242)))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) min(((unsigned char)53), (arr_18 [i_1])))))))));
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((signed char) ((long long int) arr_3 [i_3 - 1]))))));
        }
        for (signed char i_6 = 1; i_6 < 12; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (signed char i_7 = 4; i_7 < 12; i_7 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((((arr_23 [i_1] [i_7 - 2]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_1] [i_6 + 1] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_14 [i_1] [i_6] [i_7])) : (((/* implicit */int) var_7))))))) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))))));
                            var_28 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_9] [i_8] [i_7] [i_6] [i_1])) || (((/* implicit */_Bool) arr_29 [(signed char)10] [i_6] [i_7 - 1] [i_7 - 1] [(signed char)10]))))) << ((((((-(((/* implicit */int) var_9)))) >> (((((/* implicit */int) ((signed char) -4225437581220702245LL))) + (45))))) - (30)))));
                        }
                    } 
                } 
                var_29 *= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned int) min((arr_24 [i_1] [i_1] [i_1]), (var_12)))) : (((((/* implicit */_Bool) arr_27 [i_1] [7] [i_1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))) : (arr_7 [i_6])))))), ((-((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                var_30 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) max((var_13), (((/* implicit */unsigned long long int) var_6))))))));
            }
            /* vectorizable */
            for (signed char i_10 = 4; i_10 < 12; i_10 += 3) /* same iter space */
            {
                var_31 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_10 - 2] [i_6 + 1]))) - (arr_23 [i_1] [i_1])));
                arr_33 [i_1] [i_6 - 1] [i_6] [2U] = arr_22 [i_1] [i_1];
                var_32 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_1] [i_6] [i_10 + 1] [i_6] [i_1]))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((unsigned int) (unsigned char)0)))) ? (2090013479U) : (var_16))))));
                var_34 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned long long int) arr_35 [i_1] [i_6] [i_11] [i_11]))) && (((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_25 [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_11] [i_6] [i_1])) ? (((/* implicit */unsigned int) var_12)) : (arr_34 [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) arr_19 [i_6 - 1] [i_6 + 1] [i_6]))))) : (((/* implicit */int) (_Bool)1))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_35 += ((signed char) (-(((/* implicit */int) (unsigned char)0))));
                var_36 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3641271622680900135ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (min((((/* implicit */unsigned long long int) (signed char)-62)), (12475871484794814648ULL))) : (6844318193493224800ULL)))) ? (((((((/* implicit */_Bool) arr_14 [0LL] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1]))) : (var_16))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_6] [i_12]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1] [i_6] [i_1]))));
                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (~(((unsigned int) var_2)))))));
            }
            /* LoopSeq 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */short) (-(max((((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (unsigned char)254)))), (((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_13]))))));
                var_39 -= ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_1])) & (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (signed char)-41))))))));
                arr_41 [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_39 [i_13] [i_6 - 1] [i_6]), (arr_39 [i_13] [i_6 - 1] [i_6])))) | (((/* implicit */int) arr_39 [i_13] [i_6 - 1] [i_6 - 1]))));
                var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_13 - 1] [i_13 - 1] [i_13 - 1]))))) : (max((var_4), (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_14 [i_1] [i_6] [i_1])) : (((/* implicit */int) (unsigned char)255)))))))))));
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
            {
                arr_46 [i_14] [i_6] [(short)8] [(signed char)2] = min((((/* implicit */int) ((((/* implicit */_Bool) max((2147482624U), (((/* implicit */unsigned int) (_Bool)1))))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_26 [i_14])), (1536855971))))))), (((903723800) | (((/* implicit */int) arr_21 [7])))));
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    var_41 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_48 [i_14] [i_14])) ? (((/* implicit */int) arr_48 [i_14] [i_14])) : (((/* implicit */int) arr_48 [i_14] [i_14])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-59)), (arr_28 [i_1])))) ? (((arr_11 [i_15]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(unsigned char)0]))))) : (((/* implicit */unsigned int) arr_24 [i_16] [i_16] [i_16])))) * (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (arr_34 [i_16] [i_15] [i_6])))));
                        var_43 |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)255)), (var_1)))) ? (((/* implicit */int) arr_39 [i_16] [i_14 - 1] [i_14 - 1])) : (((/* implicit */int) arr_18 [i_1]))))));
                        var_44 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_29 [i_15] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
                    {
                        arr_54 [i_14] [i_14] [i_14] [i_1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)1)))) < (((/* implicit */int) (short)-2373))));
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_1] [i_6]))))))))));
                    }
                    arr_55 [8U] [i_6] [(signed char)11] [i_14] [i_15] [i_14] = ((/* implicit */long long int) 177489386U);
                }
                for (signed char i_18 = 2; i_18 < 11; i_18 += 3) 
                {
                    var_46 = min((((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_18 [i_1]))))), (((((/* implicit */_Bool) arr_34 [i_14] [i_14] [i_1])) ? ((~(arr_11 [i_1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_14 - 1] [i_14] [i_14]))))))));
                    var_47 -= ((/* implicit */long long int) min((min(((+(arr_3 [i_1]))), (((/* implicit */int) ((((/* implicit */int) var_18)) < (903723800)))))), ((~(((/* implicit */int) arr_38 [i_14 - 1] [i_14 - 1] [i_6 - 1] [i_1]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) max(((+(((((/* implicit */int) arr_48 [i_1] [10LL])) * (((/* implicit */int) arr_27 [i_1] [i_14 - 1] [i_18] [i_18])))))), ((((((+(((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])))) + (2147483647))) << (((arr_52 [i_1] [i_1] [i_6 + 1] [i_1] [i_14 - 1] [(unsigned char)6] [i_19]) - (3083698444U))))))))));
                        var_49 = ((/* implicit */signed char) arr_15 [i_6 + 1] [i_14] [i_18] [i_6 + 1]);
                    }
                    arr_60 [i_14] [i_6 - 1] [i_6 - 1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_14 - 1] [i_14] [i_14] [i_18 - 1]))))) ? (((((/* implicit */int) ((((/* implicit */int) arr_48 [i_14] [i_6 + 1])) > (((/* implicit */int) arr_39 [i_14] [i_6 + 1] [i_14]))))) | (((/* implicit */int) var_11)))) : (((/* implicit */int) (signed char)127))));
                    arr_61 [i_18] [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) (signed char)-100);
                }
                arr_62 [i_14] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_49 [i_1] [i_6] [i_6] [0ULL] [i_14])) ? (arr_3 [(unsigned char)3]) : (((/* implicit */int) (signed char)-46)))) + (2147483647))) >> (((long long int) var_3))))), ((-(arr_15 [i_1] [i_1] [i_1] [i_1])))));
            }
            for (long long int i_20 = 0; i_20 < 13; i_20 += 3) 
            {
                var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_44 [i_20] [i_20]) << (((/* implicit */int) var_3))))), (var_10)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_1] [i_1] [(signed char)0])) ? (((/* implicit */int) arr_50 [i_1] [i_6 + 1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)-95))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)135)) << (((((/* implicit */int) (unsigned short)65535)) - (65526)))))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_1])) >= (((/* implicit */int) (signed char)127)))))) < ((-(18446744073709551604ULL)))))))));
                var_51 += ((/* implicit */long long int) max(((~(max((((/* implicit */unsigned int) var_8)), (3463488170U))))), (((/* implicit */unsigned int) (+((~(((/* implicit */int) (signed char)(-127 - 1))))))))));
                var_52 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
            }
            var_53 *= ((/* implicit */unsigned char) 1821358466884149821ULL);
        }
        var_54 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15799)) ? (((/* implicit */int) arr_18 [i_1])) : (((/* implicit */int) arr_48 [i_1] [i_1]))))) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_28 [i_1]))))) - (arr_23 [i_1] [i_1])));
    }
    for (signed char i_21 = 0; i_21 < 14; i_21 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_22 = 3; i_22 < 12; i_22 += 1) 
        {
            var_55 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 24ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_70 [i_21] [i_22 - 1])))));
            arr_71 [i_21] [i_22 + 2] [12U] |= ((/* implicit */unsigned int) arr_69 [i_21]);
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 14; i_23 += 2) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 3) 
                {
                    {
                        var_56 = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) arr_68 [i_21]))) <= (((/* implicit */int) arr_73 [i_22 + 2] [i_21])))) ? (((/* implicit */int) (!(max((arr_70 [i_21] [i_22]), (arr_70 [i_21] [i_21])))))) : (((arr_70 [i_21] [i_22 - 3]) ? (((/* implicit */int) arr_70 [i_21] [i_22 - 3])) : (((/* implicit */int) (_Bool)1))))));
                        var_57 += ((/* implicit */unsigned long long int) arr_72 [i_23] [i_23]);
                        var_58 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_76 [i_21] [(signed char)2] [i_22] [i_24] [i_24] [i_22]))))) ? (((arr_72 [i_21] [i_21]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_21] [i_22] [i_22 - 3] [i_22 - 3] [i_21] [i_22 - 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_22 - 3] [i_22 + 2] [i_22 + 2]))));
                    }
                } 
            } 
        }
        arr_78 [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned char) (_Bool)0)))))))) != (((/* implicit */int) arr_69 [i_21]))));
        var_59 += ((/* implicit */signed char) max((arr_72 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_76 [i_21] [i_21] [11U] [i_21] [i_21] [i_21])))) / (((/* implicit */int) arr_67 [i_21])))))));
    }
    var_60 = var_0;
    var_61 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_11))));
}
