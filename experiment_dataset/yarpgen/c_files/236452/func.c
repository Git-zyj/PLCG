/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236452
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5079937832239790000ULL))) : (((/* implicit */unsigned long long int) ((((arr_0 [i_0]) + (2147483647))) >> (((13366806241469761615ULL) - (13366806241469761612ULL))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((long long int) (-((~(arr_0 [i_0]))))));
    }
    var_16 *= ((/* implicit */short) ((_Bool) ((((/* implicit */int) ((5079937832239789996ULL) == (5079937832239790010ULL)))) >= (((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_4) : (((/* implicit */int) var_9)))))));
    var_17 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) ((var_14) >= (((/* implicit */unsigned long long int) 3077663582779186373LL))))), (((((/* implicit */_Bool) var_3)) ? (var_14) : (var_14)))))));
}
