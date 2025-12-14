/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192420
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) ((((((/* implicit */int) var_4)) - (((/* implicit */int) (short)23261)))) != ((+(((/* implicit */int) var_13)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((16009751547142316002ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1547280111U)) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) (short)-23262))))))));
        var_18 &= ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 + 1]))) ? (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0 - 1])), ((short)-23263)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) var_2)))))));
        arr_4 [16ULL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) || (((/* implicit */_Bool) var_2)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23248))) % (2436992526567235593ULL))) : (max((15025453703423513892ULL), (((/* implicit */unsigned long long int) (unsigned short)14336))))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)51973)) ? (var_1) : ((+(var_1)))));
    var_20 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)23275)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)23260)))) | (((/* implicit */int) min((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)51199)))), (((((/* implicit */int) var_12)) < (((/* implicit */int) var_16)))))))));
}
