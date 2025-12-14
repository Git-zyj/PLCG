/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48066
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    arr_9 [i_2] [i_2 - 3] [i_2] = ((/* implicit */unsigned int) ((arr_4 [i_2 + 2] [i_2 + 3] [i_2 + 4]) == (7861762112612263865ULL)));
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9369347115727031948ULL)) ? (((/* implicit */int) (short)-21)) : (((/* implicit */int) (signed char)-23))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_16 [5U] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26)) != (((/* implicit */int) (short)20))));
                                var_10 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_12 [i_2 + 4] [i_2] [i_2 + 4])));
                                arr_17 [i_0] [i_1] [i_0] [i_2 + 4] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_3])) && (((/* implicit */_Bool) arr_6 [(short)17] [i_2] [i_3] [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(unsigned char)10])) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))))));
                                var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) 6315168854905113558LL))));
                                var_12 = ((/* implicit */short) ((var_5) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7749675308800499584LL)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (signed char)-3)))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    arr_20 [i_0] [i_1] [(_Bool)1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) -45794348616638034LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))) : (2913763669U)));
                    var_13 |= ((((var_5) > (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0] [(unsigned short)3])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (signed char)57))))) : (((arr_7 [i_5] [i_1] [i_0] [i_0]) | (arr_7 [(unsigned char)0] [i_5] [i_5] [i_0]))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (var_1))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967284U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_1])) < (((/* implicit */int) arr_19 [(unsigned char)8] [(unsigned char)10])))))) <= (((((/* implicit */_Bool) arr_13 [i_0])) ? (var_5) : (var_1))))))) : (((((((/* implicit */_Bool) var_9)) ? (76762310U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_5]))))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1381203631U)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_25 [i_7] = (i_7 % 2 == zero) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_13 [i_0]) - (var_1))) != (((/* implicit */unsigned long long int) var_7)))))) % (((((((/* implicit */_Bool) (unsigned short)49596)) ? (144115187538984960ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82))) & (arr_23 [i_0] [i_0] [i_5] [i_7]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_13 [i_0]) - (var_1))) != (((/* implicit */unsigned long long int) var_7)))))) * (((((((/* implicit */_Bool) (unsigned short)49596)) ? (144115187538984960ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82))) & (arr_23 [i_0] [i_0] [i_5] [i_7])))))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)33)) != (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_6] [i_6])))))))) | ((((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7 - 1]))))) - (((/* implicit */long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))) % (var_5)));
                    arr_28 [4ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_8] [i_0] [i_8] [i_1] [i_0] [i_0])) / (((/* implicit */int) var_3))))) >= (((((/* implicit */_Bool) 382357568)) ? (arr_14 [13ULL] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)16]) : (var_8)))));
                    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_24 [i_0] [i_1] [(unsigned char)8] [i_8] [i_8]))));
                    arr_29 [i_0] = ((/* implicit */signed char) ((1381203624U) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                }
                var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) >> (((3830684989U) - (3830684949U)))))) ? (((((/* implicit */_Bool) (short)21)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) 3058406842U))))) ? (((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U))) >> (((/* implicit */int) ((((/* implicit */_Bool) (short)-10444)) && (((/* implicit */_Bool) (short)17118))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) -271380915)))) || (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_0]))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 2321359930439537701LL)) || (((/* implicit */_Bool) var_5)))) && (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0)))))) || (((((/* implicit */_Bool) var_2)) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1))))))));
    var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((var_7) << (((var_5) - (18128206962258764101ULL)))))) % (((var_1) >> (((((/* implicit */int) var_6)) - (35155))))))) == (((/* implicit */unsigned long long int) ((((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) << (((((((/* implicit */_Bool) -2321359930439537702LL)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (_Bool)0)))) - (122))))))));
}
