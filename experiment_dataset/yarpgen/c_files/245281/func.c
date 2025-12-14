/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245281
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
    var_13 |= ((/* implicit */long long int) (((((+(12044857682509117677ULL))) / (((/* implicit */unsigned long long int) var_5)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) == (((/* implicit */int) var_1))))))));
    var_14 ^= ((/* implicit */unsigned short) (-((~(13423276493306949115ULL)))));
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (!((!((_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] [i_3 - 1] [i_4 + 1] = ((/* implicit */int) 2631776225U);
                                var_16 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 288404441U)) ? (14U) : (6U)))));
                                arr_13 [i_3] [i_2] [(unsigned short)6] [i_2] [i_2 - 2] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)58836)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)32750)))))));
                                arr_14 [i_0] [i_0] [(short)11] [i_3] [(unsigned short)2] = ((/* implicit */long long int) ((4881974175045741075ULL) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))) == (3324007433U))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) (unsigned short)25729);
            }
        } 
    } 
}
