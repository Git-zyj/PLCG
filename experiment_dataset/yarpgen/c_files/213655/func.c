/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213655
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
    var_13 |= ((/* implicit */long long int) ((unsigned int) (unsigned short)51371));
    var_14 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-51), ((signed char)66)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((long long int) (signed char)-51));
                    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) min((var_2), (((/* implicit */unsigned char) var_11)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((signed char) var_0));
}
