/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217659
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
    var_14 = (~(var_1));
    var_15 = ((/* implicit */long long int) (((-(max((var_10), (((/* implicit */unsigned int) var_0)))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned short) var_12);
        arr_3 [i_0 - 1] = ((/* implicit */unsigned short) min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) (signed char)78))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) arr_2 [i_0]))), (var_13)))) ? (((((/* implicit */_Bool) max((16675514397262173752ULL), (15660961078411596210ULL)))) ? (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) : (11643483967723299384ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (arr_2 [i_0])))), (((unsigned int) 9953599670818014673ULL)))))));
    }
}
