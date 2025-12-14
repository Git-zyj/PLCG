/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223460
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (949090899U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)29946)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) + ((~(-1409827600)))));
        arr_2 [(unsigned short)5] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_3))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)35588)) : (((/* implicit */int) (_Bool)0))))) : (((0ULL) | (((/* implicit */unsigned long long int) 2236873974U))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35582)))));
    }
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)29946)))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_1)))) : (max((var_6), (((/* implicit */int) (_Bool)1)))))))));
    var_18 = (-(((/* implicit */int) var_1)));
}
