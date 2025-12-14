/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25629
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) arr_1 [i_0 - 1])));
        var_12 = ((/* implicit */short) arr_2 [i_0 + 3]);
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) var_5);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned char i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_2] [11ULL] [i_1] [i_5 - 3] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_5 - 3] [i_5 - 2] [i_5 + 1] [i_5 - 3] [i_5 - 1] [i_5 + 1] [i_5 + 1])) / (((/* implicit */int) arr_16 [i_5 - 3] [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 - 3] [i_5 - 3] [i_5 + 1]))));
                            var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1] [i_2] [i_4] [i_5 - 2])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    {
                        var_14 -= ((/* implicit */int) (_Bool)1);
                        var_15 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_19 [i_7] [i_6] [i_2] [i_1])) ? (((/* implicit */int) arr_17 [i_1] [i_2] [i_2] [i_6] [i_7])) : (((/* implicit */int) var_8)))));
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_2] [i_1]))) ^ (arr_20 [i_1] [i_6] [i_6]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7]))))))));
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_7] [i_6])) ? (((/* implicit */int) arr_10 [i_7] [(unsigned short)1] [i_1] [i_1])) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6] [8U] [7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [12LL])))))));
                    }
                } 
            } 
        }
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [(_Bool)1] [4U])) : (((/* implicit */int) arr_25 [i_1] [i_8])))))));
            arr_28 [i_1] = ((/* implicit */unsigned int) min((arr_10 [10ULL] [i_8] [10ULL] [i_1]), (((/* implicit */unsigned short) arr_16 [(_Bool)1] [i_1] [i_8] [i_8] [i_8] [i_1] [i_8]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_9 = 1; i_9 < 11; i_9 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_12 [i_9 + 2] [(short)8] [i_9] [i_9]))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_9 + 1]))) : (var_3)))) ? (((((/* implicit */_Bool) var_8)) ? (arr_27 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) arr_2 [i_9 + 2]))));
            arr_31 [i_1] [i_9] = ((/* implicit */_Bool) arr_15 [i_9] [i_9 + 1] [i_9] [i_9] [i_9]);
            var_21 ^= ((/* implicit */_Bool) arr_9 [i_1]);
        }
    }
    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) arr_11 [i_10] [i_10] [i_10] [7]);
        arr_34 [(unsigned short)9] = ((/* implicit */short) var_9);
        arr_35 [i_10] = ((/* implicit */unsigned short) var_0);
    }
    var_23 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)33144)) : (((/* implicit */int) (_Bool)1))));
}
