/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46381
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
    var_17 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((31) | ((-2147483647 - 1))))) % (9469858493195533793ULL))) + (((((/* implicit */_Bool) ((((-1375564651730404145LL) + (9223372036854775807LL))) >> (((var_2) - (11070199877077379258ULL)))))) ? (5639582050622575548ULL) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_2)))))));
    var_18 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))))))));
        var_20 = (((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192))) : (var_12))))) <= (var_11));
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192))) % (17673503188083285035ULL))))))) + (arr_1 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) max((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */int) (unsigned char)15)) < (((/* implicit */int) arr_2 [i_1]))))))))))));
        var_23 = ((/* implicit */int) max((var_23), ((~((~(((/* implicit */int) arr_0 [i_1]))))))));
    }
    var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) 17673503188083285036ULL)) ? (17673503188083285039ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
