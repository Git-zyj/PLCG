/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200466
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (max((var_6), (((/* implicit */int) min((((/* implicit */short) var_0)), (var_5)))))) : (((((/* implicit */_Bool) min((var_1), (var_1)))) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) min((((/* implicit */long long int) ((var_6) < (((/* implicit */int) arr_4 [i_0] [0ULL]))))), (min((((/* implicit */long long int) arr_4 [0LL] [(unsigned char)16])), (arr_5 [i_0] [i_1 - 1]))))))));
            var_13 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1 - 2] [i_1 + 2]) : (arr_3 [i_1 + 2] [i_1 - 1])))));
            var_14 = ((/* implicit */long long int) arr_4 [i_0] [i_1]);
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                arr_8 [i_0] [i_1 + 2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((max((arr_0 [(short)15]), (((/* implicit */int) var_4)))) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)88)) && (((/* implicit */_Bool) (short)29763)))))))) > (min((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1 + 1] [i_0])), (((((/* implicit */_Bool) var_9)) ? (3758096384U) : (3058251466U)))))));
                arr_9 [i_1] [i_1] = ((/* implicit */long long int) 2361430792U);
            }
        }
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_15 = max((((/* implicit */unsigned int) ((arr_13 [i_3] [i_3] [i_0]) + (((/* implicit */int) arr_12 [i_0] [i_3]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_3] [i_0]))) - (arr_10 [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
            {
                var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1933536503U)), (min((((/* implicit */unsigned long long int) arr_1 [i_4 - 1])), (var_10)))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) + (min((((/* implicit */long long int) ((1933536507U) % (((/* implicit */unsigned int) 875274090))))), (((arr_6 [i_0] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (short)1502)))))))));
                var_18 = ((/* implicit */signed char) (((~(max((((/* implicit */unsigned long long int) 2361430772U)), (var_10))))) >= (arr_3 [i_0] [i_3])));
            }
            for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (unsigned char)153);
                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_10 [i_5] [i_0]) > (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0]))))), (max((((/* implicit */unsigned long long int) arr_15 [i_3] [i_5])), (var_10)))));
            }
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
        {
            arr_22 [(unsigned short)16] [i_6] [(signed char)6] = ((/* implicit */unsigned int) ((1455034719092171690LL) - ((-(-4624383425192923938LL)))));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                for (unsigned char i_8 = 2; i_8 < 17; i_8 += 2) 
                {
                    {
                        arr_28 [i_8] [i_7] [i_6] = ((/* implicit */unsigned int) var_8);
                        var_20 = max((((/* implicit */short) (unsigned char)92)), ((short)-2719));
                    }
                } 
            } 
            var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0])) | (((/* implicit */int) arr_18 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)28151)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) (short)-32751)))) : (((/* implicit */int) max((arr_18 [i_0]), (arr_18 [i_0]))))));
        }
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) % (min((((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0] [i_9])), (var_3))))), (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0]))));
            var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_2)))) ? (2361430792U) : (arr_27 [(_Bool)1] [(_Bool)1] [i_0] [i_9] [i_9] [i_9]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) var_8);
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [12LL] [i_11] [i_11] [i_11]))) == (9ULL))))));
                            arr_43 [i_0] [(unsigned char)2] [i_11] [i_12] [i_13] [(_Bool)1] = ((/* implicit */long long int) var_9);
                        }
                    }
                } 
            } 
            arr_44 [i_10] |= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)158)) >= (((/* implicit */int) var_9)))))));
            arr_45 [i_0] = ((/* implicit */long long int) ((signed char) arr_6 [i_0] [i_0] [i_10]));
        }
        arr_46 [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((max((3744921260U), (3200754575U))) <= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2082)) % (((/* implicit */int) (unsigned char)88))))))));
        var_26 = min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_42 [4LL] [16ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0]))) : (2361430808U))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_30 [(signed char)6] [i_0]))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                {
                    arr_56 [(unsigned char)17] [(_Bool)1] [i_14] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned char)178)) == (((/* implicit */int) (unsigned char)135))))));
                    var_28 = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-18095))))) && (((/* implicit */_Bool) min((((/* implicit */short) arr_52 [i_14])), ((short)-8996))))))), (var_5)));
                }
            } 
        } 
        arr_57 [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
    {
        var_29 *= ((/* implicit */signed char) (((+(arr_55 [i_17] [i_17] [i_17]))) * (((/* implicit */unsigned long long int) min((3744921276U), (((/* implicit */unsigned int) -351493615)))))));
        var_30 = ((((((((/* implicit */int) arr_53 [i_17])) & (((/* implicit */int) var_1)))) ^ (((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned char)152)))))) | (((/* implicit */int) var_1)));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((2361430792U), (((/* implicit */unsigned int) arr_51 [18LL] [i_17]))))) != (((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (9223372036854775807LL)))));
    }
    var_32 = ((((/* implicit */_Bool) max(((-(var_10))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (var_3))))))) ? (((var_3) ^ (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)22198))))))) : (((/* implicit */long long int) min((max((268435454), (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_4)))))))));
    var_33 = ((/* implicit */unsigned short) (_Bool)1);
}
