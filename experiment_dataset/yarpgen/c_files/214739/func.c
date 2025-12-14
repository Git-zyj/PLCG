/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214739
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [16ULL] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0] [i_1])) < (((/* implicit */int) var_0)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0]))))));
                var_16 = ((/* implicit */int) min((var_16), (min(((~(((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (unsigned short)29315)) : (((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_4 [i_1] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)51124)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)8184)))) : (((/* implicit */int) ((short) arr_4 [i_0] [i_0])))))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) ((signed char) (_Bool)1))) == ((+(((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) min((175405115656987800ULL), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)41692))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned char)38);
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_7);
}
