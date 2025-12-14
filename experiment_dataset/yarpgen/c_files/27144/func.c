/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27144
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) (~(1779913180U)));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) arr_5 [(short)12]);
                                var_19 = ((arr_12 [(short)11] [(short)11] [i_2] [i_0] [i_4]) | (((/* implicit */unsigned int) var_11)));
                                var_20 = arr_9 [i_0];
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((2515054145U) > (2478615649U)));
    var_22 = var_13;
    var_23 -= ((/* implicit */long long int) min((-1700905341), (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) >= (((/* implicit */unsigned long long int) var_4)))))));
}
