/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193276
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)854)), (13275753260973769027ULL)))) ? (((/* implicit */int) var_4)) : (max((((/* implicit */int) (unsigned short)0)), ((+(((/* implicit */int) (unsigned short)21308)))))))))));
                                var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 4222304603569233460LL)) ? (-4222304603569233435LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) <= (((((/* implicit */_Bool) min((4222304603569233429LL), (-4222304603569233429LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)110))) : (var_6)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_19 [i_5] = ((/* implicit */unsigned short) var_11);
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((~(arr_11 [i_0] [i_0] [i_0] [i_0])))))) ? (max((((/* implicit */unsigned long long int) (short)11638)), (16428107282711059146ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) -4222304603569233451LL);
                                var_17 = ((/* implicit */unsigned char) var_2);
                                var_18 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_1)), (((var_0) ? (arr_14 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (var_0)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 23; i_9 += 1) 
                    {
                        for (signed char i_10 = 2; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_10 + 2] [i_0]);
                                arr_29 [i_1] = ((/* implicit */_Bool) var_8);
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                                arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) -6276356801498716071LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_11 = 1; i_11 < 17; i_11 += 1) 
    {
        for (unsigned short i_12 = 2; i_12 < 17; i_12 += 4) 
        {
            for (unsigned short i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        for (short i_15 = 2; i_15 < 15; i_15 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_14] [i_14] [i_14] [i_14]))));
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_11] [i_11] [i_11])) ? (arr_15 [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
                                arr_47 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) (~(arr_15 [i_11] [i_11])));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_36 [i_15 - 2])) == (arr_22 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 2; i_16 < 14; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 2; i_17 < 17; i_17 += 4) 
                        {
                            {
                                arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (4222304603569233454LL)))) ? (((/* implicit */int) arr_24 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_1))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) (short)-29423)))))));
                                arr_53 [i_12] [i_11] [i_11] [i_12] &= ((/* implicit */_Bool) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) 4204743317U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))), (2953282773005970340LL)))));
                                var_24 = ((/* implicit */unsigned char) arr_33 [i_11]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 18; i_19 += 4) 
                        {
                            {
                                arr_59 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)0));
                                arr_60 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) (-(var_6)));
                                arr_61 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0ULL))))), (var_3)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
