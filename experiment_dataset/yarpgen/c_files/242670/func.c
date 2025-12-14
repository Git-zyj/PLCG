/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242670
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((unsigned int) arr_2 [i_0]));
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 13120767495688994075ULL)) ? (((/* implicit */long long int) var_10)) : (var_4)))))) ? (((unsigned long long int) max((((/* implicit */short) arr_0 [i_0] [i_0])), (var_3)))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ? (((arr_1 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) >= (arr_1 [i_0]))))))))));
        var_15 = ((/* implicit */short) (+(((/* implicit */int) max((((3169057812U) >= (((/* implicit */unsigned int) var_12)))), (var_13))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((unsigned int) max((((/* implicit */unsigned int) arr_2 [i_0])), (var_8)))));
    }
    var_16 = ((/* implicit */unsigned int) (!(var_7)));
}
