/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42139
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
    var_13 &= ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned short) min((6182499681436618027ULL), (((/* implicit */unsigned long long int) max((arr_2 [i_0 - 1]), (((/* implicit */long long int) var_1)))))));
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))), (((12392851367236097964ULL) >> (((/* implicit */int) ((_Bool) var_0)))))));
    }
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)14018))) + (var_2)))) ? ((+(var_5))) : ((+(3455227555175178737LL)))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */long long int) ((var_1) % (var_8)))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_10)))))) ? (((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))) : (((((/* implicit */_Bool) var_9)) ? (((var_2) - (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-70)))))));
}
