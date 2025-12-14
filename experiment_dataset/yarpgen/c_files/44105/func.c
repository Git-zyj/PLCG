/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44105
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) (short)-4069)) : (((/* implicit */int) (_Bool)1))))));
        var_16 = ((/* implicit */unsigned int) (+(608640835)));
    }
    for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_5 [i_1 - 1])) + (((/* implicit */int) (unsigned short)18598)))), (((/* implicit */int) ((((/* implicit */int) (signed char)4)) <= (-1800988828))))));
        var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)130))))) ? (((/* implicit */int) var_1)) : (max((((/* implicit */int) (signed char)(-127 - 1))), (arr_3 [i_1])))))));
        var_19 = ((/* implicit */unsigned char) arr_5 [i_1]);
    }
    var_20 = ((/* implicit */long long int) var_4);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4064792149875536307ULL), (((/* implicit */unsigned long long int) 562949953421312LL))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((+(10LL)))))) ? (var_8) : (((/* implicit */unsigned int) -1800988847))));
}
