/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214281
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_2 [i_0]) : (var_8))))), (arr_2 [i_0])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */int) arr_8 [i_0] [i_0] [2U] [i_0]);
                            var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_1] [i_0]))) ? (((/* implicit */int) arr_8 [i_1 + 2] [i_3] [i_3] [4U])) : (((/* implicit */int) ((short) (unsigned char)185)))))));
                            var_14 = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2] [i_1] [i_1 + 1]))));
                        }
                    } 
                } 
            } 
            arr_17 [i_1] = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_0] [i_0]));
        }
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [(short)2])) ? (arr_6 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5 + 1] [i_5] [i_5 - 1] [i_5])))));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)78)) : (2147483635))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_5 - 1] [(_Bool)1] [i_5])) ? (arr_22 [i_5 + 1] [i_5 + 1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71)))));
                            var_18 = ((/* implicit */unsigned short) (((+(-1LL))) + (((/* implicit */long long int) (~(((/* implicit */int) (short)-15706)))))));
                        }
                    } 
                } 
            } 
            arr_28 [i_5 - 1] [i_5] [i_0] = ((/* implicit */int) arr_15 [i_5] [i_5]);
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
        }
        var_20 = ((/* implicit */long long int) 3210554962U);
    }
    for (signed char i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (1493299814) : (((/* implicit */int) (short)32399))))) > (((unsigned int) arr_18 [i_9] [i_9] [i_9]))));
        arr_32 [(unsigned char)7] = ((/* implicit */unsigned long long int) ((unsigned char) 1152921504604749824ULL));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 3) 
    {
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 16; i_14 += 3) 
                        {
                            {
                                arr_47 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_33 [i_10])), (1LL))))))) ^ (((((/* implicit */int) arr_41 [i_10 - 1] [i_10] [i_10 - 1])) << ((((+(((/* implicit */int) arr_33 [i_10])))) - (35)))))));
                                var_22 = ((/* implicit */long long int) (((+(((((/* implicit */int) (unsigned char)185)) ^ (((/* implicit */int) arr_33 [i_12])))))) >> ((((~((-(arr_39 [i_12]))))) - (4014473745U)))));
                                var_23 = (+((+(((/* implicit */int) arr_33 [i_10 + 1])))));
                            }
                        } 
                    } 
                } 
                arr_48 [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_15 = 0; i_15 < 24; i_15 += 3) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) 
        {
            for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                {
                    arr_57 [i_15] [i_16] [i_17] [i_15] = ((/* implicit */unsigned char) arr_54 [17] [i_16] [i_17]);
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
}
