/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236812
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
    var_10 -= ((/* implicit */unsigned long long int) (short)32767);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) ((unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_8)) : (var_4))), (((/* implicit */long long int) (~(var_9)))))));
        var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (short)32738)) ? (((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_7)))) : ((~(var_1))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_8)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_2))));
        var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18310254334460555404ULL)) ? (799893975U) : (((/* implicit */unsigned int) var_7))))) ? ((+(((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) ((unsigned short) var_7)))));
        arr_7 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_1]))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(short)22])) || ((_Bool)1)))))))));
        var_16 = ((/* implicit */unsigned short) (~(-3509369300447822688LL)));
    }
}
