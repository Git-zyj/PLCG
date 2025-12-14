/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37342
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
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */short) var_12)), ((short)3873)))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (var_14))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28710)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_2 [i_0]), (var_13)))))), (((/* implicit */int) ((arr_1 [i_0 + 4]) > (arr_1 [i_0 + 4]))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)7124)), (664982648230253383ULL)))) ? (((((/* implicit */int) (unsigned char)18)) | (((/* implicit */int) arr_2 [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
    }
}
