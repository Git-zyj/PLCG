/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21540
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
    var_15 = ((int) var_7);
    var_16 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) min((min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))))), ((-((-(((/* implicit */int) arr_0 [i_0]))))))));
        var_18 -= ((/* implicit */int) var_0);
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) min((((/* implicit */short) var_10)), (var_12)))) : (((/* implicit */int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) ? (max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_8)) ? (var_6) : (var_11))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_1)) : (var_6)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_8))))))) < ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)10)) > (((/* implicit */int) (unsigned short)65525)))))))));
}
