/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214095
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
    var_20 = ((/* implicit */_Bool) ((var_8) + (((var_2) ? (13181136843614489789ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_12))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(_Bool)0] = ((/* implicit */short) ((((/* implicit */unsigned int) var_5)) & (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_21 = arr_2 [i_0] [(_Bool)1];
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) 2110570681U)) : (1116892707587883008LL)));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_0 [i_1] [i_1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) min((min((var_8), (((unsigned long long int) arr_2 [i_1] [i_1])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) min((-7952369977187207197LL), (((/* implicit */long long int) (unsigned char)0))));
    }
    var_24 = ((/* implicit */_Bool) var_3);
    var_25 = ((/* implicit */signed char) var_17);
}
