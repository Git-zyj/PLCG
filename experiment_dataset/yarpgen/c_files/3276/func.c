/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3276
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
    var_16 = var_1;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_11)) + (((/* implicit */int) ((short) var_0))))), (((((/* implicit */_Bool) ((var_2) * (((/* implicit */int) var_8))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))))))));
        arr_2 [(_Bool)1] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= ((-(((((/* implicit */_Bool) 13265565157548310681ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1334543535U)))))));
    }
}
