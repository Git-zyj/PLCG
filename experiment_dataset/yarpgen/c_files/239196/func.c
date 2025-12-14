/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239196
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54233)) ? (-448142433) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_6)) ? ((~(-6LL))) : ((((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54233))))))) : (-6LL));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_5))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))) : (((((/* implicit */_Bool) 1065973223U)) ? (((/* implicit */unsigned int) 2147483647)) : (var_0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))))))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (_Bool)0))));
}
