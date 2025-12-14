/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44868
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
    var_16 = ((/* implicit */unsigned char) var_7);
    var_17 = ((/* implicit */unsigned short) var_15);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)48))))) ? (max((var_14), (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) (unsigned short)38951)) ? (((/* implicit */int) (short)60)) : (((/* implicit */int) (short)48))))))) ? (max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) 15472486167055929047ULL)) ? (((/* implicit */int) (unsigned short)26585)) : (((/* implicit */int) (signed char)111)))))) : (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_0 [i_0] [i_0])))), (min((((/* implicit */int) max((arr_0 [(_Bool)1] [i_0]), (((/* implicit */unsigned short) (short)-52))))), (var_14))))))));
        var_20 = ((/* implicit */unsigned char) var_10);
    }
}
