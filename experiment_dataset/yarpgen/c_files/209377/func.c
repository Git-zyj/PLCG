/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209377
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
    var_17 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_15))));
        arr_2 [i_0] = ((/* implicit */unsigned int) var_6);
        var_19 += var_6;
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_3))));
        arr_3 [5U] = ((/* implicit */unsigned char) var_8);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            arr_9 [i_2] [i_1 - 1] [i_2] = ((/* implicit */_Bool) var_2);
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_18 [i_1 - 1] [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) var_4);
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_3))));
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */signed char) var_14);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        {
                            arr_25 [i_1] [i_2] [i_2] [i_3] [i_6] [(short)1] [i_7] = ((/* implicit */_Bool) var_8);
                            arr_26 [i_1] [i_1 - 1] [i_1 - 1] [i_2] [i_1 - 1] = ((/* implicit */unsigned long long int) var_3);
                            arr_27 [10U] [10U] [i_2] [10U] = ((/* implicit */unsigned long long int) var_13);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 3) 
                {
                    arr_30 [i_1] [i_1] [(signed char)5] [i_2] = ((/* implicit */unsigned long long int) var_9);
                    arr_31 [i_2] [(_Bool)1] [i_2 - 1] [i_2] = ((/* implicit */unsigned int) var_5);
                    arr_32 [i_1] [0LL] [i_3] &= var_6;
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_12))));
                }
                for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    arr_36 [i_1] [i_1] [i_1 - 1] [i_2] = ((/* implicit */unsigned long long int) var_5);
                    arr_37 [i_1] [i_2] = ((/* implicit */_Bool) var_1);
                    var_23 = ((/* implicit */long long int) var_12);
                    arr_38 [i_2] = ((/* implicit */unsigned short) var_13);
                }
                var_24 = ((/* implicit */unsigned long long int) var_14);
            }
            for (int i_10 = 3; i_10 < 23; i_10 += 1) /* same iter space */
            {
                arr_41 [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) var_5);
                arr_42 [i_2] [i_2] = ((/* implicit */short) var_13);
                var_25 = ((/* implicit */int) var_15);
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_15))));
                var_27 = ((/* implicit */unsigned char) var_6);
            }
            for (int i_11 = 3; i_11 < 23; i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 1; i_12 < 23; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        {
                            var_28 ^= ((/* implicit */_Bool) var_1);
                            arr_51 [i_1 - 1] [i_11] [i_11] [i_2] [i_13] = ((/* implicit */long long int) var_4);
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) var_5))));
                        }
                    } 
                } 
                var_30 = var_10;
                arr_52 [i_2] [i_2] [i_11] = ((/* implicit */unsigned char) var_15);
            }
        }
        var_31 = ((/* implicit */_Bool) var_13);
        var_32 *= ((/* implicit */unsigned long long int) var_15);
    }
    for (unsigned short i_14 = 1; i_14 < 16; i_14 += 4) 
    {
        var_33 = ((/* implicit */_Bool) var_8);
        var_34 = ((/* implicit */signed char) var_6);
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    {
                        var_35 = ((/* implicit */unsigned char) var_10);
                        arr_63 [i_14] [i_15] [i_14] = ((/* implicit */signed char) var_16);
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */short) var_11);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 2) 
    {
        for (unsigned short i_19 = 3; i_19 < 12; i_19 += 4) 
        {
            {
                var_37 ^= ((/* implicit */signed char) var_7);
                arr_69 [i_19] = ((/* implicit */_Bool) var_1);
                var_38 = ((/* implicit */_Bool) var_9);
                var_39 ^= ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
}
