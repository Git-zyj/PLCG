/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213804
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
    var_20 = ((/* implicit */unsigned int) var_17);
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3)))))) <= (((min((((/* implicit */unsigned int) var_7)), (3269022633U))) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), (var_3))))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((min((var_2), (((/* implicit */long long int) (~(var_19)))))), (((/* implicit */long long int) var_9))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                arr_9 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)32))));
                var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) var_8))));
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    arr_13 [i_2] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((short) var_5))), (arr_12 [(signed char)6] [i_1] [i_2] [5] [(signed char)6] [i_3])));
                    arr_14 [(unsigned short)11] [i_3] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (~(arr_12 [(unsigned short)0] [i_0] [i_1] [i_1] [i_2] [2U])))) : ((~(arr_7 [i_1] [i_1] [i_1]))))))));
                }
                for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) 4154393370U)) - (var_13)))) ? ((+(((/* implicit */int) (signed char)6)))) : ((~(((/* implicit */int) (signed char)18))))))));
                    var_23 *= var_5;
                }
                for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) (~(max((arr_18 [i_5] [i_2] [i_1] [i_0]), (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) (signed char)-23)))))))));
                        arr_25 [i_6] [i_5] [i_2] [i_1] [i_0 - 3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0 - 3])) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) arr_22 [i_0 + 1])))))));
                        arr_26 [i_0 - 3] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned short) arr_8 [i_0] [i_2] [i_2] [i_0]);
                        var_25 = ((/* implicit */signed char) min((((var_11) / (((/* implicit */long long int) var_7)))), (((((/* implicit */_Bool) arr_21 [4] [i_1] [(unsigned short)7] [i_5] [i_0 - 4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_22 [(_Bool)1])) ? (arr_21 [i_6] [(unsigned short)2] [i_2] [i_2] [i_1] [(signed char)4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20209)))))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((arr_21 [i_0 - 3] [i_0 - 2] [i_1] [i_5] [i_0] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) (short)14030))))) & (arr_21 [i_0] [i_0 - 3] [i_2] [i_0 - 3] [i_0] [i_7]))))));
                        arr_30 [i_0] [i_1] [i_2] [i_5] [i_2] = ((/* implicit */signed char) (_Bool)1);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        arr_34 [(short)5] [i_0 - 2] = ((/* implicit */signed char) max((5218661939410549892ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                        var_27 = ((/* implicit */unsigned long long int) var_11);
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)22978))))))), (1303156776676267869ULL))))));
                        var_29 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65021)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7900)))))) ? ((~(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) (_Bool)1))))))));
                    }
                    arr_35 [i_0 + 1] [i_1] [12U] [i_2] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (arr_10 [(_Bool)1] [(_Bool)1] [i_1] [1] [10])));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [7U]))) : (var_14))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [7ULL] [7ULL] [i_0] [i_0 - 3] [i_0] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_14)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) (short)-12557)) != (-2147483636))))))));
                }
                /* LoopSeq 3 */
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    arr_39 [i_9] [i_1] [i_2] [i_9] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_31 = (signed char)-35;
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 2; i_10 < 12; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_41 [i_9] [i_0] [i_2] [i_1] [i_9])) % (((/* implicit */int) arr_41 [i_9] [i_10] [i_10 + 1] [i_0 - 3] [i_9]))))));
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-12557))));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_11] = var_19;
                    var_34 |= ((/* implicit */unsigned char) min((max((((7528386265256054871LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (-(((/* implicit */int) var_16))))))), (((/* implicit */long long int) ((((/* implicit */int) var_16)) + (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-23)))))))));
                    arr_47 [i_0] [i_1] [i_2] [i_11] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3417735021761269431LL)))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_51 [i_0 + 1] [i_2] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (short)-4925);
                    arr_52 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_11 [i_0] [i_1] [6ULL] [i_2] [i_0 - 2] [i_1]);
                }
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [(unsigned char)12]) + (((/* implicit */long long int) var_19))))) ? (((/* implicit */long long int) arr_23 [i_2] [i_1] [i_2] [i_0 + 1] [i_2] [i_0])) : (((long long int) arr_3 [i_0 + 1]))))) || (((/* implicit */_Bool) var_14))));
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_56 [i_13] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_20 [i_0] [i_0] [i_0 - 4] [i_0 - 4] [i_0 - 3] [i_0]))));
            arr_57 [i_0] [(_Bool)1] [(unsigned char)10] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)20385))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 3]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_13] [i_0 - 1] [i_0])))))) >= (((var_11) / (var_2))))))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 3; i_14 < 10; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_64 [i_0] = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1216))) : (9223372036854775779LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))));
                arr_65 [(signed char)6] [(signed char)6] [i_0 - 2] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_8)) : (var_7)))) ^ ((~(arr_3 [i_0])))));
                var_36 = ((/* implicit */int) var_5);
                var_37 = (~((~(((/* implicit */int) var_8)))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        {
                            arr_70 [i_17] [i_17] [i_16] [i_15] [i_14] [i_0] = (signed char)-106;
                            arr_71 [i_16] [i_16] [i_16] [i_0] [i_14] [i_0] = ((/* implicit */unsigned char) (~(var_2)));
                        }
                    } 
                } 
            }
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                arr_74 [i_18 + 1] [i_18 + 1] = ((/* implicit */unsigned short) arr_1 [i_18 + 1]);
                var_38 = ((/* implicit */unsigned short) (+(arr_32 [i_18] [i_18 + 1] [i_0] [i_14 - 3] [i_0] [i_0] [i_0])));
            }
            arr_75 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_73 [i_0] [i_0] [i_14 + 2])) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)-57)))) : (((((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) var_15))))));
        }
        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? ((~(((var_1) >> (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) - (32021))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_0 - 4])) ? (var_11) : (var_13)))) ? (((/* implicit */int) min((var_3), (var_5)))) : (((/* implicit */int) arr_24 [i_0 + 1] [i_0 - 4] [i_0] [i_0] [i_0 - 1])))))));
        arr_76 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
    }
}
