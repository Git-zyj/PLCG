/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22981
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
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */int) var_19);
        var_21 += ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) min((var_11), (var_13)))))), (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_17)) == (((/* implicit */int) arr_1 [i_0]))))), (max(((unsigned short)21862), (((/* implicit */unsigned short) arr_3 [i_0 - 2])))))))));
        var_22 = ((/* implicit */short) min((var_22), (arr_1 [i_0 - 2])));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned short)43656)) - (43634)))));
}
