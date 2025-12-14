/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43370
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
    /* vectorizable */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) var_9);
        var_14 = ((/* implicit */unsigned char) var_0);
    }
    var_15 *= ((/* implicit */signed char) min((max((max((var_2), (var_2))), (((/* implicit */int) var_0)))), (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (short i_1 = 4; i_1 < 20; i_1 += 3) 
    {
        arr_5 [(signed char)11] [(signed char)11] = ((/* implicit */short) var_2);
        var_16 = ((/* implicit */long long int) min((max((var_2), (((/* implicit */int) var_8)))), (min((((/* implicit */int) var_1)), (min((var_2), (var_2)))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2 - 1] = ((/* implicit */signed char) var_8);
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_4 = 2; i_4 < 15; i_4 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_17 &= ((/* implicit */short) var_10);
                            var_18 = ((/* implicit */unsigned short) var_4);
                            var_19 = var_10;
                        }
                    } 
                } 
                arr_22 [i_2 - 1] [i_3] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) var_7);
            }
            for (signed char i_7 = 2; i_7 < 15; i_7 += 3) /* same iter space */
            {
                var_20 *= ((/* implicit */short) var_3);
                /* LoopSeq 1 */
                for (signed char i_8 = 2; i_8 < 15; i_8 += 3) 
                {
                    var_21 *= ((/* implicit */_Bool) var_5);
                    arr_28 [i_2] [i_3] [i_3] [i_7] [i_8 - 2] [i_8] = ((/* implicit */signed char) var_4);
                    var_22 = ((/* implicit */unsigned short) var_3);
                }
                var_23 *= ((/* implicit */long long int) var_9);
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) var_12);
                            arr_33 [i_2] [i_10] [i_7] [i_9] [i_7] = ((/* implicit */long long int) var_11);
                            var_25 = ((/* implicit */unsigned char) var_6);
                            arr_34 [i_2] [i_2] [i_9 + 2] [i_7 - 2] [i_10] = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
            }
            for (signed char i_11 = 1; i_11 < 14; i_11 += 3) 
            {
                var_26 = var_0;
                arr_38 [i_11 - 1] = var_11;
                var_27 = ((/* implicit */short) var_0);
            }
            for (long long int i_12 = 3; i_12 < 12; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 1; i_13 < 15; i_13 += 2) 
                {
                    for (short i_14 = 1; i_14 < 13; i_14 += 2) 
                    {
                        {
                            arr_47 [i_12] [i_12] [i_12 + 4] [i_12] [i_12] [i_12 + 3] = ((/* implicit */_Bool) var_1);
                            var_28 = ((/* implicit */short) var_4);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) var_5);
                            var_30 -= ((/* implicit */unsigned short) var_5);
                            var_31 -= var_11;
                            arr_52 [i_16] [i_12] [i_12] [i_2 - 1] = ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
                var_32 += ((/* implicit */long long int) var_1);
                var_33 = var_7;
                /* LoopNest 2 */
                for (unsigned short i_17 = 3; i_17 < 15; i_17 += 1) 
                {
                    for (int i_18 = 0; i_18 < 16; i_18 += 1) 
                    {
                        {
                            arr_58 [i_12] [i_12] = ((/* implicit */unsigned short) var_0);
                            var_34 -= ((/* implicit */unsigned long long int) var_11);
                            var_35 *= ((/* implicit */long long int) var_3);
                            var_36 -= ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */int) var_9);
            var_38 += ((/* implicit */int) var_1);
        }
        for (int i_19 = 0; i_19 < 16; i_19 += 3) 
        {
            arr_62 [i_2] [i_2] [i_19] = ((/* implicit */unsigned long long int) var_5);
            var_39 = ((/* implicit */unsigned long long int) var_6);
            var_40 = ((/* implicit */unsigned long long int) var_3);
        }
        for (short i_20 = 1; i_20 < 14; i_20 += 1) 
        {
            var_41 -= ((/* implicit */short) var_1);
            var_42 = var_4;
            /* LoopNest 2 */
            for (unsigned short i_21 = 1; i_21 < 13; i_21 += 3) 
            {
                for (int i_22 = 0; i_22 < 16; i_22 += 4) 
                {
                    {
                        var_43 -= ((/* implicit */int) var_6);
                        var_44 += ((/* implicit */unsigned long long int) var_10);
                    }
                } 
            } 
        }
        for (unsigned long long int i_23 = 1; i_23 < 15; i_23 += 3) 
        {
            var_45 = ((/* implicit */int) var_7);
            arr_73 [i_23] [i_23] = ((/* implicit */unsigned long long int) var_12);
        }
        var_46 += ((/* implicit */short) var_10);
    }
}
