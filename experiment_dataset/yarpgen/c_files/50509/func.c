/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50509
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
    var_16 = max((((/* implicit */unsigned short) var_10)), (var_8));
    var_17 = ((/* implicit */signed char) (unsigned short)1046);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(unsigned short)16] &= ((/* implicit */unsigned short) var_5);
        var_18 *= ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_0] [i_3] [i_3] |= ((/* implicit */signed char) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_1])))));
                        var_19 = ((/* implicit */long long int) var_12);
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_2] [(unsigned char)5] [i_1 + 1] [i_1 + 3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)28927)) : (((/* implicit */int) (short)-28933))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [16U] [i_4]))) * (var_3)))));
                        var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 2] [i_1 - 1]))));
                        var_21 = ((/* implicit */int) arr_6 [i_0] [i_1 + 4] [i_1 + 1]);
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [4ULL] [(unsigned char)6] [i_0] [(short)4] [i_0] = ((/* implicit */unsigned char) var_10);
                        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_0]))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            arr_22 [(signed char)13] [(signed char)13] [8] [i_0] [(short)4] = ((/* implicit */unsigned char) var_3);
                            var_23 *= ((/* implicit */unsigned short) 1391545346);
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            var_24 += ((/* implicit */signed char) ((((/* implicit */int) arr_12 [(_Bool)1] [i_5] [i_5] [i_0])) <= (((/* implicit */int) arr_12 [i_2] [i_5] [i_5] [i_5]))));
                            var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_16 [i_0] [i_5] [i_2] [i_0]) <= (((/* implicit */int) arr_4 [i_0] [i_2])))))));
                        }
                        for (signed char i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)28940)))))) / (((unsigned int) var_3))));
                            var_26 = ((/* implicit */_Bool) var_4);
                        }
                        for (signed char i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 3] [i_2] [i_5] [i_9 + 1])) ? (((/* implicit */int) var_14)) : (((int) (unsigned short)27496))));
                            arr_34 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
                        }
                        for (signed char i_10 = 1; i_10 < 15; i_10 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_10] = ((/* implicit */long long int) arr_17 [i_0] [i_1] [i_0] [2U] [i_0]);
                            var_28 += ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                            var_29 = ((((((/* implicit */_Bool) 15393162788864LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)148)))) - (((/* implicit */int) arr_0 [i_10 - 1])));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
                        {
                            arr_44 [16ULL] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1 + 2]))));
                            arr_45 [1] [1] [i_0] [i_0] [(unsigned short)11] = ((/* implicit */unsigned char) ((unsigned int) var_11));
                        }
                        for (long long int i_13 = 0; i_13 < 17; i_13 += 1) /* same iter space */
                        {
                            arr_48 [i_13] [i_0] [i_0] [i_0] [11ULL] [i_0] = ((/* implicit */unsigned char) (unsigned short)38041);
                            var_30 = ((/* implicit */unsigned short) var_1);
                        }
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_11] [(short)3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)18474))));
                        var_31 = ((/* implicit */unsigned char) ((long long int) (unsigned short)38022));
                    }
                    arr_50 [i_0] [(unsigned short)16] [i_0] = ((unsigned long long int) arr_0 [(unsigned short)1]);
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 15; i_14 += 4) 
                    {
                        for (long long int i_15 = 1; i_15 < 14; i_15 += 4) 
                        {
                            {
                                arr_56 [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_4))))));
                                var_32 = ((/* implicit */unsigned char) (-(arr_1 [i_15 + 3])));
                                var_33 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_14]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(-1854120820)))) ? (((/* implicit */int) arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)29282)))), (((/* implicit */int) max((arr_18 [i_0]), (arr_18 [i_0]))))));
    }
    for (unsigned long long int i_16 = 3; i_16 < 14; i_16 += 3) /* same iter space */
    {
        arr_59 [(signed char)16] = ((/* implicit */long long int) (unsigned char)113);
        var_35 &= (unsigned short)32766;
        arr_60 [i_16] [(unsigned short)5] &= ((/* implicit */signed char) min((((/* implicit */int) min((arr_4 [(_Bool)1] [i_16 + 3]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))) <= (arr_42 [i_16] [i_16] [i_16] [i_16] [i_16]))))))), (((((/* implicit */_Bool) arr_33 [i_16] [(unsigned char)2])) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_24 [i_16] [i_16] [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 3] [12LL]))))));
    }
    for (unsigned long long int i_17 = 3; i_17 < 14; i_17 += 3) /* same iter space */
    {
        arr_63 [2ULL] [(short)12] = ((/* implicit */unsigned long long int) -385223298);
        arr_64 [(short)3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (min((((/* implicit */unsigned long long int) arr_23 [(_Bool)1] [i_17] [i_17] [i_17])), (min((arr_42 [i_17] [i_17] [(unsigned short)8] [i_17] [i_17]), (((/* implicit */unsigned long long int) var_2))))))));
        var_36 = ((/* implicit */unsigned char) max((((/* implicit */int) (((+(var_5))) <= ((~(var_5)))))), (((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27494))) * (arr_32 [i_17] [i_17] [i_17]))))));
    }
}
