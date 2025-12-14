/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46810
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) (-((+((-(((/* implicit */int) (signed char)49))))))));
                            var_18 = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) var_12))))))));
                            arr_14 [i_1] = ((/* implicit */unsigned char) (-((~((+(((/* implicit */int) (short)21202))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+((+((~(((/* implicit */int) var_1)))))))))));
                                var_20 = ((/* implicit */unsigned short) (-((~((~(var_9)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_7] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)36644)))))))));
                            arr_29 [i_0] [i_1] [i_0] [i_8] [9U] [i_8] = ((/* implicit */_Bool) (+((~((~(((/* implicit */int) (signed char)60))))))));
                            var_21 *= ((/* implicit */_Bool) (~((+((-(((/* implicit */int) arr_26 [(short)13] [i_1] [i_1] [i_1] [i_1] [i_8]))))))));
                            var_22 = ((/* implicit */long long int) (-((+((-(((/* implicit */int) (short)21202))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 4; i_9 < 10; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    for (unsigned char i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        {
                            var_23 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(2147483647))))))));
                            var_24 *= ((/* implicit */unsigned int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 2805039843U)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_13 = 1; i_13 < 10; i_13 += 2) 
                {
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        for (short i_15 = 0; i_15 < 11; i_15 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_9] [i_10 - 1] [(short)21] [i_14] [1ULL] [i_15]))))))))));
                                arr_48 [i_15] [i_9] [i_14] [i_9] [i_10 - 1] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_0 [i_10])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
