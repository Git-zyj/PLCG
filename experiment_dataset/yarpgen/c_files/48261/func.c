/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48261
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
    var_12 = ((/* implicit */unsigned long long int) (signed char)127);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned char) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) var_7)) : (arr_2 [i_0 - 4]))), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (_Bool)0))))))))));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */signed char) var_0);
}
