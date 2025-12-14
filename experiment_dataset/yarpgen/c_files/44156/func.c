/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44156
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [14LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 7173470069559256725ULL))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_9))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)36)) ^ (((/* implicit */int) (unsigned char)5))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7173470069559256738ULL)) ? (min((11273274004150294890ULL), (7173470069559256731ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) 4294967288U))));
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (var_14)))));
}
