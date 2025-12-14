/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228364
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
    var_13 += ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    arr_9 [i_0] [(signed char)7] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2] [(unsigned short)8] [i_0] [i_0])) & (((/* implicit */int) (signed char)-87))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_13 [i_3] = (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1))));
                        arr_14 [(short)7] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((short) 3089901713924879834LL));
                    }
                    arr_15 [(signed char)6] [i_2] [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_2 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 2]))) : (arr_0 [i_2 + 2] [i_2 - 3])));
                    var_14 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_0] [i_2 - 2] [i_0]))));
                    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [12LL] [i_1] [i_2 - 3] [i_2]))));
                }
                /* vectorizable */
                for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_4]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 1])))))) ? (arr_7 [i_0] [i_1] [i_1]) : (((((/* implicit */int) var_4)) & (((/* implicit */int) arr_21 [i_6] [(short)6] [(short)6] [i_0] [i_0] [i_0]))))));
                            var_18 *= ((/* implicit */unsigned char) ((long long int) var_12));
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_19 = ((((((/* implicit */int) arr_5 [i_7] [i_4] [(unsigned short)3] [i_0])) * (((/* implicit */int) arr_1 [i_5])))) * (((/* implicit */int) var_2)));
                            var_20 ^= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [8U]))))));
                            var_21 *= ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) - (arr_0 [i_0] [i_5]))));
                            var_22 = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_4 - 1]));
                            var_23 = ((/* implicit */_Bool) var_3);
                        }
                        arr_25 [(short)7] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) -7232320815871987337LL));
                        var_24 *= ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        var_25 ^= ((/* implicit */signed char) ((arr_27 [(unsigned char)9] [i_4] [i_1] [(_Bool)1] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 2])))));
                        var_26 = ((/* implicit */long long int) ((unsigned char) arr_18 [i_8] [i_4 + 1] [i_1] [i_1] [i_0] [(short)12]));
                        arr_28 [(_Bool)1] [i_8] [(_Bool)1] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [(short)2])) : (arr_0 [13U] [i_8]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-98)))))));
                    }
                    var_27 |= ((/* implicit */_Bool) var_4);
                    arr_29 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_4])))));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [(unsigned char)13] [(signed char)5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [12U] [i_1] [i_0] [i_0] [i_4])))))) ? (((int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-22)))))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_32 [i_9] [i_1] [i_9] = ((/* implicit */long long int) var_1);
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_9] [i_9]))))))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 1; i_10 < 13; i_10 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_9] [i_0] [i_10] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_10] [i_1] [i_1] [i_1] [i_0] [i_0])))))));
                        arr_35 [i_9] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_31 [i_0] [i_1] [(signed char)15] [i_10 + 2])) > (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_0] [i_0] [1U] [i_10]))))));
                        var_31 = ((/* implicit */short) (-(arr_7 [i_10 - 1] [(unsigned short)4] [i_10 + 2])));
                    }
                    for (signed char i_11 = 1; i_11 < 13; i_11 += 2) /* same iter space */
                    {
                        var_32 *= ((/* implicit */unsigned char) ((((arr_2 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27648))) : (var_8))) >> (((((((/* implicit */_Bool) (short)-25403)) ? (3807636664U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1]))))) - (3807636656U)))));
                        var_33 *= ((/* implicit */unsigned int) 1236905531711139293LL);
                    }
                }
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((unsigned int) min((arr_3 [i_0]), (var_12)))))));
                            var_35 |= var_12;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_14] [i_15] [i_15])) || (((/* implicit */_Bool) var_9))));
                            var_37 *= ((/* implicit */_Bool) (signed char)51);
                        }
                    } 
                } 
            }
        } 
    } 
}
