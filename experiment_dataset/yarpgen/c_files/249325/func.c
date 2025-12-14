/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249325
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (var_7)));
    var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_10)), (((signed char) var_10)))))) >= (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) -6983918360198291422LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7509354948283500149LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)12469)) << (((((/* implicit */int) var_0)) - (44605))))))))));
    var_17 |= ((/* implicit */signed char) (~(var_14)));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) >= (((/* implicit */int) (_Bool)0))))) : ((+(((/* implicit */int) (_Bool)1))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        var_19 ^= ((/* implicit */unsigned char) max(((_Bool)0), ((_Bool)0)));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) var_6);
        var_20 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
}
