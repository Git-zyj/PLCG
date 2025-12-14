/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241413
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
    var_14 = ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (7779759083863326602LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) % (11ULL)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1 + 1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (var_10)))));
        var_16 ^= ((/* implicit */unsigned short) (-((-(-1)))));
    }
    var_17 = ((var_6) ? ((-(((/* implicit */int) ((unsigned short) var_6))))) : ((+((-(((/* implicit */int) (signed char)89)))))));
    var_18 = ((/* implicit */_Bool) ((3445845451375037622LL) - (((/* implicit */long long int) ((4294967277U) ^ (((unsigned int) var_0)))))));
}
