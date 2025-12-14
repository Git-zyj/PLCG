/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43336
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned long long int) var_5)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (-(max((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0]))))));
        var_16 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (arr_0 [i_0]))), (arr_0 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((min((arr_1 [(signed char)19]), (arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))))) : (14450548316247276177ULL)));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) max((143953074716486206ULL), (((/* implicit */unsigned long long int) (unsigned short)44422))))))));
    }
    var_17 = var_8;
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)127))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21091)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (signed char)92))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))) : (max((((/* implicit */unsigned long long int) var_12)), (var_8)))))));
    var_19 = ((/* implicit */unsigned short) -1086198103);
}
