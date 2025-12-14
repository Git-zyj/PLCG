/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214646
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 -= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_21 &= ((/* implicit */unsigned long long int) ((1148011168346161143ULL) >= (((/* implicit */unsigned long long int) 4595471373789361791LL))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) arr_1 [5LL])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0])))))));
        var_23 -= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21813))) : (var_19))));
    }
    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -5447615564571450048LL)))) : (min((((/* implicit */unsigned long long int) 583396085U)), (14777171618878369013ULL))))) > (((/* implicit */unsigned long long int) -7814150353324500817LL))));
}
