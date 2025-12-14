/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192549
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)36)) || (((/* implicit */_Bool) (signed char)-60))))))))));
                    arr_7 [i_0] [i_0 + 1] [(_Bool)1] [i_0 + 2] = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)36)) ^ ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)36)) && (((/* implicit */_Bool) var_16)))))))));
}
