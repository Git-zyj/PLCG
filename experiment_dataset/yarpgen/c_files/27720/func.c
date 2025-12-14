/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27720
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [6U] [i_0] = ((/* implicit */int) (unsigned short)40751);
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(15191641015680764982ULL)))) ? (((/* implicit */int) min(((unsigned short)30608), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */_Bool) arr_8 [i_3] [(unsigned short)10] [(unsigned short)10] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */int) (signed char)37))))))) ? (arr_10 [(unsigned short)2] [i_3] [i_2] [i_1] [i_1] [(unsigned short)2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2266616352U)) ? (0U) : (((/* implicit */unsigned int) -161318205)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = arr_3 [i_1 + 2];
                    arr_15 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) > (arr_0 [i_1 - 2])))))) == (((/* implicit */int) ((unsigned short) arr_12 [i_1 - 2] [i_1 + 1] [i_0] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 4) 
    {
        for (short i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            {
                arr_23 [8ULL] [i_5 + 1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2709384672U)) ? (((((/* implicit */int) arr_17 [i_5 + 1])) + (((/* implicit */int) arr_17 [i_5 - 2])))) : (((int) arr_17 [i_5 + 2]))));
                arr_24 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) || ((_Bool)0)));
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_5] [(unsigned short)4] [i_5 + 1] [i_6] [i_5]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        var_15 = ((/* implicit */_Bool) arr_26 [i_7]);
        /* LoopNest 2 */
        for (unsigned short i_8 = 2; i_8 < 22; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                {
                    arr_32 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) + (((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 2; i_10 < 20; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                arr_39 [i_7] [i_7] = ((/* implicit */unsigned int) (unsigned short)65524);
                                var_16 = ((/* implicit */unsigned char) ((unsigned short) arr_36 [i_7]));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_12 = 0; i_12 < 17; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                for (unsigned short i_15 = 1; i_15 < 15; i_15 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_28 [i_12] [i_12]);
                        var_18 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_38 [i_15 + 2] [i_15] [i_15 - 1] [i_15] [i_15] [i_15] [i_15])) ? (arr_38 [i_15 + 2] [(_Bool)1] [i_15 - 1] [i_15] [i_15 + 2] [i_15] [i_15 + 1]) : (arr_38 [i_15 + 1] [i_15] [i_15] [i_15] [i_15] [i_15] [(unsigned char)10])))));
                        var_19 = ((/* implicit */long long int) max((((/* implicit */int) max((arr_50 [i_15 + 1] [i_13] [i_14] [i_13]), (arr_50 [i_15 + 1] [i_12] [i_15 - 1] [i_13])))), (max(((-2147483647 - 1)), (1332544720)))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2980937420840064632LL), (((/* implicit */long long int) 134217696))))) ? (((/* implicit */unsigned long long int) 476406924U)) : (((unsigned long long int) 3831819592U)))))));
                    }
                } 
            } 
        } 
        arr_52 [i_12] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_33 [i_12] [(unsigned short)12] [(unsigned short)12] [i_12])))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_16 = 2; i_16 < 17; i_16 += 3) 
    {
        for (unsigned short i_17 = 1; i_17 < 19; i_17 += 3) 
        {
            for (short i_18 = 0; i_18 < 21; i_18 += 2) 
            {
                {
                    arr_62 [i_16] [i_16] = ((/* implicit */signed char) var_8);
                    arr_63 [i_16] [i_18] [i_17] = ((/* implicit */signed char) (+(arr_53 [i_16])));
                }
            } 
        } 
    } 
}
