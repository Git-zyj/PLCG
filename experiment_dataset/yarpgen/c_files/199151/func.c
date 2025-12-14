/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199151
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_7)) ? (var_5) : (var_8)))))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (var_7)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_13 += ((/* implicit */unsigned char) var_10);
                        arr_11 [i_3 + 1] [i_1] [i_1] [i_0 - 3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (var_6)))) ? (max((var_2), (var_1))) : (var_10)))), (min((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_0))))));
                        arr_12 [i_1] = ((/* implicit */unsigned short) var_5);
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (var_0)))) : (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))), (min((max((var_7), (((/* implicit */unsigned long long int) var_9)))), (max((((/* implicit */unsigned long long int) var_6)), (var_8)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 12; i_5 += 3) 
        {
            for (signed char i_6 = 1; i_6 < 12; i_6 += 3) 
            {
                {
                    arr_23 [i_4] [i_5 + 1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))));
                                arr_32 [i_5 + 1] = var_5;
                                arr_33 [i_4] [i_4] [i_4 + 2] [(short)9] = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                {
                    arr_41 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) var_6)))))));
                    var_15 = ((/* implicit */long long int) var_2);
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 12; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) var_8);
                                arr_46 [i_12] [i_10] [i_10] [i_10] [i_4] = ((/* implicit */signed char) var_0);
                                arr_47 [i_4 + 2] [i_4 + 2] [i_10] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_2)))) : (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) var_10))))));
                            }
                        } 
                    } 
                    arr_48 [i_10] [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) var_0)))))));
                }
            } 
        } 
        arr_49 [i_4 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8)));
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 11; i_13 += 4) 
    {
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            for (signed char i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 4; i_16 < 9; i_16 += 2) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) var_9))))), (max((var_8), (((/* implicit */unsigned long long int) var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3)))) : (max((var_5), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) var_1)))))));
                                arr_63 [i_17] [i_15] [i_15] [i_15] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_1)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_10)))) : (var_8)))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) max((var_3), (var_2)))), (max((var_7), (var_7))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_6)), (var_2))), (max((((/* implicit */unsigned int) var_6)), (var_1))))))));
                }
            } 
        } 
    } 
}
