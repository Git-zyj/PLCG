/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216943
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) max((arr_0 [i_0 - 1] [i_0]), (arr_0 [i_0 + 3] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
        var_17 = ((/* implicit */signed char) ((max(((_Bool)1), ((_Bool)0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 + 2] [i_0 + 1]);
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30608)) ? (((/* implicit */int) (unsigned short)23)) : (((/* implicit */int) var_16))))) || (var_13)));
}
