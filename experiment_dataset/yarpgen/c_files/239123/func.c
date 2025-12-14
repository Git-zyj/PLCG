/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239123
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
    var_13 = ((/* implicit */long long int) (_Bool)0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_14 = arr_0 [i_0] [i_0];
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [0U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 23; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) (signed char)127)))));
                    arr_10 [i_3] = ((/* implicit */unsigned short) ((min((arr_5 [i_3 - 2] [i_3 - 1] [i_3 - 2]), (arr_5 [i_3 - 2] [i_3 + 1] [i_3 - 2]))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1]))) : (((arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 2]) ? (((/* implicit */int) arr_5 [i_3 - 2] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_3 - 2] [i_3 - 1] [i_3 + 1]))))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_8))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_6 [i_1] [i_1])))))))), (3572604258U)));
        var_18 = ((/* implicit */unsigned char) (unsigned short)25153);
    }
    /* LoopSeq 3 */
    for (int i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1801492834)) ? ((-(((/* implicit */int) arr_2 [i_4 + 1])))) : (((/* implicit */int) arr_2 [i_4 + 3]))));
        /* LoopSeq 2 */
        for (signed char i_5 = 1; i_5 < 11; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((arr_8 [i_5] [i_5 + 1] [i_5 - 1]) ^ (arr_11 [i_5 - 1])));
            arr_15 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(var_9)))) / (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) : (254474543U)))) ? (arr_0 [i_5] [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [7LL] [i_5])) ? (((/* implicit */int) arr_7 [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_3 [i_5])))))))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_21 *= ((/* implicit */long long int) -1);
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 11; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_22 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_4 + 3] [i_6])) ? (((/* implicit */long long int) -1801492835)) : (var_5))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [20] [20])) ? (3866365730U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_11 [i_8])))) ? (arr_17 [i_4 + 1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
                    }
                } 
            } 
        }
    }
    for (int i_9 = 1; i_9 < 9; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            for (signed char i_11 = 1; i_11 < 9; i_11 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1801492835)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (_Bool)1))))), (((unsigned int) arr_6 [i_9] [i_11])))) < (((unsigned int) ((long long int) var_10))))))));
                    var_25 *= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)64)) >> (((/* implicit */int) arr_18 [i_9 + 3] [i_10] [i_11 + 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_11 + 2] [i_11 + 2] [i_11])) == (arr_1 [14U])))) / (min((((/* implicit */int) arr_24 [i_9] [i_10] [i_11] [i_9])), (arr_12 [i_9] [i_10])))))) : (arr_17 [i_9]));
                }
            } 
        } 
        var_26 |= ((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */int) arr_22 [i_9 - 1])) : (((/* implicit */int) arr_22 [i_9 + 2])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_22 [i_9 + 3])) : (((/* implicit */int) arr_22 [i_9 - 1]))))));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 9; i_12 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) var_7);
        arr_35 [i_12 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [0ULL] [i_12])) >= ((-(((/* implicit */int) var_2))))));
    }
}
