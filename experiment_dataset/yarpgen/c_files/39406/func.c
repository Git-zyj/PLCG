/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39406
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) ((unsigned long long int) ((signed char) var_4)));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_2))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                {
                    arr_11 [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_17 [i_2] [i_3] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_16)) * (((/* implicit */int) var_11)))) : (((/* implicit */int) var_5)))) + (2147483647))) << (((((unsigned long long int) var_0)) - (55802ULL)))));
                                arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))));
                                var_22 *= ((/* implicit */short) ((((/* implicit */int) var_14)) >= (((/* implicit */int) ((unsigned char) var_0)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((var_19) && (((/* implicit */_Bool) var_13))));
                }
            } 
        } 
    } 
}
