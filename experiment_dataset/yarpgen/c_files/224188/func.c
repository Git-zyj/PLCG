/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224188
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
    var_15 = ((/* implicit */short) var_9);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (2ULL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 6033913033258181968LL))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (short)11))))))))));
                var_18 = ((/* implicit */_Bool) min((max(((~(arr_3 [(_Bool)1] [i_0 - 1] [14LL]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59942)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))), (((/* implicit */long long int) min(((unsigned char)225), (((/* implicit */unsigned char) (_Bool)1)))))));
            }
        } 
    } 
}
