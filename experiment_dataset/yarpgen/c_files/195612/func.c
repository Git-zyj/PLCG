/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195612
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
    var_20 = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((/* implicit */int) (_Bool)1)))))))), (((min((((/* implicit */unsigned long long int) var_8)), (var_11))) << (((var_19) - (7799802204491306201LL))))));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)0)), (var_16)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1938661638U)) || (((/* implicit */_Bool) (unsigned short)10516))))) : ((~(((/* implicit */int) (signed char)-69)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_22 = ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_1 [i_0]))));
        var_23 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
}
