/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21921
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
    var_19 = var_10;
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((int) 2147483647))) && (((/* implicit */_Bool) var_13)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_22 = ((/* implicit */signed char) ((long long int) max((((((/* implicit */int) var_16)) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (64))))), (var_18))));
        arr_2 [i_0] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_0 [1ULL])))), ((+(((/* implicit */int) ((unsigned short) var_13)))))));
        var_23 = ((/* implicit */unsigned long long int) ((_Bool) max((((((/* implicit */_Bool) var_18)) ? (2147483647) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((var_3), (arr_0 [i_0])))))));
    }
}
