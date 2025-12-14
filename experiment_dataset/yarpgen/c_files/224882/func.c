/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224882
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_11))))) ? (arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : (((/* implicit */unsigned long long int) min((-1469166987), (1469166987)))))));
                var_14 = ((/* implicit */short) var_8);
                arr_6 [10] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) (short)32767));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (var_0)))), (min((562949953421311ULL), (((/* implicit */unsigned long long int) (unsigned char)45)))))), (((/* implicit */unsigned long long int) (~(1469166986))))));
    var_16 |= ((/* implicit */unsigned int) var_0);
}
