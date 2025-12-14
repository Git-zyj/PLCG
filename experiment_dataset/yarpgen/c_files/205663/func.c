/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205663
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
    var_18 = max((((/* implicit */unsigned short) var_0)), (max((((unsigned short) var_12)), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_0))))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) var_16)) / (((/* implicit */int) (short)-30425))))))) && (((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)29899);
        var_20 = ((/* implicit */_Bool) (unsigned short)3);
        var_21 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14))))), (min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (4294967285U)))), ((-(((/* implicit */int) var_11))))))));
    }
}
