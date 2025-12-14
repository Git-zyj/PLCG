/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247732
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7))))) - (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (var_9))) + (((((/* implicit */_Bool) var_5)) ? (var_9) : (var_9))))))))));
    var_11 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) var_5);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2 - 3] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (var_0)))))));
                                arr_13 [i_0] [i_3] [i_3] [i_0] [i_0] [i_3] [i_0] = var_9;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
