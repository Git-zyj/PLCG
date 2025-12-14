/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214282
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) var_8);
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 211956772U)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((((/* implicit */int) arr_5 [i_1])) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (7572130891067637689LL)))));
        arr_7 [i_1] = ((/* implicit */int) var_6);
    }
    var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) << (((((/* implicit */int) var_7)) & (((/* implicit */int) (short)-7772)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) (short)8191)), (var_15)));
}
