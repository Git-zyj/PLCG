/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23434
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (var_1))))))) : (var_2))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            var_16 ^= ((/* implicit */unsigned short) (+(arr_1 [4U])));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_7 [i_0] [i_0]))))));
                var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */unsigned long long int) ((var_0) ? (arr_6 [(signed char)2] [(signed char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : ((~(15ULL)))));
            }
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)32767)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32777)))))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_4]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */int) (+(arr_15 [i_0] [i_1 + 1] [i_3] [i_4 - 1] [i_0])));
                        var_22 = ((/* implicit */int) ((unsigned short) ((18446744073709551601ULL) / (15ULL))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((((((/* implicit */int) var_10)) + (((/* implicit */int) arr_10 [i_0] [i_0] [i_3] [i_0] [i_0] [i_1])))) / (((/* implicit */int) arr_11 [i_0] [i_3] [i_4 - 2] [i_7]))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~((~(var_13))))))));
                    }
                }
                for (signed char i_8 = 1; i_8 < 11; i_8 += 4) 
                {
                    arr_22 [i_0] [i_1 - 2] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) ^ (((int) arr_8 [i_0] [11] [i_3] [i_8 - 1]))));
                    var_25 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))) & ((~(15ULL))));
                }
                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_18 [i_3] [i_1] [i_0] [i_0] [i_1] [i_0]))))));
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_2 [(signed char)2])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-47))))))));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    var_28 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)1)))) + (((/* implicit */int) (unsigned short)55567))));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_29 *= (!((_Bool)1));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) 433569331))));
                        var_31 = ((/* implicit */signed char) (-(arr_4 [i_1 - 1] [i_1 + 3] [i_1 - 2])));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) | (arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) == (18446744073709551615ULL)))) : (((/* implicit */int) arr_20 [i_0] [i_1 - 3] [i_3] [i_9]))));
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_9] [i_10])) : ((-(3076687843U)))));
                    }
                }
                var_34 = ((/* implicit */unsigned short) 18U);
            }
            for (signed char i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_12 = 1; i_12 < 9; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_35 *= ((/* implicit */unsigned char) arr_17 [i_0] [i_0] [i_1 - 3] [i_11] [i_12 + 3] [i_13]);
                        var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_2)))) ^ (arr_15 [i_0] [i_1 - 1] [i_12 - 1] [i_12] [i_0])));
                    }
                    var_37 ^= ((/* implicit */_Bool) (~(9U)));
                    var_38 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) + (253699169))) * (((/* implicit */int) arr_21 [i_12 + 3] [i_12] [i_12 + 2]))));
                }
                for (unsigned short i_14 = 1; i_14 < 9; i_14 += 1) /* same iter space */
                {
                    arr_38 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_1 - 3]) >= (arr_28 [i_1 - 3] [i_14 - 1] [i_14] [i_14] [i_14 + 3])));
                    var_39 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [(unsigned short)6] [i_0] [i_14]))));
                    arr_39 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))));
                }
                var_40 = ((/* implicit */unsigned short) ((arr_3 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_1 + 2])))));
            }
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((signed char) (+(var_2)))))));
            var_42 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            var_43 = ((/* implicit */long long int) var_1);
        }
        var_44 = ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 17678183823877516378ULL))))));
    }
    for (int i_15 = 0; i_15 < 11; i_15 += 4) 
    {
        var_45 *= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        arr_44 [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((arr_14 [i_15] [i_15] [i_15] [i_15]), (arr_14 [i_15] [i_15] [i_15] [i_15])))))) ? (((((/* implicit */_Bool) arr_0 [i_15])) ? (arr_0 [i_15]) : (arr_0 [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44954)))));
    }
}
