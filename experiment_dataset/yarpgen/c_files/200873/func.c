/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200873
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    var_11 ^= ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) arr_0 [i_0]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        var_13 *= ((/* implicit */short) var_7);
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */long long int) (signed char)3);
                            arr_20 [(unsigned char)3] [i_1] [i_1] [i_4 + 2] [i_5] = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) 876054454)))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            arr_23 [i_6] [(signed char)4] [i_3] [(signed char)3] [(signed char)3] [i_6] [i_6] = ((/* implicit */unsigned short) ((arr_16 [i_4 + 1] [i_4 - 1] [i_4]) > (var_5)));
                            arr_24 [i_0] [(signed char)9] [(_Bool)1] [(short)14] [i_6 + 1] [i_6] [i_0] = (~(((/* implicit */int) arr_19 [i_0] [i_1] [i_3] [i_3] [i_1] [i_6 - 1])));
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            arr_29 [4ULL] [i_1] [i_3] [i_4] [2U] [(_Bool)1] = ((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) | (((((/* implicit */_Bool) arr_27 [i_7] [i_4] [i_1] [i_1])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_4 + 4])) : (((/* implicit */int) arr_14 [i_1] [i_3] [i_4 - 1] [i_7]))))));
                            arr_30 [i_0] [i_1] = ((/* implicit */unsigned short) var_7);
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            var_15 *= ((/* implicit */unsigned short) (-(arr_28 [i_0] [10] [i_3] [i_8 - 1] [i_1] [i_4 + 2] [2LL])));
                            arr_35 [i_3] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))) * (((unsigned int) arr_4 [i_8 + 1] [i_1] [14LL]))));
                            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2147450880U))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        arr_39 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11799442879482484333ULL)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
                        /* LoopSeq 4 */
                        for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            var_17 -= ((/* implicit */_Bool) ((arr_33 [i_0] [(unsigned char)6] [i_3] [(signed char)10] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (0ULL)));
                            var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-1)))) ? (((((/* implicit */long long int) -16925380)) - (5958636290609460264LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)0)))))));
                            var_19 = ((/* implicit */short) arr_26 [i_1] [i_3]);
                        }
                        for (unsigned int i_11 = 2; i_11 < 15; i_11 += 4) 
                        {
                            var_20 = ((/* implicit */short) (signed char)-1);
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))) : (18035654862493994723ULL)));
                            var_22 *= ((/* implicit */int) arr_33 [(short)3] [(short)3] [i_3] [i_0] [i_0]);
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (-(arr_25 [i_11 - 2] [i_11 + 1]))))));
                        }
                        for (int i_12 = 1; i_12 < 15; i_12 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                            arr_48 [i_0] [i_1] [i_3] [(unsigned short)1] [i_12] = ((((/* implicit */int) ((_Bool) var_9))) != (((/* implicit */int) (!(((/* implicit */_Bool) 6ULL))))));
                        }
                        for (signed char i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            var_25 = ((/* implicit */short) (_Bool)1);
                            arr_51 [i_1] [i_1] [(signed char)5] [i_1] [(unsigned char)1] [i_1] [i_1] = ((/* implicit */short) var_1);
                        }
                        var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? (arr_47 [i_9] [i_9] [i_0] [i_9] [i_9]) : (4294967295U)));
                        var_27 = ((/* implicit */signed char) -1);
                    }
                    for (short i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 1; i_15 < 14; i_15 += 4) 
                        {
                            var_28 = ((unsigned char) arr_9 [i_0] [i_0] [i_0]);
                            arr_56 [i_0] [5LL] [(_Bool)1] [i_0] [i_0] [i_0] [5LL] = ((/* implicit */short) (~((-(var_4)))));
                        }
                        for (unsigned long long int i_16 = 2; i_16 < 15; i_16 += 4) 
                        {
                            arr_59 [i_0] [i_1] [i_1] [i_3] [i_14] [i_3] [i_16 - 1] = ((/* implicit */unsigned short) (~((~(var_2)))));
                            arr_60 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                        }
                        for (int i_17 = 1; i_17 < 14; i_17 += 3) 
                        {
                            arr_65 [i_17] [i_17] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_7 [i_0] [i_17 - 1] [i_3] [i_14])))) * (((/* implicit */int) arr_34 [i_0] [i_1] [i_3] [i_3] [i_14] [i_14] [i_3]))));
                            arr_66 [i_3] [i_3] [i_3] [i_17] [(short)13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_0] [i_1] [(signed char)2] [i_17 + 1] [i_0])) ? (((/* implicit */int) arr_42 [i_1] [(unsigned char)7] [(short)1] [i_17 + 1] [i_17])) : (((/* implicit */int) arr_42 [i_0] [i_17] [14LL] [i_17 - 1] [i_3]))));
                        }
                        var_29 *= ((/* implicit */unsigned int) (!(var_7)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) 
                        {
                            arr_70 [(signed char)12] [(signed char)13] [i_3] [i_14] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) 3737929553622257279ULL);
                            var_30 ^= ((/* implicit */signed char) var_5);
                            arr_71 [i_3] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_31 [i_0] [i_0]) : (var_5)))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_0] [i_3])))));
                            var_31 = ((/* implicit */unsigned short) ((unsigned char) 24));
                        }
                        arr_72 [(_Bool)1] [i_1] [i_3] [6LL] = ((/* implicit */signed char) var_8);
                    }
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-38)))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_19 = 1; i_19 < 15; i_19 += 2) 
                {
                    for (signed char i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        {
                            arr_78 [i_0] [i_0] [11LL] [i_0] &= ((/* implicit */unsigned long long int) (unsigned char)126);
                            var_33 = ((/* implicit */_Bool) (+(var_3)));
                            var_34 = ((/* implicit */unsigned long long int) 934679503U);
                            var_35 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_73 [i_0] [10U] [i_19]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_36 &= ((/* implicit */unsigned char) var_4);
}
