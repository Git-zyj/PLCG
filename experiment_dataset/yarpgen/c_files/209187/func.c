/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209187
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_13 += ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1]))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [12ULL])))) + (var_7)))) && (((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 - 1] [i_0 + 1]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) (signed char)(-127 - 1))))))) * (((unsigned long long int) -2114588074))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (signed char)16)) + (((/* implicit */int) (signed char)22))))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_16 = ((unsigned long long int) ((unsigned char) var_1));
                            var_17 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((signed char) var_11))) || (((((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_2] [i_1])) && (((/* implicit */_Bool) var_0)))))));
                        }
                    } 
                } 
            } 
            arr_14 [i_2] [i_1] [i_2] &= ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) var_10)));
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) ((int) ((unsigned long long int) var_11)));
            var_19 = ((/* implicit */unsigned int) ((signed char) ((unsigned short) (unsigned char)64)));
            arr_18 [i_1] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 3006100583383344600ULL))) | (((((int) 0U)) * (((/* implicit */int) ((unsigned char) arr_3 [i_1] [8U])))))));
            arr_19 [6] [6] [i_6] = ((/* implicit */int) ((unsigned long long int) ((int) ((signed char) 2680773177U))));
        }
        arr_20 [i_1] = ((((unsigned int) var_3)) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -2146230847)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            arr_23 [i_1] [i_1] [i_7] = ((/* implicit */unsigned int) ((int) (unsigned char)115));
            /* LoopSeq 2 */
            for (int i_8 = 2; i_8 < 8; i_8 += 4) /* same iter space */
            {
                arr_27 [i_1] [i_7] = ((/* implicit */unsigned long long int) ((signed char) (short)-18102));
                arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)104)) || (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_2))))));
            }
            for (int i_9 = 2; i_9 < 8; i_9 += 4) /* same iter space */
            {
                arr_31 [i_1] [i_7] [i_9] = ((/* implicit */unsigned char) ((813251356) / (((/* implicit */int) arr_8 [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 2]))));
                var_20 *= ((/* implicit */short) ((signed char) var_9));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    for (signed char i_11 = 1; i_11 < 7; i_11 += 4) 
                    {
                        {
                            arr_37 [i_11] = ((/* implicit */unsigned long long int) ((arr_26 [i_9 - 2] [i_11] [i_11]) | (((/* implicit */int) ((unsigned short) (short)-32604)))));
                            var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) 3405775571U)) || (((/* implicit */_Bool) var_8))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned int i_12 = 3; i_12 < 6; i_12 += 3) 
            {
                arr_40 [i_1] [i_1] [i_7] [i_12] |= ((4294967287U) - (arr_3 [i_1] [i_12 - 2]));
                arr_41 [i_1] [i_1] [(signed char)3] = ((/* implicit */unsigned long long int) ((unsigned int) var_7));
            }
        }
        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((-185514069) / (-1280709112)));
            var_23 = ((/* implicit */unsigned char) ((((unsigned int) var_5)) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1]))) | (128U)))));
        }
    }
    var_24 = ((/* implicit */signed char) var_0);
}
