/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209312
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
    var_10 += ((unsigned int) 498064771);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned short) (unsigned char)255);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(3801276847594873056ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_0)));
        var_11 &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_0 [i_0]))));
    }
}
