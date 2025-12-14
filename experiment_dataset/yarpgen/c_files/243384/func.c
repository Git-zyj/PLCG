/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243384
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
    var_13 = ((/* implicit */short) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)17090)) ? (9732819835007036471ULL) : (((/* implicit */unsigned long long int) 482888575)))) - (9732819835007036454ULL)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_14 ^= (!((_Bool)1));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((8713924238702515127ULL) * (8713924238702515157ULL)))) ? ((+(((/* implicit */int) arr_0 [i_0 + 1])))) : ((-(((/* implicit */int) var_6))))));
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)22939), (arr_0 [i_0 + 1]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-22939))))));
    }
    var_17 = ((/* implicit */_Bool) var_0);
}
