/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26786
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (var_1)))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) var_1))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((((var_5) == (((/* implicit */unsigned long long int) var_2)))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((var_14), (var_5)))))) ? (((((_Bool) var_7)) ? (((((/* implicit */_Bool) var_17)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_4)) < (var_12)))))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((var_5) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_8))))) ? ((~(var_11))) : (((/* implicit */int) var_3)))) + (2038158241)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_17);
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_4)), (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_1)) : (var_5))) - (((/* implicit */unsigned long long int) ((unsigned int) var_11)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 4; i_5 < 7; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) ((((var_12) + (2147483647))) << (((var_14) - (14546235429290495839ULL)))));
                        arr_21 [6ULL] [i_1] [i_1] [(short)4] [i_1] &= ((/* implicit */short) var_13);
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_5 - 1] [i_0] = ((/* implicit */signed char) ((var_14) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (var_11))))));
                            arr_25 [i_0] [8] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((var_11) + (((/* implicit */int) var_18))))) : (var_5));
                            arr_26 [i_0] [i_0] [6U] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_18)) << (((var_2) - (452960973)))));
                        }
                    }
                }
                for (unsigned short i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((var_1), (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_17)))))));
                        arr_34 [i_0] [i_0] [i_7] [(signed char)8] = ((/* implicit */unsigned short) var_10);
                    }
                    for (signed char i_9 = 2; i_9 < 9; i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18))))) ? (((var_4) ? (((/* implicit */unsigned long long int) var_11)) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) > (((/* implicit */long long int) var_16))))))))));
                        arr_38 [i_0] [i_7] [i_1] [i_0] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) var_10)), (var_14)))));
                        arr_39 [i_0] = ((/* implicit */long long int) var_18);
                    }
                    /* vectorizable */
                    for (signed char i_10 = 2; i_10 < 9; i_10 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_0] [(unsigned short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? ((+(((/* implicit */int) var_10)))) : (var_2)));
                        arr_43 [(unsigned short)9] [i_10] [i_0] [i_0] [6LL] [i_0] = ((/* implicit */long long int) ((var_6) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-537785782864619558LL)))));
                    }
                    arr_44 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_14)))));
                }
                for (unsigned int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (int i_13 = 2; i_13 < 10; i_13 += 4) 
                        {
                            {
                                arr_56 [i_1] [i_13] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) var_18)) - (115))))), (((/* implicit */int) ((_Bool) var_16)))))) ^ (((((/* implicit */_Bool) 9251009668978054177ULL)) ? (537785782864619556LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))));
                                arr_57 [i_0] [i_11] [i_1] [i_1] [(unsigned short)8] [(unsigned short)8] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((var_6) >> (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_2)) : (var_5)))));
                                arr_58 [i_0] [i_0] [i_11] [i_12] [i_13] [i_0] [i_11 + 1] = ((/* implicit */_Bool) var_16);
                            }
                        } 
                    } 
                    arr_59 [i_0] [(unsigned char)8] [i_0] [i_0] &= ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (var_5))) >= ((-(var_14))));
                    /* LoopSeq 1 */
                    for (int i_14 = 2; i_14 < 8; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_15 = 4; i_15 < 8; i_15 += 3) 
                        {
                            arr_66 [10] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_14)))))) ? (((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_12))))))))));
                            arr_67 [i_0] [i_11] [i_0] [i_1] [i_15] = ((/* implicit */short) var_3);
                            arr_68 [i_15] [i_0] [i_11] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) max((min((var_6), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((var_11) - (2038158175)))))))));
                            arr_69 [(unsigned char)2] [(unsigned char)2] [i_11] [i_11] [i_15] &= ((((((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_4))))) + (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_4))))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((signed char) var_16))) : (max((((/* implicit */int) var_8)), (var_2)))))));
                            arr_70 [i_0] [i_0] [i_11] [(short)2] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) var_10)) + (26990)))))) : (var_5))))));
                        }
                        arr_71 [(short)4] [i_14] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_10))))) && (((_Bool) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_0)))))));
                        arr_72 [i_11] [i_0] [i_11] [(signed char)6] [i_11 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_12)) : (var_5)))));
                    }
                }
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((signed char) var_7));
    var_21 = ((/* implicit */long long int) var_13);
}
