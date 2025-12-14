/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200216
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) arr_5 [i_1] [i_0] [i_0]);
            var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1])))) ? (max((((/* implicit */unsigned int) var_9)), (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
            arr_6 [i_0] [i_0] [(unsigned char)15] = ((/* implicit */unsigned int) (((+(((((/* implicit */int) (_Bool)1)) >> (((var_10) - (2782075680U))))))) + ((~(((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_0 [i_0])))))))));
            arr_7 [i_0] = ((/* implicit */unsigned int) -1269617270);
        }
        /* LoopSeq 3 */
        for (int i_2 = 3; i_2 < 21; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_15)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))))), ((~(((/* implicit */int) (_Bool)1))))));
            var_20 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2 - 3] [i_2 + 1])) ? (arr_5 [i_0] [i_2 - 2] [i_2 - 1]) : (arr_5 [i_2] [i_2 + 1] [i_2 - 2])))), (((((/* implicit */unsigned long long int) arr_5 [i_0] [i_2 + 1] [i_2 + 1])) % (var_0)))));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 21; i_3 += 3) /* same iter space */
        {
            var_21 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_10 [i_3 + 2] [i_3 + 1] [i_3 - 1]));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    var_22 ^= var_7;
                    var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))));
                    var_24 *= ((/* implicit */short) arr_2 [i_3 + 1]);
                }
                arr_18 [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
            }
            for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_27 [i_6] [i_7] [i_6] [i_3] [i_6] = ((var_0) ^ (((/* implicit */unsigned long long int) var_10)));
                            var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0] [i_3 - 2] [i_3 - 2] [i_7]))));
                            var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) arr_5 [i_0] [i_3 + 2] [i_3 - 1]))));
                        }
                    } 
                } 
                arr_28 [i_6] = (+((-(((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                for (int i_9 = 1; i_9 < 20; i_9 += 4) 
                {
                    arr_32 [i_6] [i_9] [i_6] [i_3] [(unsigned char)11] [i_9] = ((/* implicit */unsigned int) ((int) arr_24 [(short)5] [i_3] [i_3] [i_3 - 2] [i_3] [i_3]));
                    var_27 = ((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) (unsigned short)48976)) : (-66608643));
                    arr_33 [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_5 [i_3 - 1] [i_9 + 3] [i_0])));
                }
                for (unsigned short i_10 = 3; i_10 < 22; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) var_9);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+(0U))))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_34 [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10])) == (var_6))) ? (((/* implicit */long long int) ((int) var_5))) : ((-9223372036854775807LL - 1LL)))))));
                        arr_38 [i_0] [i_0] [i_3] [i_6] [i_0] [i_11] = ((/* implicit */long long int) arr_0 [i_10 - 1]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        arr_43 [i_0] [i_3] [i_6] [i_6] [i_10] [i_12] = ((/* implicit */signed char) var_11);
                        arr_44 [i_0] [i_6] = (-(((/* implicit */int) arr_3 [i_3 + 1])));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        arr_48 [i_6] [12] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) arr_30 [i_13] [i_6] [i_0])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) var_2))))));
                        arr_49 [i_13] [i_10] [i_6] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_35 [i_6] [i_3 + 1] [i_6] [i_10]) + (((/* implicit */int) var_2))));
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 3) 
                    {
                        arr_53 [i_0] [i_0] [i_3] [i_6] [(signed char)8] [(unsigned char)6] [i_14 + 1] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_10 - 1]))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)48976)))))));
                        arr_54 [22ULL] [i_3 + 1] [i_6] [i_10 - 1] [i_14] &= ((/* implicit */unsigned char) ((((7087610257512998763LL) / (((/* implicit */long long int) ((/* implicit */int) var_15))))) <= ((~(arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    var_32 ^= ((/* implicit */unsigned char) (((-(((/* implicit */int) (signed char)100)))) - (((/* implicit */int) arr_42 [i_3 + 2] [(unsigned char)10]))));
                }
            }
            for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_16 = 1; i_16 < 22; i_16 += 4) 
                {
                    var_33 &= ((/* implicit */signed char) var_3);
                    var_34 *= ((/* implicit */unsigned int) (unsigned short)16534);
                    arr_60 [i_16] [i_15] [22LL] [i_16] = ((/* implicit */_Bool) var_12);
                }
                for (short i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    var_35 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_36 [i_0] [i_15] [i_0] [i_0] [i_0])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)0] [i_3] [i_3 - 1] [i_17]))) >= (var_10)));
                }
                arr_64 [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_13))))));
            }
        }
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (arr_55 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1])));
            arr_68 [3] [i_18 + 1] = var_5;
        }
        arr_69 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_52 [i_0] [(short)0] [i_0] [(short)0] [(unsigned char)8]))));
    }
    var_38 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-9)))) < (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) 14367789828566663233ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((var_4), (((/* implicit */unsigned long long int) var_9))))))));
}
