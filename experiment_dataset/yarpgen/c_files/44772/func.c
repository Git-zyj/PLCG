/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44772
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_18)), (var_7)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */unsigned int) arr_3 [i_0]);
        var_21 *= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-11221)))) ^ (((/* implicit */int) ((short) 3609690297381237541ULL)))));
    }
    for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((13868968122257674570ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_1]))))))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_3 [i_1]))));
        var_24 ^= ((/* implicit */_Bool) min((((/* implicit */int) var_15)), (min((((/* implicit */int) arr_1 [i_1 + 1])), (((((/* implicit */_Bool) 7581802449069274137ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_7 [i_1]))))))));
    }
    var_25 ^= ((/* implicit */unsigned char) var_17);
}
