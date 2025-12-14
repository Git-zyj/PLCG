/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240255
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
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-16))));
    var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5398))) : (var_11))), (((/* implicit */unsigned int) var_7))));
    var_19 = (~(((/* implicit */int) ((_Bool) 3570438119U))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
        var_21 = ((unsigned long long int) (signed char)15);
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    arr_10 [i_1] [i_1] [i_3] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)2))));
                    var_22 ^= ((/* implicit */unsigned long long int) ((2854848268U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526)))));
                    arr_11 [(signed char)13] [i_2] [i_1] = ((/* implicit */unsigned char) arr_4 [i_2] [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5540979547919218452LL) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1]))))), (arr_8 [i_2])));
                        var_24 = ((/* implicit */unsigned int) ((unsigned short) (signed char)16));
                        arr_14 [i_2] [2LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6749078503605549785ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (((-(((/* implicit */int) arr_0 [i_1])))) != (((/* implicit */int) (signed char)15)))))));
                        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_9)) % (((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)-16))))) ? ((~(((/* implicit */int) (signed char)54)))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_26 = ((((/* implicit */int) (unsigned short)54479)) + (((/* implicit */int) var_5)));
                        arr_17 [i_2] [i_1] |= ((/* implicit */unsigned long long int) ((((unsigned int) var_5)) & (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_3)) - (60508))))))));
                        arr_18 [i_2] [i_2] [0ULL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_0 [i_2 - 1]))));
                    }
                    for (signed char i_6 = 3; i_6 < 19; i_6 += 3) 
                    {
                        arr_23 [i_1] [i_1] [i_1] [i_3] [i_2] [i_6] = ((/* implicit */short) var_15);
                        arr_24 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */signed char) 2078520784U);
                        var_27 = var_9;
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_7))));
                            var_29 *= ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_1] [i_2 + 2] [i_1])) * (((/* implicit */int) arr_16 [i_7] [i_2 + 1] [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_2 + 1] [i_7]))))) : (((/* implicit */int) max((arr_16 [i_1] [i_2 - 3] [i_1]), (arr_16 [i_1] [i_2 + 2] [i_7])))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                        {
                            var_30 ^= (_Bool)0;
                            var_31 |= ((/* implicit */unsigned short) arr_26 [i_1] [i_2] [i_3] [i_6] [i_8]);
                        }
                        var_32 *= ((/* implicit */unsigned long long int) (+(((unsigned int) max((var_13), (((/* implicit */long long int) arr_12 [i_6 - 3] [i_3] [i_2] [i_1])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            {
                                arr_35 [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (unsigned short)65526)) >= (((/* implicit */int) (short)-10587))))));
                                var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)15))));
                                arr_36 [i_2] [i_9] [4] [i_3] [i_2 - 2] [i_2] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)34271))))))));
                                arr_37 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_33 [i_1] [i_3] [i_9] [i_10]))))), ((-(max((((/* implicit */unsigned int) arr_31 [i_1] [i_2] [i_3] [i_2] [19ULL])), (var_12)))))));
                                var_34 ^= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3652458134U)) ? (arr_9 [i_1] [i_1] [i_9]) : (((/* implicit */int) (signed char)50)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_38 [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8932))) <= (3277257923U)));
        var_35 = ((/* implicit */_Bool) max(((unsigned short)49633), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) >= (var_15))))));
    }
}
