/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214657
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
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_15 = (short)-20102;
                    arr_9 [i_0 + 3] [i_1] [i_1] = (-(((unsigned int) (_Bool)1)));
                    arr_10 [i_0] [i_0 + 3] [i_0] [i_0 + 3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 + 4]))) != (((72057044282114048ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 3; i_3 < 12; i_3 += 3) 
    {
        for (int i_4 = 2; i_4 < 11; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                {
                    arr_20 [i_3] [8U] [i_4 + 2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_6))) + (((/* implicit */long long int) ((arr_14 [i_4 - 2] [i_4 - 1]) + (((/* implicit */unsigned int) arr_12 [i_3 - 3])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 10; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) (short)-1);
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)-67), ((signed char)-67)))) + (((((((/* implicit */int) var_14)) + (((/* implicit */int) var_9)))) - (((((/* implicit */int) arr_15 [i_3] [i_3])) - (((/* implicit */int) var_5))))))));
                                arr_26 [i_3] [i_6] [i_3] [i_4 - 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((arr_17 [i_3] [i_3]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) > (((/* implicit */int) ((_Bool) 562812514467840ULL)))));
                                var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) : (max((15LL), (((/* implicit */long long int) var_14))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 12; i_9 += 3) 
                        {
                            {
                                arr_33 [8U] [i_4] [8U] [0U] [8U] &= ((/* implicit */unsigned short) arr_25 [i_3] [i_4] [i_5] [i_4] [i_5]);
                                arr_34 [6U] [6U] [i_3] [6U] = ((/* implicit */short) min((((/* implicit */signed char) ((((long long int) (unsigned short)65535)) <= (((/* implicit */long long int) ((((/* implicit */int) (short)-17199)) & (((/* implicit */int) var_5)))))))), ((signed char)77)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
