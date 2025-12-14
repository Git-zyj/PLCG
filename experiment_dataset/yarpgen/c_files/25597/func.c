/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25597
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 1] [(unsigned short)4] [i_1]))))) : (max((((/* implicit */unsigned long long int) ((unsigned int) -4194304LL))), (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (arr_3 [24U] [(signed char)23]))))))))));
                        arr_13 [i_0] [i_1] [9ULL] [i_3] = ((/* implicit */unsigned char) max(((+(arr_9 [i_3] [i_0]))), (min((1005901915U), (((/* implicit */unsigned int) 0))))));
                        var_14 = ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2] [i_3]);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((arr_9 [i_0] [i_1]), (((/* implicit */unsigned int) arr_11 [i_0] [(short)7] [i_0] [i_0])))), (((/* implicit */unsigned int) ((unsigned short) arr_12 [i_0] [(short)5] [i_2] [i_3])))))) ? (min((arr_3 [i_3 + 1] [i_3 + 1]), (((/* implicit */unsigned long long int) arr_5 [i_3 - 2])))) : (((/* implicit */unsigned long long int) min((arr_7 [i_4] [i_4] [i_3 + 1]), (((/* implicit */long long int) arr_6 [i_0] [i_3 - 2] [i_2])))))));
                            var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_4 [i_0] [i_0])), (arr_8 [i_2] [i_2]))), (((/* implicit */long long int) ((unsigned short) arr_14 [i_2] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_1]) <= (((/* implicit */unsigned long long int) ((int) (short)10699))))))) : ((+(15316962315297529550ULL)))));
                            var_17 = ((/* implicit */int) ((signed char) ((arr_2 [i_3 + 1] [i_3 + 1]) == (arr_2 [i_3 + 1] [i_3 + 1]))));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [(signed char)4] [i_1] [(unsigned short)7] [i_3] [i_4])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [(short)23] [i_0])) : (arr_15 [i_4] [i_3] [(unsigned short)14] [i_2] [i_2] [2LL] [(unsigned short)14]))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */int) arr_11 [i_4] [i_3 - 2] [i_1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_3]))))))) < (min((((((/* implicit */unsigned long long int) arr_9 [i_1] [(unsigned short)20])) + (arr_3 [i_2] [i_3]))), (((/* implicit */unsigned long long int) arr_12 [i_3 - 1] [i_3 - 1] [i_4] [i_4])))))))));
                        }
                    }
                } 
            } 
        } 
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))), (arr_2 [i_0] [i_0]))))));
        var_20 = ((/* implicit */signed char) max((min((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-96)))), (((arr_8 [i_0] [(signed char)4]) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0]))))))), (((((/* implicit */_Bool) arr_8 [22ULL] [i_0])) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((1004738042) - (((/* implicit */int) (unsigned short)15872)))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22304))) / (1760052510U)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned int) arr_20 [i_5] [(unsigned char)11])), (arr_9 [i_5] [23U]))) >> (((/* implicit */int) ((((/* implicit */_Bool) 3235289019477870141LL)) && (((/* implicit */_Bool) -8246663495662440156LL))))))) | (((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_5] [i_5] [i_5])), ((-(((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5])))))))));
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 21; i_6 += 1) 
        {
            for (long long int i_7 = 3; i_7 < 21; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_20 [i_6 - 1] [i_7 - 3])) % (((/* implicit */int) arr_20 [i_6 - 2] [i_7 - 3])))), (((((/* implicit */_Bool) arr_20 [i_6 - 2] [i_7 - 1])) ? (((/* implicit */int) arr_20 [i_6 + 1] [i_7 - 2])) : (((/* implicit */int) arr_20 [i_6 + 2] [i_7 - 3]))))));
                    var_24 = ((/* implicit */_Bool) min(((short)-22993), (((/* implicit */short) (_Bool)1))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) max((arr_9 [i_5] [i_5]), (((unsigned int) arr_9 [i_5] [i_5]))));
        arr_26 [i_5] [i_5] = ((/* implicit */long long int) ((4294967295U) & (676332905U)));
    }
    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 3; i_9 < 23; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                {
                    var_26 = max((((/* implicit */int) arr_33 [(short)16] [i_9] [i_10])), ((-(((/* implicit */int) arr_0 [i_9 - 1])))));
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_8]))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7768))) : (1550545615U)));
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_6 [(unsigned short)18] [i_8] [12]), (((/* implicit */unsigned short) arr_17 [i_8]))))) << (((max((arr_31 [i_8] [i_8]), (arr_30 [(unsigned char)1] [(unsigned char)1]))) + (1256903446131164715LL)))))) ? (((/* implicit */int) arr_0 [i_8])) : (((((/* implicit */_Bool) min((arr_25 [i_8] [i_8] [i_8] [1U]), (arr_1 [2LL])))) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) arr_24 [i_8] [i_8] [i_8])))))))));
        var_30 = ((/* implicit */long long int) arr_11 [i_8] [i_8] [i_8] [i_8]);
    }
}
