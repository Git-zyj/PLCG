/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212270
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) 2799530931U);
                        arr_10 [i_1] [i_3] = ((/* implicit */_Bool) -4028984637180442615LL);
                    }
                } 
            } 
            var_13 = var_3;
            arr_11 [i_0] = ((/* implicit */short) arr_7 [i_0] [i_0]);
        }
        var_14 = ((/* implicit */signed char) var_0);
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
    {
        var_15 = ((/* implicit */int) 4028984637180442614LL);
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (2799530936U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (min((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_4] [(unsigned char)18]))) : (((/* implicit */unsigned long long int) arr_13 [6LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_4 - 1] [i_4 + 1] [(unsigned char)4] [i_4 + 1]))))) : ((~(18446744073709551615ULL)))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            arr_17 [3LL] = ((/* implicit */signed char) var_2);
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 2; i_7 < 12; i_7 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) -1LL);
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 3) 
                        {
                            arr_26 [i_4 + 1] [i_6] [i_6] [i_4 + 1] [i_6] [7LL] = ((/* implicit */long long int) (unsigned char)10);
                            var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)31633)), (min((arr_25 [i_8] [i_7 - 1] [0ULL] [i_5] [i_5] [i_4] [i_4]), (-4LL)))));
                            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 13884283445390454914ULL))));
                            var_20 = ((/* implicit */signed char) -1);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_29 [i_4] [(unsigned char)7] [i_6] [i_7] [i_9] [i_7] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (arr_24 [i_4] [i_5] [(unsigned short)5] [9LL] [i_9] [i_5] [9LL]) : (((/* implicit */unsigned long long int) var_10))))))))));
                            arr_30 [(unsigned short)6] [(unsigned short)6] [(unsigned char)4] [i_6] [i_9] = ((/* implicit */unsigned char) arr_8 [i_4] [i_5] [i_7 + 2] [i_5] [(unsigned short)20] [i_4]);
                            var_21 = ((/* implicit */signed char) 9221120237041090560ULL);
                            var_22 = ((/* implicit */unsigned long long int) arr_5 [i_4 + 1] [i_4 + 1] [i_7 + 2] [i_9]);
                        }
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            arr_33 [i_4] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) arr_1 [i_4 - 1])));
                            arr_34 [i_6] [i_5] [i_6] [i_7] [i_5] [i_6] = ((/* implicit */unsigned short) -22LL);
                            var_23 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)20221));
                            arr_35 [(_Bool)1] [i_5] [i_6] [i_5] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_6] [i_4 - 1]))));
                            var_24 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_23 [i_4] [i_4] [5] [i_5] [5] [i_7] [i_10])) ? (min((arr_3 [i_7] [(unsigned short)23]), (arr_1 [i_10]))) : (((/* implicit */unsigned long long int) (~(1756877176U)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_7] [i_7] [i_6]))))) ? (min((((/* implicit */unsigned long long int) arr_28 [(unsigned short)13] [i_10] [i_6] [i_7] [i_10] [i_10])), (arr_31 [i_6] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_6] [i_4])))))));
                        }
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */_Bool) arr_4 [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 13; i_11 += 3) 
    {
        for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            {
                var_26 = ((/* implicit */unsigned int) max((((unsigned long long int) arr_32 [i_11 + 1] [i_11 + 1] [i_11] [2LL])), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)15)))));
                /* LoopNest 3 */
                for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) min(((((_Bool)0) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned short)32047)))), (((/* implicit */int) ((unsigned char) min((((/* implicit */int) (unsigned char)100)), (var_2)))))));
                                arr_47 [i_11 - 1] = ((/* implicit */short) var_4);
                                arr_48 [i_11 - 2] [i_11 - 2] [i_13] [i_15] = ((/* implicit */unsigned char) arr_1 [i_11 - 2]);
                                var_28 = ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                } 
                arr_49 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [6] [10LL] [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 2])) ? (((/* implicit */int) min((arr_43 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 - 2]), (arr_43 [i_11 - 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 - 2])))) : (((/* implicit */int) arr_43 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 2]))));
                arr_50 [9LL] [9LL] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (signed char)-5)), (1383567507219784071LL))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_14 [i_11 - 1])) : (((/* implicit */int) arr_21 [i_12] [(unsigned short)12] [i_11] [i_11 + 1])))))));
            }
        } 
    } 
}
