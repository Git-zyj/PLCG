/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244212
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
    var_11 = (signed char)102;
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_5)), (var_0)));
    var_14 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 13953526105846090584ULL)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) 13953526105846090584ULL);
        arr_2 [i_0] &= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */short) var_5);
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((min((var_8), (arr_0 [i_0] [i_0]))), (((((/* implicit */int) var_2)) >> (((arr_0 [i_0] [i_0]) + (559708724))))))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 13583262173682284934ULL))))) / (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))));
    }
}
