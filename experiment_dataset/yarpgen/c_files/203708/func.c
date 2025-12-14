/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203708
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_10 *= ((/* implicit */unsigned long long int) var_2);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_3))));
                                arr_13 [(unsigned short)12] [(unsigned short)12] [i_2] = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                } 
                var_12 ^= var_0;
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                arr_19 [i_5] [i_6] = ((/* implicit */unsigned int) var_9);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_14 -= ((/* implicit */int) var_2);
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 8; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 8; i_9 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) var_1);
                                var_16 = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                    arr_28 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) var_6);
                }
                /* vectorizable */
                for (unsigned int i_10 = 2; i_10 < 6; i_10 += 1) /* same iter space */
                {
                    arr_31 [i_5] [i_5] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_2);
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_0))));
                    var_18 = ((/* implicit */_Bool) var_6);
                    var_19 = ((/* implicit */unsigned char) var_2);
                    var_20 = ((/* implicit */signed char) max((var_20), (var_6)));
                }
                /* vectorizable */
                for (unsigned int i_11 = 2; i_11 < 6; i_11 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) var_6);
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 3; i_12 < 9; i_12 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) var_4);
                        arr_37 [i_5] [i_5] [i_5] [i_11] [i_5] = var_5;
                        var_23 = ((/* implicit */unsigned int) var_5);
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */short) var_8);
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) var_0);
                            var_26 = ((/* implicit */unsigned long long int) var_2);
                            var_27 = ((/* implicit */short) var_3);
                            var_28 = ((/* implicit */unsigned char) var_4);
                        }
                        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) /* same iter space */
                        {
                            arr_48 [i_5] [i_6] [i_11] [i_13] [i_15] [i_15] = ((/* implicit */long long int) var_2);
                            var_29 = ((/* implicit */long long int) var_7);
                        }
                        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) var_8);
                            arr_51 [i_5] [i_11] [(_Bool)1] = ((/* implicit */long long int) var_6);
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_17 = 2; i_17 < 9; i_17 += 3) 
                        {
                            arr_56 [i_5] [i_11] [i_5] [i_5] [i_5] [i_5] = var_8;
                            var_31 = ((/* implicit */short) var_8);
                            arr_57 [i_5] [i_11] = ((/* implicit */_Bool) var_9);
                            var_32 = ((/* implicit */short) var_0);
                        }
                        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            arr_62 [i_5] [i_6] [i_11] [i_13] [i_13] [i_11] = ((/* implicit */unsigned short) var_8);
                            var_33 *= ((/* implicit */unsigned long long int) var_8);
                        }
                        for (signed char i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            var_34 = var_0;
                            arr_65 [i_5] [(unsigned short)9] [i_5] [i_11] [(unsigned short)7] = ((/* implicit */unsigned short) var_4);
                            var_35 = ((/* implicit */unsigned short) var_8);
                        }
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) var_5);
                        arr_69 [i_11] [i_6] = ((/* implicit */unsigned short) var_8);
                        var_37 = ((/* implicit */signed char) var_0);
                    }
                    var_38 = ((/* implicit */_Bool) var_9);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_21 = 0; i_21 < 18; i_21 += 3) 
    {
        for (unsigned char i_22 = 3; i_22 < 14; i_22 += 1) 
        {
            for (unsigned long long int i_23 = 1; i_23 < 16; i_23 += 4) 
            {
                {
                    var_39 = ((/* implicit */unsigned long long int) var_4);
                    var_40 &= ((/* implicit */unsigned long long int) var_9);
                    var_41 = ((/* implicit */signed char) min((var_41), (var_3)));
                }
            } 
        } 
    } 
}
