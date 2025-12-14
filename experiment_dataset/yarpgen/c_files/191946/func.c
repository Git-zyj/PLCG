/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191946
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
    var_16 = ((/* implicit */_Bool) var_1);
    var_17 = ((/* implicit */signed char) var_13);
    var_18 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 7; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) var_15);
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_8))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_2))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_14))));
                    arr_16 [i_0] [i_3] = ((/* implicit */short) var_9);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_23 = var_7;
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 8; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 3; i_8 < 7; i_8 += 2) 
                        {
                            {
                                arr_29 [5ULL] [i_5] = ((/* implicit */unsigned int) var_3);
                                var_24 = ((/* implicit */signed char) var_0);
                                var_25 = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 9; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            {
                                arr_35 [i_5] [i_10] [i_6] [i_9 - 1] [i_10] [i_6] [i_10] = ((/* implicit */_Bool) var_13);
                                arr_36 [i_6] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */short) var_13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 3; i_11 < 9; i_11 += 2) 
                    {
                        for (signed char i_12 = 4; i_12 < 8; i_12 += 1) 
                        {
                            {
                                var_26 = var_1;
                                arr_43 [i_0] [i_6] [i_5] [i_6] [i_5] = ((/* implicit */long long int) var_11);
                                arr_44 [i_6] [i_5] = ((/* implicit */signed char) var_1);
                                var_27 = ((/* implicit */int) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_13 = 1; i_13 < 16; i_13 += 3) 
    {
        arr_47 [i_13 + 1] [i_13] = ((/* implicit */unsigned long long int) var_12);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            for (unsigned char i_15 = 0; i_15 < 17; i_15 += 4) 
            {
                {
                    arr_53 [i_13] = ((/* implicit */unsigned char) var_1);
                    var_28 &= ((/* implicit */unsigned long long int) var_15);
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) var_10);
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        arr_56 [(_Bool)1] = ((/* implicit */int) var_9);
        arr_57 [i_16] = ((/* implicit */unsigned short) var_14);
        var_30 = ((/* implicit */signed char) var_13);
    }
}
