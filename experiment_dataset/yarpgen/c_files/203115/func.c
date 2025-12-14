/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203115
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((var_13), (var_4)));
                                arr_14 [i_1] [i_3] = ((/* implicit */_Bool) ((long long int) 2147483647));
                                arr_15 [i_1] [i_3] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) (+((~((-(((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                    var_14 &= ((/* implicit */unsigned short) var_2);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) var_8);
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (short)22281)))) : (((/* implicit */int) (signed char)-27))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) -2147483647);
                    arr_23 [i_0] &= (~(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_8))) != (((/* implicit */long long int) var_11))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        for (long long int i_8 = 2; i_8 < 20; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (unsigned char i_10 = 1; i_10 < 17; i_10 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned short) (+((-2147483647 - 1))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (signed char)-26))));
                            var_20 = ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-127))))))));
                        }
                    } 
                } 
                arr_34 [i_8] = ((/* implicit */_Bool) (-2147483647 - 1));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_11 = 1; i_11 < 21; i_11 += 1) 
    {
        for (int i_12 = 2; i_12 < 18; i_12 += 4) 
        {
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 18; i_14 += 3) 
                    {
                        for (int i_15 = 1; i_15 < 21; i_15 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((int) var_8)), (((((((/* implicit */int) var_2)) * (((/* implicit */int) var_10)))) / (var_1))))))));
                                var_22 = ((/* implicit */unsigned char) min(((((-2147483647 - 1)) | (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((var_8) | (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)20007)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        for (short i_17 = 0; i_17 < 22; i_17 += 4) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_3)))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) - (((/* implicit */int) (_Bool)1))))))))));
                                var_25 = ((/* implicit */long long int) var_3);
                                var_26 &= ((/* implicit */int) (_Bool)1);
                                arr_51 [i_11] [i_11] [i_13] [i_13] [i_17] = ((/* implicit */int) ((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)29))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        for (int i_19 = 0; i_19 < 22; i_19 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */int) (+(max((var_9), (480U)))));
                                var_28 *= ((/* implicit */short) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 9223372036854775799LL))))));
                                var_29 ^= (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
