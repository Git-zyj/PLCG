/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214063
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((((/* implicit */_Bool) ((4435742961562182253ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (4435742961562182229ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))) & (((/* implicit */unsigned long long int) var_10)))))));
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_9))) ? ((~(((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) -17))));
    var_13 = ((/* implicit */unsigned short) var_7);
    var_14 = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)22725)))), ((~(var_9)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42813)) ^ (234439542)));
        arr_2 [i_0] [i_0] = arr_0 [(short)0] [i_0];
    }
}
