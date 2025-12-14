/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20043
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_9 [i_0] [(signed char)4] [i_0] [i_2] = ((((/* implicit */_Bool) ((var_13) + (((/* implicit */long long int) 572631626))))) ? (((((/* implicit */int) (signed char)127)) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [(signed char)7])))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_0)))));
                        arr_10 [8ULL] [i_2] [i_2] [0] = (~(((/* implicit */int) (short)-8434)));
                        var_16 = ((/* implicit */long long int) 87473720);
                        var_17 = ((/* implicit */long long int) min((var_17), (arr_2 [(short)13])));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_1] [i_4] [i_2] [i_0] = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2])) >> (((1017983557U) - (1017983546U)))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [i_2])) + (2147483647))) >> (((1017983557U) - (1017983546U))))));
                            arr_15 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)192)) + (arr_13 [i_2] [i_2] [i_2] [i_2] [2])))) ? (((/* implicit */int) (short)12865)) : (((/* implicit */int) var_7))));
                            arr_16 [i_0] [(_Bool)1] [(_Bool)1] [2ULL] [i_2] [(_Bool)1] = ((/* implicit */_Bool) arr_2 [i_0]);
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_1 + 1] [i_3] [i_5 + 1] [i_1 + 1] [i_5 + 1] [i_5])))))));
                            arr_21 [i_0] [i_1 - 1] [4LL] [i_2] [4LL] [4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (_Bool)1))));
                            var_19 &= ((/* implicit */int) ((_Bool) ((-7685857325236145152LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-19))))));
                            var_20 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [(_Bool)1] [i_0] [7] [i_0]))));
                        }
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            arr_25 [i_2] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-4)) : (-572631626)));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_0])))))));
                        }
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(-572631626)))) ? (((/* implicit */int) ((var_13) == (var_13)))) : (((/* implicit */int) (short)32767)))) & (((((/* implicit */_Bool) ((var_2) % (((/* implicit */int) (short)-32767))))) ? (((/* implicit */int) arr_12 [i_7 - 1] [i_2] [(signed char)2] [i_1 + 1] [i_2] [i_0])) : (((/* implicit */int) arr_27 [(short)7] [i_1] [i_1 + 1] [i_1 + 1] [i_7 - 1] [(short)7]))))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_7 - 1]) : ((+(var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3301104969U)) ? (((/* implicit */int) var_9)) : (715067467))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0])) ? (min((var_12), (((/* implicit */long long int) arr_1 [8LL] [(signed char)3])))) : (var_13)));
                        arr_31 [i_2] [i_1] [i_2] [i_2] = arr_24 [i_2] [i_1 + 1];
                        arr_32 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (signed char)-1))))))));
                    }
                    for (int i_8 = 2; i_8 < 12; i_8 += 4) 
                    {
                        var_24 *= ((/* implicit */signed char) var_15);
                        arr_35 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [1ULL] [i_2] [i_8 - 1] [i_2] [i_1]), (((/* implicit */int) ((unsigned short) arr_23 [i_0] [i_2] [(short)3])))))) ? ((~(-2593746968391907749LL))) : (((min((((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [(_Bool)1] [i_2] [i_2])), (var_5))) % (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_8 + 1])) % (((/* implicit */int) arr_18 [i_0] [i_2] [i_0] [(unsigned char)12] [i_0] [i_0])))))))));
                    }
                    for (int i_9 = 4; i_9 < 13; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (short)-4422))));
                        var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 530596488)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (18446744073709551609ULL)));
                        arr_40 [i_2] [i_2] [6LL] [i_2] = ((/* implicit */unsigned char) (short)32757);
                    }
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? (((/* implicit */long long int) ((/* implicit */int) (short)32316))) : (-12LL))) != (((/* implicit */long long int) (((!(((/* implicit */_Bool) 832165893)))) ? (((int) (short)-32767)) : (((/* implicit */int) ((short) arr_28 [i_0] [(signed char)2] [i_0] [(signed char)2])))))))))));
                    arr_41 [i_2] = ((/* implicit */unsigned short) ((int) min((var_1), (((/* implicit */short) arr_18 [i_0] [i_2] [(unsigned char)12] [(unsigned short)9] [i_1] [i_2])))));
                    arr_42 [i_0] [i_1 + 1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [(unsigned char)2] [i_1 + 1] [i_1 + 1] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [(unsigned char)5]))) : (((arr_38 [7U] [i_1 + 4] [i_1 + 2] [i_1 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_2] [i_0] [(unsigned short)5])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_10 = 2; i_10 < 19; i_10 += 4) 
    {
        var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_10 - 2] [i_10 - 2])) ? (var_2) : (((/* implicit */int) arr_44 [i_10]))));
        arr_45 [i_10] = ((/* implicit */signed char) (+(var_15)));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        var_29 = ((/* implicit */unsigned int) arr_18 [(unsigned char)4] [(short)2] [i_11] [i_11] [(short)2] [i_11]);
        arr_49 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_11] [(signed char)4] [(signed char)4] [(unsigned char)6] [i_11])))))) ^ (var_10)));
    }
    var_30 ^= ((/* implicit */int) var_3);
}
