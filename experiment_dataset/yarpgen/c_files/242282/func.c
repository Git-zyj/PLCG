/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242282
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
    var_11 |= ((/* implicit */unsigned char) var_7);
    var_12 = var_7;
    var_13 *= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) -915293794317849218LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) < (min((((/* implicit */unsigned int) (unsigned char)115)), (2527026027U))))) ? (((/* implicit */long long int) (+(var_7)))) : (min((915293794317849217LL), (915293794317849218LL)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_14 *= ((((/* implicit */long long int) (~(((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */int) (_Bool)0)))))))) >= (-915293794317849199LL));
        var_15 = ((/* implicit */unsigned char) 2008044618U);
        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */long long int) (-(arr_1 [i_0])))) : ((-(var_10))))), (min((915293794317849216LL), (((/* implicit */long long int) (_Bool)1))))));
    }
}
