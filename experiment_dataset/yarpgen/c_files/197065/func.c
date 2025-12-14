/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197065
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_3))) ? ((((~(var_8))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_11)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((var_3), (var_3))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) var_8))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) ? ((~(min((((/* implicit */unsigned long long int) var_4)), (var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
        var_21 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)54264)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    }
    var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_14))))))) : (var_17)));
    var_23 = ((/* implicit */int) min((var_23), (var_7)));
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_7))));
}
