/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50423
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
    var_20 = var_18;
    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_16)))))) * (((((/* implicit */unsigned long long int) min((var_16), (((/* implicit */long long int) var_9))))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138))) : (var_1)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_23 |= (!(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_1 [i_0])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */long long int) var_4)) % (max((arr_1 [(short)7]), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_3] [3LL])))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_17) != (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_4] [i_4]))))))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)219)) << (((((/* implicit */int) arr_4 [i_4] [i_0] [i_0])) * (((/* implicit */int) ((arr_3 [i_0] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    arr_18 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((arr_3 [i_6] [i_5]), (arr_3 [i_0] [i_0]))), (arr_3 [i_0] [i_5])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned char) min(((-(var_13))), (((/* implicit */unsigned long long int) (signed char)-17))));
                                arr_26 [i_0] [i_5] [i_0] [i_7] [i_0] = ((/* implicit */unsigned short) min((var_1), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned char) arr_22 [i_6] [i_5] [i_6] [i_7] [i_8] [i_0])))))));
                                var_27 = ((/* implicit */signed char) (unsigned char)204);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) (((+(arr_31 [i_0] [i_0]))) - (min((arr_31 [i_0] [i_0]), (arr_31 [i_0] [i_0])))));
                        arr_37 [i_0] [i_9] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_7))) == (((/* implicit */int) max((((/* implicit */signed char) arr_23 [i_0] [i_9] [i_9] [i_9] [i_9])), ((signed char)115))))));
                    }
                } 
            } 
            arr_38 [(unsigned short)9] [i_0] [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), (max((var_1), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [(short)8] [i_0] [i_0] [(_Bool)1])))))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)92)))));
        }
        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ? (((var_14) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [7LL])) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
    }
    for (signed char i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) arr_4 [(signed char)3] [i_12] [i_12]);
        /* LoopSeq 2 */
        for (short i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            var_31 = ((/* implicit */signed char) ((max((arr_19 [i_13] [i_13] [i_13] [i_13]), (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_12] [i_13] [i_12] [i_13] [i_13] [i_13] [i_12])) == (((/* implicit */int) (signed char)-33))))))) % (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-9223372036854775792LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)16))))))) % (max((arr_5 [i_12] [i_13] [i_12]), (((/* implicit */unsigned int) arr_2 [i_13] [i_12])))))))));
            var_32 += ((/* implicit */_Bool) (-((-(arr_21 [i_13] [4ULL] [i_12])))));
            var_33 ^= ((/* implicit */unsigned long long int) var_19);
        }
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        {
                            var_34 = (i_15 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) 16434984542855949165ULL)) ? (((/* implicit */int) arr_40 [i_12] [9ULL])) : (((/* implicit */int) (signed char)-9)))) >> (((max((((/* implicit */unsigned long long int) var_14)), (arr_53 [i_15] [i_15] [i_15] [i_15] [i_15] [i_12]))) - (13292776800311785789ULL)))))) : (arr_13 [i_15] [7LL])))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) 16434984542855949165ULL)) ? (((/* implicit */int) arr_40 [i_12] [9ULL])) : (((/* implicit */int) (signed char)-9)))) >> (((((max((((/* implicit */unsigned long long int) var_14)), (arr_53 [i_15] [i_15] [i_15] [i_15] [i_15] [i_12]))) - (13292776800311785789ULL))) - (7781227478082830688ULL)))))) : (arr_13 [i_15] [7LL]))));
                            var_35 = ((/* implicit */unsigned char) arr_20 [i_15] [i_14] [i_16]);
                            arr_55 [i_15] [i_15] [i_16] [0LL] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_35 [i_17] [i_15] [i_15] [i_12])) <= (((/* implicit */int) (signed char)-33))))) & (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_41 [i_12] [i_12]), (((/* implicit */unsigned long long int) arr_47 [i_12] [i_15] [i_17]))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                var_36 = ((/* implicit */int) min((((max((((/* implicit */unsigned long long int) arr_24 [(unsigned char)0] [(unsigned char)0] [i_14] [i_14] [i_18])), (arr_34 [i_12] [i_12]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_12] [(unsigned short)6] [4LL])) ? (arr_3 [3LL] [i_14]) : (arr_12 [i_12] [i_14] [i_12] [i_14])))))), (((((((/* implicit */_Bool) arr_1 [i_18])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)30)))) < (arr_9 [i_12] [i_14] [i_18])))));
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        {
                            arr_64 [i_20] [i_20] = ((/* implicit */unsigned int) 958995062);
                            var_37 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_14 [i_12])), (arr_21 [i_20] [i_20] [i_14]))) ^ (min((arr_21 [i_12] [i_20] [i_18]), (arr_21 [i_12] [i_20] [i_14])))));
                            var_38 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_19 [i_12] [i_14] [i_18] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_19 [i_20] [i_18] [i_14] [i_20]))), (((((/* implicit */_Bool) arr_19 [i_12] [i_12] [i_12] [i_20])) ? (arr_19 [i_12] [(signed char)1] [i_18] [i_20]) : (arr_19 [i_12] [i_14] [i_18] [i_20])))));
                            arr_65 [(short)5] [(short)5] [i_18] [i_20] [i_20] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_46 [i_12])) ? (var_16) : (arr_8 [i_14] [2LL]))) << (((arr_46 [i_12]) - (1800893604U)))));
                            var_39 = ((/* implicit */_Bool) var_11);
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */unsigned int) var_7);
        }
        var_41 = ((/* implicit */unsigned long long int) (short)-14996);
        var_42 += ((/* implicit */short) (~(((/* implicit */int) max((arr_14 [i_12]), (arr_14 [i_12]))))));
    }
    for (signed char i_21 = 0; i_21 < 11; i_21 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned long long int) var_12);
        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) min((5742740655294180186LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_21]))) < (max((((/* implicit */unsigned long long int) arr_9 [(signed char)2] [i_21] [i_21])), (arr_15 [10ULL])))))))))));
    }
    /* vectorizable */
    for (signed char i_22 = 0; i_22 < 11; i_22 += 1) /* same iter space */
    {
        var_45 = ((/* implicit */short) (~(4123444016U)));
        /* LoopSeq 1 */
        for (long long int i_23 = 0; i_23 < 11; i_23 += 1) 
        {
            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (+(arr_21 [i_22] [(_Bool)0] [i_23]))))));
            var_47 *= ((/* implicit */short) ((unsigned int) 3828880389210244585ULL));
        }
        /* LoopNest 2 */
        for (short i_24 = 0; i_24 < 11; i_24 += 4) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 0; i_26 < 11; i_26 += 1) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 11; i_27 += 1) 
                        {
                            {
                                var_48 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_77 [i_22] [i_24] [i_25])))));
                                var_49 = ((/* implicit */long long int) arr_32 [i_22]);
                            }
                        } 
                    } 
                    arr_85 [i_22] = ((/* implicit */signed char) ((unsigned char) ((unsigned char) arr_74 [(unsigned char)8] [i_22])));
                    arr_86 [i_22] [i_24] [i_25] [(unsigned short)2] = ((/* implicit */unsigned long long int) (-((-(arr_1 [i_22])))));
                }
            } 
        } 
        var_50 = var_16;
        arr_87 [2ULL] |= ((/* implicit */_Bool) (unsigned short)16911);
    }
}
