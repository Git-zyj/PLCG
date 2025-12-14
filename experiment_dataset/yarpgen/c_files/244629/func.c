/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244629
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
    var_18 += ((/* implicit */unsigned short) var_7);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_19 = var_14;
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(4294967276U))))));
                        var_21 ^= ((/* implicit */unsigned char) ((int) arr_8 [i_0 - 1] [i_0 + 1]));
                        arr_10 [(unsigned short)1] [i_1] [7U] [i_3] = ((/* implicit */long long int) 4294967285U);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                arr_13 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0 + 1]))));
                arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */int) ((((/* implicit */long long int) 4294967279U)) == (-7272157550854515621LL)))) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1]))));
            }
        }
        for (unsigned short i_5 = 3; i_5 < 8; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_6 = 2; i_6 < 6; i_6 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0 + 1])) >> (((((((/* implicit */_Bool) ((int) 0U))) ? (((unsigned long long int) (unsigned short)22477)) : (((/* implicit */unsigned long long int) arr_5 [i_5 - 2] [i_0 + 1] [i_6 - 2])))) - (11323883901961877315ULL)))));
                arr_20 [i_0] [i_5] [i_0] = ((long long int) 15244108830187555963ULL);
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0 + 1] [i_5 - 1]) : (arr_0 [i_0 + 1] [i_5 - 1])))) ? (((long long int) arr_16 [i_0 + 1])) : (((/* implicit */long long int) arr_0 [i_0 + 1] [i_5 - 1]))));
                arr_21 [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0 + 1])))));
            }
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                var_24 *= ((/* implicit */unsigned char) (unsigned short)0);
                var_25 ^= ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_5 - 1] [i_0]);
            }
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    {
                        var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_15)), (((arr_4 [i_0 + 1] [i_5 + 2] [i_8]) + (arr_4 [i_0 + 1] [i_5 + 2] [i_5 + 2])))));
                        var_27 = ((/* implicit */int) 4930069441761073990LL);
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 4; i_10 < 9; i_10 += 3) 
                        {
                            arr_31 [i_0] [i_5] [i_8] [i_10] [i_10] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 274925938U))));
                            arr_32 [i_8] [i_10] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3695512899U)) ? (arr_24 [i_0 + 1] [2ULL] [i_0 - 1] [i_0 + 1]) : ((~((~(4294967276U)))))));
                        }
                    }
                } 
            } 
            arr_33 [i_0 + 1] = ((/* implicit */unsigned short) arr_5 [i_5 - 2] [i_5 - 2] [i_0 - 1]);
            arr_34 [i_0 + 1] [i_5 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(max((0U), (((/* implicit */unsigned int) arr_11 [i_0 + 1] [0])))))))));
        }
        var_28 = ((/* implicit */int) arr_8 [i_0] [i_0 + 1]);
    }
    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
    {
        arr_37 [i_11] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_36 [i_11])), ((-(2377181092578959407ULL)))));
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */long long int) 1958407149U)) : (((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */long long int) 2983842139U)) : (-6877632207670780001LL))))), ((~(arr_35 [2ULL]))))))));
    }
    for (unsigned int i_12 = 2; i_12 < 19; i_12 += 3) 
    {
        arr_42 [i_12 + 2] [i_12] = ((/* implicit */unsigned short) (~(-7468490962825943514LL)));
        /* LoopNest 2 */
        for (unsigned short i_13 = 2; i_13 < 21; i_13 += 1) 
        {
            for (long long int i_14 = 3; i_14 < 19; i_14 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) arr_40 [i_13] [i_13 - 2]))));
                    var_31 *= ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) 3862905423U))))))));
                }
            } 
        } 
        arr_48 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? ((-(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1536995312786466516LL)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_45 [3ULL])), (4294967294U))))));
    }
    for (unsigned int i_15 = 2; i_15 < 16; i_15 += 4) 
    {
        arr_51 [11ULL] [i_15] = ((/* implicit */unsigned short) ((((unsigned int) arr_44 [i_15] [(unsigned char)6])) - (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((int) var_3)))))));
        arr_52 [i_15] = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)2));
    }
}
