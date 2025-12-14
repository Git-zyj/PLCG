/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39959
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (+(max((var_14), (((/* implicit */unsigned int) -207273209))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_18))))), ((-(-664555509027282606LL)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) var_7);
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (arr_1 [14LL]))), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0]) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)167)))))))))));
        var_23 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_4 [i_0 - 2] [i_0] = ((/* implicit */int) ((short) (~((-(((/* implicit */int) var_2)))))));
    }
    var_24 |= ((/* implicit */signed char) var_5);
}
