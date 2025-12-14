/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41601
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((var_7), (((/* implicit */unsigned long long int) var_11))))));
        arr_4 [i_0] = max((((/* implicit */unsigned long long int) (unsigned char)89)), (min((var_14), (((/* implicit */unsigned long long int) ((unsigned char) (signed char)-42))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) var_17);
        arr_10 [i_1] = ((/* implicit */unsigned char) ((var_10) >= (var_19)));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        arr_18 [i_1] [i_2] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) >= (1818435905U));
                        arr_19 [i_1 + 2] [i_1] [i_1] [i_1 + 2] = ((/* implicit */_Bool) ((3590043098843948905LL) >> (((/* implicit */int) (signed char)41))));
                        arr_20 [i_1] [i_4] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_10)) & (17970476805768186673ULL)));
                        arr_21 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_15 [i_1] [i_1]));
                    }
                    arr_22 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (var_6))))));
                }
            } 
        } 
        arr_23 [4ULL] = ((/* implicit */signed char) ((arr_13 [(unsigned char)0] [i_1] [(unsigned char)0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49043)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            for (unsigned short i_7 = 2; i_7 < 18; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 3) 
                {
                    {
                        arr_34 [i_5] [i_5] [i_7] [i_7] [i_5] [i_5] = ((/* implicit */unsigned int) ((short) ((22ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))))));
                        arr_35 [i_6] = ((/* implicit */short) var_19);
                        arr_36 [(signed char)5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) (signed char)-92)), (var_13)))));
                    }
                } 
            } 
        } 
        arr_37 [(unsigned char)16] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)0)), (((((/* implicit */long long int) 730567474U)) ^ (5372344576933958620LL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 3; i_9 < 17; i_9 += 2) 
    {
        arr_42 [i_9] = ((/* implicit */signed char) ((arr_41 [i_9]) >= (var_19)));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    {
                        arr_49 [i_9 - 3] [i_10] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */long long int) var_19)) & (arr_26 [i_9 - 2])));
                        arr_50 [i_10] [i_12] [i_11] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18))));
                    }
                } 
            } 
            arr_51 [i_9 - 3] [i_9] [i_9] = ((/* implicit */unsigned long long int) var_12);
        }
    }
}
