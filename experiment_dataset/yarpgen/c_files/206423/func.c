/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206423
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) < (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) | (min((((/* implicit */int) var_3)), (var_9)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) (+((+(((((/* implicit */int) arr_1 [5LL])) + (((/* implicit */int) arr_0 [i_0]))))))));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))) != (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) 1119107933)) ? (247764057U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (signed char)66))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0ULL]))) % (arr_3 [(unsigned short)2] [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1119107915)) && ((_Bool)0)))))));
        var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) arr_1 [i_1]))))) / (((((/* implicit */_Bool) 2147483647)) ? (-7259045926677169449LL) : (-1505584790201196121LL)))));
    }
}
