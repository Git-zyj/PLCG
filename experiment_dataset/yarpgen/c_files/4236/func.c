/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4236
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
    var_19 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((4419062988923287514LL) + (144115188075855868LL)))));
                    var_21 = ((/* implicit */_Bool) min((((((/* implicit */int) (signed char)53)) | (((/* implicit */int) arr_3 [i_0 - 1] [i_2])))), (((/* implicit */int) arr_0 [i_0 + 3] [i_2]))));
                }
            } 
        } 
    } 
}
