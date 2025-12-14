/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220537
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_14 = ((/* implicit */unsigned int) var_2);
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_1])))) > (max((((/* implicit */unsigned int) var_7)), (2243793559U))))))) == (max((arr_3 [i_1]), (((/* implicit */unsigned int) arr_0 [i_1]))))));
        arr_8 [i_1] = 2051173736U;
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)96)) << (((((((/* implicit */int) (unsigned char)96)) - (((/* implicit */int) var_7)))) + (31)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)-945))) : (arr_2 [i_1])));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_16 [i_2] [i_3 + 2] [i_4] = ((/* implicit */short) arr_1 [i_3]);
                    arr_17 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */short) ((((var_10) | (((/* implicit */unsigned long long int) ((long long int) arr_11 [i_3 + 3]))))) ^ (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2] [i_2]))));
                }
            } 
        } 
        arr_18 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((int) arr_15 [i_2] [i_2])), (((((/* implicit */int) (unsigned char)96)) ^ (((/* implicit */int) (signed char)-7))))))), (var_10)));
        var_16 = ((/* implicit */unsigned int) arr_12 [i_2] [i_2]);
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_22 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_14 [i_5] [i_2] [i_2] [i_2]);
            var_17 = ((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((unsigned int) ((((/* implicit */_Bool) arr_19 [i_2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_1 [(unsigned short)10])))) : (max((arr_14 [i_2] [i_5] [i_5] [(_Bool)1]), (((/* implicit */unsigned int) arr_0 [i_2])))));
            arr_23 [i_2] [i_5] [i_2] = ((/* implicit */short) min((((unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_19 [i_2] [i_5]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_6))))))));
            arr_24 [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
        }
        for (short i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    {
                        arr_32 [i_2] [i_6] [i_7] [i_8] = max((((((/* implicit */int) var_5)) & (arr_13 [i_6 - 1] [i_6 - 1] [i_7]))), (((/* implicit */int) arr_11 [i_2])));
                        arr_33 [i_2] [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((max((((((/* implicit */int) var_5)) << (((((/* implicit */int) var_2)) + (13742))))), (arr_12 [i_6 - 1] [i_6 + 1]))) | (((/* implicit */int) arr_27 [i_2] [i_7]))));
                        arr_34 [i_6] = ((unsigned long long int) arr_15 [i_2] [i_6 + 3]);
                        var_18 = ((/* implicit */unsigned long long int) (!(arr_31 [i_6] [i_6] [i_8])));
                        var_19 = ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) arr_15 [i_8] [(unsigned char)6])) ? (arr_3 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))), (var_6)))));
                    }
                } 
            } 
            arr_35 [2] &= ((/* implicit */_Bool) var_8);
        }
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
    {
        arr_38 [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_37 [i_9]))));
        var_20 = ((/* implicit */unsigned int) var_7);
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 24; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                {
                    arr_44 [i_10 - 1] [i_9] = arr_42 [(short)16] [i_10 + 1] [i_10 - 1] [i_11];
                    arr_45 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) arr_39 [i_9])) > (arr_37 [i_9]))));
                }
            } 
        } 
    }
    var_21 = var_2;
}
