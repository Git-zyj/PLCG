/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52819
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) (unsigned short)64318);
                /* LoopSeq 3 */
                for (long long int i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_18)));
                            arr_14 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)11413)) ^ (((/* implicit */int) var_5))))));
                            arr_15 [i_0 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 + 1] [i_0] [i_0] [i_2 + 1]))) : (4294967284U)));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) 
                        {
                            arr_18 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = (!(((((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0])) != (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
                            arr_19 [i_0] [i_3 - 1] [i_2] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_2] [i_2])), (var_18))));
                            arr_20 [i_0] [i_0 - 1] [i_3 + 1] [i_0 - 1] [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_0] [i_3]));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) arr_12 [i_0 - 1] [i_2] [i_2 - 3] [i_2] [i_0] [i_2]))), (min((((arr_6 [i_0] [i_2] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_8))), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_5 + 1]))))));
                        }
                        arr_22 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967284U))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_26 [i_0] = ((/* implicit */_Bool) 2310383384U);
                        arr_27 [14ULL] [(_Bool)1] [i_0] [i_0] [14ULL] [14ULL] = ((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 1])) & (((/* implicit */int) var_6)))) & (((/* implicit */int) ((3379037760U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))), (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0] [i_0] [5ULL] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_13)))));
                    }
                    arr_28 [i_1] [i_1] [(_Bool)0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((_Bool)1))))));
                    arr_29 [(_Bool)0] [i_1] [i_2] |= ((/* implicit */unsigned short) (~(((((unsigned long long int) (_Bool)1)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_2] [i_1] [i_1] [i_0]))))))));
                }
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    arr_32 [i_0] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_1] [i_7])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_0]))))), (((unsigned long long int) 4294967284U)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_38 [i_0] [i_0] = ((/* implicit */unsigned short) 6830049254768477811ULL);
                                arr_39 [i_0] [i_0] [i_0] [i_8] [9LL] = ((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned long long int) arr_5 [(unsigned char)6] [i_8] [i_7] [i_0]))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 2; i_10 < 12; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        arr_45 [i_0] [i_0] [i_11 + 2] = ((/* implicit */short) arr_10 [i_0 - 1] [i_0] [i_10 + 3] [i_11 + 3]);
                        arr_46 [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_10 + 1] [i_11 + 3])) & (arr_30 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1])));
                        arr_47 [(short)13] [i_0] [i_0] [(short)13] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_11 + 2] [0ULL]))));
                        arr_48 [i_0] [i_0] [i_10] &= ((/* implicit */unsigned char) var_5);
                    }
                    arr_49 [i_0] = ((/* implicit */_Bool) ((short) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
                    arr_50 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967284U))));
                }
                arr_51 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                arr_52 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])) % (((/* implicit */int) arr_34 [i_1] [i_1] [i_0] [i_0])))) : (((/* implicit */int) min((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_15)))), (arr_10 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((unsigned short) var_12));
}
