/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46972
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */_Bool) min((((/* implicit */int) min((arr_4 [i_0]), (arr_4 [i_0])))), (((((/* implicit */_Bool) 1099691599)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)127))))));
                arr_5 [i_0] [1U] [i_0] = ((/* implicit */long long int) ((_Bool) var_0));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)18423))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)0))))) : (((1639392110226989495LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56862)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((-(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [(unsigned short)9])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_9);
    var_15 = ((/* implicit */unsigned char) var_9);
}
