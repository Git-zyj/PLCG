/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204310
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
    var_10 = ((/* implicit */unsigned char) var_0);
    var_11 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_2))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
    var_12 -= ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) == (var_6)))), ((+(((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_3))))));
        arr_5 [i_0] [i_0] = arr_1 [i_0];
    }
}
