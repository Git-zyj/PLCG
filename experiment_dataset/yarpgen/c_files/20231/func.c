/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20231
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) var_0)), (var_3))), (((/* implicit */unsigned short) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_1)))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_11)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])))))))));
        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-((-(((/* implicit */int) arr_3 [i_0] [8LL])))))) : (min((((/* implicit */int) min((arr_3 [i_0] [(signed char)2]), (arr_3 [(short)6] [i_0])))), (max((arr_0 [i_0]), (arr_0 [i_0])))))))));
    }
}
