/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241240
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((unsigned short) var_7));
        var_20 = ((/* implicit */long long int) min((var_20), ((-(((arr_0 [(_Bool)1]) + (arr_0 [0U])))))));
        arr_2 [i_0] [i_0] = (+(((/* implicit */int) (short)-30343)));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) (((!(var_17))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0)))))))) | (((/* implicit */int) max((var_6), (((/* implicit */short) (!(((/* implicit */_Bool) var_12)))))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [(short)14] [(unsigned short)9])) ? ((~(var_16))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_6))))))) != (((/* implicit */unsigned long long int) (-((~(arr_3 [i_1] [i_1]))))))));
        var_22 = ((/* implicit */unsigned char) (~(((unsigned int) arr_3 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) var_9);
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_2] [i_2])) - (((/* implicit */int) arr_7 [i_2] [i_2]))));
    }
    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
    var_25 = ((/* implicit */long long int) max((var_25), (var_15)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_26 ^= ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_15))));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */_Bool) ((((unsigned long long int) var_3)) % (((/* implicit */unsigned long long int) (~(var_18))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                arr_22 [i_3] [(signed char)1] [i_5] [i_6] [i_3] = ((/* implicit */unsigned char) var_14);
                                arr_23 [i_3] [i_4] [i_5] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */int) var_4)) - (((/* implicit */int) (short)30343))));
                                arr_24 [i_3] [i_4 + 1] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((arr_14 [i_4 + 1] [i_4 - 1] [i_4 - 1]) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1])) - (61)))));
                                arr_25 [4LL] [0ULL] [i_5] [i_6] [6] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (arr_3 [i_6] [i_7])));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_4 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((7004724002537504355ULL) - (7004724002537504340ULL)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_6 [2ULL] [i_4]))) % (arr_20 [i_5] [7] [i_3]))))))));
                }
            } 
        } 
        arr_26 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (_Bool)1))))) : (-1268793552)));
    }
    for (int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
    {
        var_28 -= (+(((/* implicit */int) arr_16 [i_8])));
        var_29 = ((/* implicit */long long int) max((var_29), (arr_28 [i_8] [i_8])));
    }
    for (unsigned short i_9 = 3; i_9 < 14; i_9 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_10 = 3; i_10 < 12; i_10 += 1) 
        {
            var_30 += ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_9))));
            arr_34 [i_9] [i_9] [i_9 - 2] = ((/* implicit */_Bool) ((short) 7004724002537504355ULL));
            /* LoopSeq 1 */
            for (long long int i_11 = 2; i_11 < 12; i_11 += 2) 
            {
                var_31 *= ((/* implicit */unsigned char) var_1);
                arr_37 [i_9] [i_10 + 1] [i_11] = (i_9 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (7004724002537504340ULL))) << (((((/* implicit */int) arr_32 [i_9] [1LL] [i_9])) - (9955)))))) : (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (7004724002537504340ULL))) << (((((((/* implicit */int) arr_32 [i_9] [1LL] [i_9])) - (9955))) - (8535))))));
            }
            arr_38 [i_9] [i_9] = ((/* implicit */long long int) 7004724002537504340ULL);
        }
        arr_39 [i_9] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_7 [i_9] [i_9])) - (75)))))), (max((((/* implicit */unsigned long long int) var_1)), (arr_4 [i_9] [i_9 - 1])))));
        arr_40 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((max((arr_33 [i_9 - 2]), (arr_33 [i_9 - 1]))) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9 - 1])))));
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        var_32 = ((/* implicit */_Bool) ((unsigned long long int) (~(var_16))));
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) arr_41 [i_12 + 1] [i_12 + 1])))))));
    }
}
