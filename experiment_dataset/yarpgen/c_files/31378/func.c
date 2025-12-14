/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31378
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
    var_18 = ((/* implicit */_Bool) var_9);
    var_19 = var_2;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_8);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (unsigned short i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_12 [i_3] [i_3] = ((/* implicit */signed char) arr_4 [i_2]);
                        arr_13 [i_0] [i_3] = ((/* implicit */_Bool) arr_1 [i_0]);
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((max((((/* implicit */unsigned long long int) 925466194)), (var_9))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)2] [i_1])))));
                    }
                } 
            } 
        } 
    }
}
