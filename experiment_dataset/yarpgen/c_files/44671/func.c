/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44671
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) ((_Bool) (unsigned char)120));
        var_21 = (((((-(((/* implicit */int) var_2)))) + (2147483647))) << (((max((var_5), (((/* implicit */unsigned int) arr_1 [i_0])))) - (932832261U))));
    }
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_7))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_15)), (var_10))))))), (var_18)));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_18)) >= (((((/* implicit */_Bool) (unsigned short)54440)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)15360))))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3))))))) ? ((+(((/* implicit */int) ((signed char) var_19))))) : (((/* implicit */int) var_8))));
    var_25 = ((/* implicit */long long int) var_3);
}
