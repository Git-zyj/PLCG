/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23042
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
    var_16 = ((/* implicit */long long int) ((var_6) & (((/* implicit */int) (short)-8693))));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */int) arr_1 [i_0 - 1]))))) ? ((-(((/* implicit */int) arr_1 [i_0 + 1])))) : (((((/* implicit */int) arr_1 [i_0 + 1])) * (((/* implicit */int) arr_1 [i_0 - 2]))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_1 [i_0]))))) ? (max((((/* implicit */long long int) var_6)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_2 [17LL] [i_0]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (min((min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) max((var_12), (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) var_5);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                    {
                        arr_14 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_3]))) : (arr_13 [i_0]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) (-(((/* implicit */int) ((15414438518291655368ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_6 [22LL] [22LL])) - (((/* implicit */int) arr_0 [i_0]))))));
                            var_20 ^= ((/* implicit */signed char) (+(((((/* implicit */int) var_3)) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8)))) - (21)))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_3] [i_5] = ((/* implicit */int) var_11);
                            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-8693))));
                            var_22 = ((/* implicit */unsigned short) arr_0 [i_5]);
                            var_23 = ((/* implicit */unsigned int) (~((+(546705942314835218ULL)))));
                        }
                        arr_22 [i_1] [(unsigned char)19] = ((/* implicit */unsigned int) ((unsigned long long int) (short)8697));
                        var_24 = (+(12ULL));
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) (short)-8686)) % (((/* implicit */int) (unsigned short)65535))));
                        var_26 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_7 [i_0] [i_0 - 3] [(short)11]))))));
                        arr_25 [22LL] [i_6] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_18 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0])) ? (var_1) : (((/* implicit */unsigned int) arr_18 [i_0 - 3] [(_Bool)1] [i_0 + 1] [i_0]))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_33 [i_0] [i_7] [i_8] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1792))) : (((((/* implicit */_Bool) 831460706173890972LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_2] [i_7])))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) : (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8] [i_8]))) : (arr_19 [i_0] [i_1] [i_2] [i_2] [i_8])))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            var_28 = ((((((/* implicit */int) (unsigned short)65512)) << (((((/* implicit */int) (unsigned short)65535)) - (65521))))) >> (((-831460706173890990LL) + (831460706173891006LL))));
                            arr_36 [i_0] [i_0] [i_2] [i_7] [i_2] = ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_27 [i_1] [i_2] [i_7])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_9] [i_7] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) var_10))))) : ((~(var_12))));
                            var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0 + 1] [i_0]))));
                            arr_37 [i_0] [i_1] [i_2] [i_7] [i_7] [i_2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)134)) ? (0LL) : (-9223372036854775803LL)));
                            var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_2] [(signed char)5])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_13)))))));
                        }
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            arr_40 [i_0] [(short)15] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_0]);
                            arr_41 [i_0 - 1] [i_1] [(_Bool)1] [i_7] [i_10] = ((/* implicit */int) ((signed char) arr_0 [i_0 - 1]));
                        }
                        arr_42 [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0] [i_0 - 2]))));
                        var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 3] [i_0 + 1]))));
                        arr_43 [i_2] [i_0] [i_2] [i_7] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_2]))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        var_32 ^= ((unsigned int) ((((/* implicit */_Bool) arr_8 [19ULL])) ? (arr_35 [i_0] [i_0 + 1] [i_0 - 1] [i_11] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1])))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_28 [i_0 + 1] [i_0 - 3] [i_0 + 1]))) || (((/* implicit */_Bool) (-(((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            var_34 = ((unsigned int) min((((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_27 [i_2] [i_11] [i_2])) - (32))))), (max((((/* implicit */int) var_10)), (var_4)))));
                            arr_48 [i_0] [i_1] [i_2] [i_11] [i_12] = ((/* implicit */long long int) var_2);
                        }
                        arr_49 [i_2] = ((/* implicit */signed char) var_9);
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 3]))))) / (((/* implicit */int) var_8))));
                    }
                    var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1139274816))));
                }
            } 
        } 
    }
    for (int i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        var_37 = ((/* implicit */unsigned short) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_13]))) * (arr_46 [i_13] [i_13] [i_13]))) >> (((min((arr_10 [i_13] [i_13] [i_13]), (((/* implicit */unsigned long long int) arr_9 [i_13] [i_13] [i_13] [i_13])))) - (68ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_51 [i_13])))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 4; i_15 < 8; i_15 += 4) 
            {
                {
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
                    arr_58 [i_13] [i_14] = ((/* implicit */signed char) var_0);
                }
            } 
        } 
        var_39 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_13] [i_13] [i_13]))) - (min(((-(var_9))), (((/* implicit */unsigned int) max((arr_23 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]), (((/* implicit */unsigned short) arr_55 [i_13] [i_13]))))))));
    }
    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
    {
        var_40 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)126)), ((unsigned short)65533)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), ((-(((/* implicit */int) var_7))))));
        var_41 += var_8;
        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8697))) : (-3099359487312768344LL)))) ? (((min((((/* implicit */unsigned int) var_15)), (arr_16 [i_16] [i_16]))) * (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (unsigned short)65506))))))));
        arr_61 [i_16] [i_16] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_39 [i_16] [i_16] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_16] [i_16] [i_16]))) : (var_0))), (((/* implicit */long long int) arr_47 [(unsigned short)22] [i_16] [i_16] [(unsigned short)22] [21]))));
    }
    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) /* same iter space */
    {
        arr_65 [i_17] [i_17] = ((/* implicit */int) max((((((/* implicit */_Bool) -1LL)) ? (7906564051617842226LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27087))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_13)))) && (((((/* implicit */_Bool) arr_32 [i_17] [i_17] [i_17])) || (((/* implicit */_Bool) arr_26 [i_17] [i_17] [i_17] [i_17])))))))));
        var_43 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (_Bool)1))));
        arr_66 [i_17] [i_17] |= ((/* implicit */short) max((((/* implicit */unsigned int) arr_38 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])), (var_1)));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_18 = 1; i_18 < 14; i_18 += 1) 
    {
        for (long long int i_19 = 0; i_19 < 18; i_19 += 1) 
        {
            for (short i_20 = 1; i_20 < 17; i_20 += 3) 
            {
                {
                    var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) var_1)))));
                    var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) max(((signed char)-24), (((/* implicit */signed char) (((!(((/* implicit */_Bool) 228514776)))) || (((/* implicit */_Bool) (short)0))))))))));
                    arr_75 [i_19] = ((/* implicit */short) arr_32 [i_18] [6] [i_19]);
                }
            } 
        } 
    } 
}
