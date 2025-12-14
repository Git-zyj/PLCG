/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50806
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                var_10 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1 - 3])) / (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((arr_2 [i_1 - 1] [i_1 - 3]), (arr_2 [i_1 - 1] [i_1])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_15 [i_2] [i_1 + 1] = ((/* implicit */short) (unsigned char)155);
                                var_11 = ((/* implicit */signed char) arr_3 [i_2] [i_2] [i_2]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_19 [i_0] [i_1 - 1] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2 + 2])) & (((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2] [i_5])) <= (((/* implicit */int) var_8)))))));
                        var_12 = ((/* implicit */unsigned char) ((((arr_13 [0ULL] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_5]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1]))))) ? (arr_8 [i_0] [i_0] [i_0] [i_5]) : (((((/* implicit */int) var_1)) & (((/* implicit */int) (short)(-32767 - 1)))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        var_13 += ((/* implicit */unsigned long long int) var_3);
                        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_2 + 2] [i_1 - 4]))));
                        var_15 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_1] [i_6])) : (((/* implicit */int) (short)32758))))) + (12947990939555753816ULL)));
                    }
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    arr_24 [i_0] [i_7] = arr_2 [i_7] [i_1];
                    /* LoopSeq 4 */
                    for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (int i_9 = 2; i_9 < 23; i_9 += 2) 
                        {
                            arr_30 [i_0] [(unsigned char)9] [i_1] [i_0] [(short)2] [i_8] [i_9] = ((/* implicit */short) var_4);
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((arr_21 [i_1 - 1] [i_1 - 1] [i_7] [i_9] [i_9]) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)150))))))))));
                            var_17 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)134));
                            arr_31 [12LL] [12LL] [12LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_21 [i_0] [i_0] [i_0] [i_8] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)152)) ? (arr_12 [i_8] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_9] [i_7])))))) : (var_7)));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((_Bool) (unsigned char)108))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_7] [i_8])))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_7] [i_8] [i_10 + 1])) > (((/* implicit */int) var_9))))) : ((~(((/* implicit */int) var_8))))));
                            arr_34 [i_0] [i_1] [i_7] [i_8] [i_8] [i_10] [i_10 + 1] = ((/* implicit */long long int) var_6);
                            var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)31)) % (((/* implicit */int) (unsigned char)150))));
                        }
                        for (unsigned char i_11 = 2; i_11 < 23; i_11 += 1) /* same iter space */
                        {
                            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_1 [i_0])) + (arr_11 [i_1] [i_7] [i_8] [i_1])));
                            var_22 ^= ((/* implicit */short) (unsigned char)28);
                            var_23 *= ((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (unsigned short)6680)))) == (arr_21 [i_11 + 1] [i_11 - 2] [i_11 - 2] [i_7] [i_11 - 2]));
                            var_24 = ((/* implicit */long long int) var_7);
                        }
                        for (unsigned char i_12 = 2; i_12 < 23; i_12 += 1) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */int) (-(arr_12 [i_0] [i_1])));
                            var_26 = ((((/* implicit */_Bool) ((arr_23 [i_12] [i_8] [i_1] [i_1]) / (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_1 - 2]))) : (((long long int) (unsigned char)152)));
                        }
                        var_27 = ((/* implicit */long long int) arr_32 [i_0] [i_0] [i_1] [i_1] [i_1] [(short)19]);
                    }
                    for (short i_13 = 1; i_13 < 22; i_13 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) (+(arr_39 [(signed char)19] [(short)22] [23] [i_13 + 2] [i_13 + 2] [i_0] [i_1 - 3])));
                        arr_43 [i_13] [i_13] [i_7] = ((/* implicit */unsigned int) (unsigned char)98);
                        var_29 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_2)))));
                    }
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
                    {
                        var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_7] [(short)0])) ? (1645614845256268288LL) : (((/* implicit */long long int) arr_20 [i_0] [i_1 - 3]))));
                        var_31 ^= ((/* implicit */signed char) (unsigned short)58841);
                        var_32 *= ((/* implicit */short) (~(arr_12 [i_0] [i_7])));
                    }
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                    {
                        var_33 += ((/* implicit */short) arr_20 [i_0] [i_1 - 3]);
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) -3068979643121480841LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((((/* implicit */int) arr_28 [i_1 - 2] [i_1] [i_1] [i_1 - 1])) == (((/* implicit */int) (unsigned char)176)))))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_15] [(_Bool)1] [i_1 + 1] [i_15] [i_1 + 1] [i_15])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1 - 1] [i_15] [i_1 - 3] [i_0])) : (((/* implicit */int) arr_40 [i_0] [i_1 - 3] [i_1 - 2]))));
                        var_36 += ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 4])) != (((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 4]))));
                        var_37 = ((/* implicit */unsigned short) arr_17 [i_0] [i_1 - 4] [i_0] [i_0]);
                    }
                    var_38 = arr_47 [i_0] [i_1];
                    var_39 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)26436)) ? (arr_13 [i_0] [i_1] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                }
                /* vectorizable */
                for (short i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    var_40 = arr_4 [i_0];
                    var_41 ^= ((/* implicit */unsigned long long int) (~(-3576712272910328168LL)));
                    arr_51 [i_0] [i_16] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_16] [i_16] [i_16]);
                    var_42 = ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_0] [i_1 - 2] [i_16] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_16] [i_0] [i_0]))));
                    var_43 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)169)) ^ (((/* implicit */int) (unsigned char)141))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_44 [i_0] [i_1] [i_16] [i_16] [i_16])) : (((/* implicit */int) (unsigned char)100))))) : (((unsigned long long int) var_6))));
                }
                for (unsigned char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    arr_54 [i_0] = ((/* implicit */_Bool) (unsigned char)115);
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_0] [i_1 - 1] [i_1 - 4] [i_1] [i_1 + 1] [i_17])) || (((/* implicit */_Bool) var_4))));
                }
                var_45 = ((/* implicit */unsigned char) max(((~(arr_39 [i_1 - 4] [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) arr_53 [i_0]))));
            }
        } 
    } 
    var_46 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_2)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_7)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((var_6), (((/* implicit */signed char) (_Bool)1)))))))));
}
