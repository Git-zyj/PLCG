/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22772
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
    var_13 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_6)) ? (11573421673918124627ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_12)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)1920)) : (((/* implicit */int) var_7))))), ((+(10798620675302813385ULL)))))));
    var_14 = ((/* implicit */short) var_9);
    var_15 = (!(((/* implicit */_Bool) (unsigned short)61555)));
    var_16 |= ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [10] [i_0] = ((/* implicit */unsigned int) (~(var_12)));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) arr_0 [i_0])), (min((((/* implicit */long long int) max((arr_0 [i_0]), (arr_0 [i_0])))), (max((((/* implicit */long long int) var_5)), (var_12)))))));
    }
}
