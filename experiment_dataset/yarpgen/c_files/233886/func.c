/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233886
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((unsigned char) ((unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18092))) : (4197011986243876038ULL)))));
        var_20 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_0 [i_0 + 2])), (min((((/* implicit */unsigned long long int) var_16)), (var_2)))))));
        var_21 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)18092)) ? (((/* implicit */int) ((short) arr_1 [i_0 + 2]))) : ((-(((((/* implicit */int) (unsigned char)105)) >> (((((/* implicit */int) var_14)) - (29351)))))))));
        var_23 = ((/* implicit */_Bool) ((int) ((((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (2915467050U))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))))));
    }
    var_24 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)113)) && (((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) (+(var_18)))) ? (((/* implicit */int) ((unsigned short) (short)14882))) : (((/* implicit */int) ((unsigned short) 15761169109844449509ULL)))))));
}
