/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31996
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
    var_19 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) 538624896U);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 = max((max((((/* implicit */long long int) arr_13 [i_4 + 1] [i_1] [i_2] [i_2] [i_4 - 1])), (((((/* implicit */_Bool) 7876828573969682758LL)) ? (var_4) : (((/* implicit */long long int) arr_13 [i_0] [i_2] [(short)8] [i_2] [i_4])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 130023424U)) ? (((/* implicit */unsigned int) ((int) 1695447374))) : (3976115763U)))));
                                var_21 -= ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_13 [i_0] [16] [i_2] [i_0] [i_4 + 1])))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((((/* implicit */unsigned int) 1789598262)) >= (3756342399U)))))), (((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */_Bool) ((long long int) 17521326925517801843ULL));
}
