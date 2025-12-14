/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223171
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) var_10);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 - 1])) ^ (((/* implicit */int) arr_0 [i_0 - 1]))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1])) : (var_12))) : (((/* implicit */int) arr_3 [i_1])))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_2 - 1] [i_2] [i_2 - 1]), (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2 - 1])))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) & (var_11)))));
            var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])) && (((/* implicit */_Bool) ((unsigned char) var_16))))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            arr_9 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) min(((~(((/* implicit */int) var_4)))), (var_12)))) + (((((/* implicit */_Bool) var_15)) ? (max((var_7), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_3 + 1])) || (((/* implicit */_Bool) var_15))))))))));
            arr_10 [i_1] [i_3] = ((/* implicit */int) max((0U), (((/* implicit */unsigned int) (short)-1))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_4]))) + (arr_12 [i_1] [i_3] [i_4] [i_3 - 1])));
                arr_13 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3 - 1])) > (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_0 [i_3 + 1])))))));
                var_22 = ((arr_12 [i_1] [i_1] [i_3 - 1] [i_4]) + (arr_12 [i_1] [1U] [1U] [i_1]));
            }
            arr_14 [i_3] [i_3] [i_3] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) && (((/* implicit */_Bool) (unsigned char)140))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (var_16))))) ^ (((/* implicit */unsigned long long int) max((((long long int) arr_8 [i_1])), (((/* implicit */long long int) ((((/* implicit */_Bool) 5739399468380744802LL)) ? (0U) : (((/* implicit */unsigned int) -309731337))))))))));
            /* LoopSeq 3 */
            for (int i_5 = 1; i_5 < 7; i_5 += 1) 
            {
                var_23 += ((/* implicit */short) var_4);
                arr_17 [i_3] = ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_11))))), (761497767)))) && (((/* implicit */_Bool) ((var_5) % (arr_16 [i_3 - 1] [i_5 + 2] [i_5 + 3])))));
            }
            for (int i_6 = 3; i_6 < 9; i_6 += 3) 
            {
                var_24 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_18 [i_6 - 3] [i_3])) ? (arr_18 [i_6 - 2] [i_3]) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((unsigned int) 7560952767982037534LL)))));
                arr_20 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_3))) && (((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) arr_5 [i_1]))))))))) + (var_7)));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) % (arr_12 [i_1] [i_3] [(unsigned short)7] [i_6])))) ? (((/* implicit */int) arr_5 [i_3 + 1])) : ((~(((/* implicit */int) arr_8 [i_1]))))))) ? ((-(((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_6 [i_1] [i_3 - 1] [9U]))));
            }
            for (short i_7 = 2; i_7 < 6; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 2; i_8 < 9; i_8 += 1) 
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_16 [(signed char)2] [(signed char)2] [i_8 - 2]), (((/* implicit */unsigned long long int) var_6))))) ? (((unsigned long long int) var_3)) : ((+(var_16)))));
                    var_27 = ((/* implicit */int) min((((/* implicit */long long int) max((arr_6 [i_3 - 1] [i_3 + 1] [i_3 + 1]), (arr_6 [i_3 - 1] [i_3 + 1] [i_3 - 1])))), (var_9)));
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 1; i_9 < 8; i_9 += 4) 
                    {
                        arr_29 [i_1] [(unsigned short)1] [i_7 + 4] [i_3] [i_3] = var_14;
                        arr_30 [i_1] [i_1] [i_3] [i_7] [i_3] [(unsigned char)7] [(unsigned char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) var_15))))) ? (var_0) : (max((arr_27 [i_3] [i_3 - 1] [i_7] [i_8] [i_8 - 2] [i_8] [i_3]), (max((arr_23 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) var_1))))))));
                    }
                    for (unsigned int i_10 = 4; i_10 < 6; i_10 += 2) 
                    {
                        arr_33 [i_1] [i_3] [i_7] [i_3] [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_3 - 1] [i_7 + 2])) && (((/* implicit */_Bool) var_4)))));
                        arr_34 [(unsigned char)6] [i_3] [(unsigned char)6] [i_8 - 1] [9] = max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_10]))))) & (arr_18 [i_1] [i_3])))), (var_13));
                        arr_35 [i_1] [i_3] [i_7] [i_8] [i_10 - 3] = ((/* implicit */int) ((((/* implicit */int) min((arr_26 [i_3 + 1] [i_3 - 1] [i_3] [i_3] [i_3]), (arr_26 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3])))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) && (((/* implicit */_Bool) arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])))))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 1; i_11 < 6; i_11 += 2) 
                    {
                        var_28 += ((/* implicit */unsigned char) var_14);
                        arr_38 [i_1] [i_7] [i_8 + 1] [i_3] = ((/* implicit */short) arr_24 [i_1] [i_3] [i_7 + 4] [i_7 + 4] [i_11]);
                        var_29 -= ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) arr_4 [i_11 + 3])));
                        var_30 |= ((/* implicit */int) ((_Bool) arr_15 [i_1] [i_1]));
                    }
                }
                var_31 = arr_8 [(unsigned short)9];
                arr_39 [i_1] [i_3] = ((/* implicit */unsigned char) (+((-(var_6)))));
                arr_40 [i_3] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))), (max((8532845536373083977ULL), (((/* implicit */unsigned long long int) 1475137356))))));
                var_32 = ((/* implicit */long long int) (+(max((((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) arr_36 [i_1] [i_3] [i_3] [i_3] [i_1] [i_3]))))), (((int) var_0))))));
            }
        }
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_22 [i_1]))));
    }
    /* LoopSeq 2 */
    for (short i_12 = 1; i_12 < 10; i_12 += 4) 
    {
        var_34 = ((/* implicit */unsigned int) ((unsigned short) var_16));
        arr_45 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_12 + 1]), (((/* implicit */long long int) max((var_12), (((/* implicit */int) var_4)))))))) ? (max((arr_1 [i_12]), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_12])), (var_14)))))) : (((/* implicit */long long int) ((unsigned int) (+(arr_1 [i_12 + 1])))))));
        var_35 = ((/* implicit */short) min((((((/* implicit */_Bool) 1475137356)) ? (arr_1 [i_12 - 1]) : (var_7))), (max((var_3), (arr_1 [i_12 - 1])))));
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        var_36 *= ((/* implicit */int) arr_15 [(_Bool)1] [i_13]);
        arr_49 [i_13] [i_13 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) arr_46 [i_13 - 1] [i_13 - 1]))))) ? (((/* implicit */unsigned long long int) (+(1510944051U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7446))) & (5076265183146893589ULL)))));
        arr_50 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (max((((/* implicit */int) var_1)), (arr_32 [i_13]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */int) (signed char)95)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)33444))))));
        arr_51 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1]))) : (arr_12 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)4984)))))));
    }
}
