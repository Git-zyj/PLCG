/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40889
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((int) var_3)))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((/* implicit */unsigned long long int) (short)27895)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))), (arr_0 [i_0])));
    }
    var_16 = ((/* implicit */short) (~((((!(((/* implicit */_Bool) -1)))) ? (((/* implicit */unsigned long long int) ((long long int) 14001013500960029624ULL))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -1)) : (var_10)))))));
    var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) var_14)) != (-12))))))));
}
