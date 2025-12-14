/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202695
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
    var_19 = var_8;
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) >> (((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) -6057617383537267565LL))))) ? (((((/* implicit */_Bool) var_17)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) (+(1663044142U)))))) + (3620445407416327970LL)))));
    var_21 = ((/* implicit */short) var_14);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)51)) ? (2631923154U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119)))));
        arr_5 [(unsigned char)2] |= ((/* implicit */unsigned short) (((+(min((((/* implicit */long long int) arr_1 [i_0])), (-3339769981513713573LL))))) * (((long long int) (+(((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1])))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) 1663044142U);
    }
}
