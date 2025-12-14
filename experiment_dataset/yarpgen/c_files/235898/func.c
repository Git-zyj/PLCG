/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235898
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)27886))) ? (max((9196137786550212163ULL), (((/* implicit */unsigned long long int) (short)29899)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-29914)), (33554424U))))));
                    arr_10 [i_0] [(short)6] [13] [i_2] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0 + 1] [i_0]);
                    arr_11 [i_2] [i_0] = ((/* implicit */signed char) (short)-29912);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_6);
}
