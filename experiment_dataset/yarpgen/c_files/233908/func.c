/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233908
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
    var_15 = ((/* implicit */signed char) max(((-(var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-18692)), (var_0)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    arr_6 [2ULL] [i_1] [0ULL] [(unsigned char)9] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_5 [(unsigned char)5] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)235)))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), ((unsigned char)21)));
                        var_17 = ((/* implicit */unsigned short) ((short) (~(var_7))));
                        var_18 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [(unsigned char)8])) / (((/* implicit */int) (unsigned char)235)))) ^ (((/* implicit */int) (!(arr_3 [i_0]))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((short) (unsigned char)21)))));
                        var_20 = ((/* implicit */int) var_7);
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [4U] [i_1] [i_1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_9 [i_0] [7LL] [i_0] [6LL] [i_2 + 2] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 2]))));
                        var_22 += ((/* implicit */unsigned int) (unsigned char)20);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((arr_8 [8ULL]) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) (_Bool)1)))))));
                            arr_14 [i_1] [i_1] [i_2 - 2] [i_4] [i_0] = ((/* implicit */unsigned char) ((long long int) arr_0 [i_2 - 1] [i_2 + 2]));
                            var_24 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [4ULL] [4ULL] [4ULL]))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_8 [(_Bool)1]))));
                            arr_15 [i_0] [i_1] [(signed char)2] [i_4] [i_1] = ((/* implicit */short) ((arr_10 [i_2 + 1] [i_2 - 2] [i_1]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)24)))))));
                        }
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) (unsigned char)143);
                            var_27 += ((/* implicit */int) var_1);
                            arr_18 [i_1] [i_1] [8] [(short)4] [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)147)) ? (2393594280U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)8] [i_1] [i_2 + 3] [10LL] [i_6] [10LL])))))));
                            arr_19 [i_0] [9U] [i_4] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2] [i_6] [i_2 + 1]))));
                        }
                        for (short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            arr_23 [i_0] [(unsigned short)5] [i_1] [i_4] [i_7] [(unsigned short)5] = ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)127)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_7] [i_2 - 1] [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)20))))));
                        }
                        arr_24 [i_0] [(unsigned char)2] [i_0] [(unsigned char)2] [(unsigned char)2] [6U] &= ((/* implicit */int) ((((unsigned long long int) var_13)) - (((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235)))))));
                    }
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        arr_28 [i_1] [i_1] [(unsigned short)11] = ((/* implicit */short) var_0);
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)40)) ? (arr_0 [i_2 - 2] [i_2 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_22 [i_0] [i_0] [7LL] [i_1] [i_2] [i_1]))));
                    }
                    for (unsigned int i_9 = 4; i_9 < 10; i_9 += 3) 
                    {
                        var_31 *= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
                        var_32 = ((/* implicit */long long int) arr_30 [i_1] [i_1] [i_2] [i_0] [i_0] [2]);
                    }
                }
                /* vectorizable */
                for (unsigned char i_10 = 1; i_10 < 10; i_10 += 4) 
                {
                    arr_34 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_0 [3ULL] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)48261))));
                    arr_35 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [9]))) : (-8664179074579049214LL)))));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (var_11)));
                    arr_36 [i_1] [i_1] = ((var_7) % (((/* implicit */unsigned long long int) 2041165745)));
                }
                var_34 = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned short) var_11);
}
