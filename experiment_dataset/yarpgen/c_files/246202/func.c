/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246202
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
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) var_14);
                    var_20 += ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31405))) > (min((((/* implicit */unsigned long long int) var_16)), (var_13))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (((unsigned int) var_11))))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */short) var_11);
}
