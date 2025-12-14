/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50581
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (587270657) : (var_10)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_9)) : (906696024075797564LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (min((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)22559)) == (var_10))))))));
    var_13 += ((/* implicit */int) var_11);
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) ((unsigned int) 9223372036854775790LL)))))), (-1231515885)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)24)) || (((/* implicit */_Bool) 1854566756U)))))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        var_16 = ((/* implicit */unsigned int) ((arr_1 [i_0]) & (((/* implicit */long long int) arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9)))))) ^ (arr_1 [i_0]))))))));
    }
    var_18 |= ((/* implicit */int) 4294967287U);
}
