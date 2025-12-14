/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202010
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_1 [i_0]), ((unsigned char)160))))))) ? ((-(752321972341051168LL))) : (min((752321972341051168LL), ((-(-3178787864004574229LL)))))));
        var_13 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
        var_14 = ((/* implicit */unsigned short) arr_1 [12U]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_15 = ((/* implicit */int) ((signed char) var_7));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) var_4)) ? (10782715247422349874ULL) : (((/* implicit */unsigned long long int) -118299990)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))));
    }
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_0)), (var_6))), (((/* implicit */unsigned long long int) ((var_9) < (var_9))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned short) (_Bool)0))))), (var_9)))) : (var_6)));
    var_19 = ((/* implicit */unsigned char) -22LL);
    var_20 = ((/* implicit */unsigned char) (unsigned short)49495);
}
