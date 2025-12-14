/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32120
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        arr_4 [i_0] [(unsigned short)10] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 2; i_2 < 9; i_2 += 4) /* same iter space */
        {
            var_12 = ((/* implicit */int) (-(((arr_8 [i_2 - 1] [i_2 + 4] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
            var_13 = arr_3 [i_1];
        }
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 9; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_17 [i_5] [i_4 + 2] [i_3 + 2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_3)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)29814))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) / ((-(((/* implicit */int) (unsigned short)13872))))));
                    }
                } 
            } 
            arr_18 [i_3] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_9 [i_1] [i_3 - 1])))));
            arr_19 [(_Bool)1] [i_1] [(signed char)9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 2) 
                {
                    {
                        arr_24 [i_1] [i_3 - 1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_7 - 1]))) | (arr_8 [i_1] [i_3] [i_3])));
                        arr_25 [(unsigned char)11] = ((/* implicit */long long int) arr_23 [i_1] [(signed char)7] [i_6] [i_7]);
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_3 + 4] [i_3 + 2])) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_7 - 3])) : (((/* implicit */int) (_Bool)0))));
                        var_16 = ((/* implicit */short) arr_5 [i_3]);
                    }
                } 
            } 
        }
        for (signed char i_8 = 2; i_8 < 9; i_8 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_20 [i_1] [i_1] [i_8 - 1] [i_8])), (4294967295U))) | (((/* implicit */unsigned int) ((/* implicit */int) max((arr_20 [i_1] [i_8 - 2] [i_8 + 1] [i_1]), (arr_20 [i_1] [i_1] [i_8 - 2] [i_8])))))));
            /* LoopSeq 1 */
            for (short i_9 = 1; i_9 < 10; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 12; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        {
                            var_18 -= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                            var_19 &= arr_7 [i_1] [i_8];
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2426601827606439598LL)) ? (arr_35 [i_1] [i_8] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9] [i_8 + 2]))))))));
                    arr_36 [(unsigned short)7] [i_1] [i_1] [i_1] [i_9] [(unsigned short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4747933496225632137LL))))) : (((/* implicit */int) var_4))));
                    arr_37 [i_12] [i_8 - 2] [i_9] [i_8 - 2] = ((/* implicit */signed char) 9223372036854775786LL);
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_41 [i_1] [i_13] [i_13] [i_8] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_8] [i_9 - 1] [i_13] [i_13] [(signed char)11])))))));
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_1] [i_9 + 2]))));
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_43 [i_1] [i_8 + 4] [i_1] [i_13] [i_8] [i_14 + 1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (_Bool)1)))))) : (min((arr_43 [i_1] [i_8 + 2] [i_9 - 1] [i_14] [i_8] [(signed char)4] [i_13]), (((/* implicit */unsigned long long int) arr_3 [i_8]))))))) && (((/* implicit */_Bool) arr_1 [(unsigned char)15] [i_14])))))));
                        arr_46 [i_1] [i_8 - 2] [i_8] [i_9 - 1] [i_13] [i_14] [i_14] = ((/* implicit */signed char) (-(((arr_44 [i_8 + 1] [i_8 + 1]) ? (((/* implicit */int) arr_44 [i_8 - 1] [i_8 + 1])) : (((/* implicit */int) arr_44 [i_8] [i_8 + 2]))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_34 [i_1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])) || (((/* implicit */_Bool) arr_34 [i_1] [i_8 + 3] [i_9 + 2] [i_13] [i_1]))))))));
                    }
                    for (signed char i_15 = 1; i_15 < 11; i_15 += 2) 
                    {
                        arr_50 [i_1] [i_8] [i_9 + 3] [i_9 + 3] [i_15 + 1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_8 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_8 + 4])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-43)) ? (-1LL) : (arr_10 [5LL] [i_8] [i_9 + 2])))) < (5561273184695548561ULL))))));
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)7))));
                    }
                    arr_51 [i_1] [i_8 - 2] [i_8 - 2] [i_13] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) >= (11202030666672637468ULL)));
                }
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    arr_54 [i_1] [i_8 + 2] [i_9] [i_16] [i_16] [i_8] = ((/* implicit */long long int) var_1);
                    arr_55 [i_16] [i_9] [i_16] [i_16] = ((/* implicit */short) ((unsigned long long int) ((12935367318835600195ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_31 [i_1])))))));
                }
                for (long long int i_17 = 1; i_17 < 11; i_17 += 3) 
                {
                    arr_58 [i_17] [i_17] [i_17] [i_1] = ((/* implicit */short) arr_10 [i_17 + 1] [i_8 + 2] [i_1]);
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_17 + 2] [i_17 - 1] [i_1] [(_Bool)1]))))) ? (((((/* implicit */unsigned long long int) arr_56 [i_8])) * (max((12935367318835600184ULL), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((arr_49 [i_1] [i_8 + 1] [i_9 + 3] [i_17 + 1] [i_8 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) arr_16 [i_8 + 1] [(_Bool)1])) ? (arr_28 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))))));
                }
            }
        }
        var_26 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-83))))) ? (arr_43 [i_1] [i_1] [i_1] [i_1] [(unsigned char)0] [i_1] [4ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    }
    for (unsigned short i_18 = 0; i_18 < 18; i_18 += 4) 
    {
        var_27 = ((/* implicit */_Bool) arr_59 [i_18] [i_18]);
        arr_61 [(unsigned char)1] = ((arr_59 [i_18] [i_18]) > (max((arr_59 [i_18] [i_18]), (((/* implicit */unsigned long long int) arr_60 [i_18])))));
        var_28 = ((/* implicit */unsigned long long int) var_0);
    }
    var_29 = ((/* implicit */short) var_4);
}
