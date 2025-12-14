/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247203
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0 - 1] [i_0 - 1] = (((~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0 - 3]))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (129024)))) ? ((~(129026))) : (max((-129021), (var_15))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((arr_0 [i_0 - 3] [i_0 - 1]) ? (arr_1 [i_0]) : (129026))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-115450983) : (arr_1 [i_0])))) ? (((/* implicit */int) var_10)) : ((((_Bool)1) ? (129026) : (((/* implicit */int) (unsigned char)199)))))))))));
    }
    var_18 &= max((((((/* implicit */int) ((unsigned short) var_14))) != ((+(((/* implicit */int) (unsigned char)91)))))), (((((int) var_5)) < (var_7))));
    var_19 = ((/* implicit */int) var_4);
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_2))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) -115450997)) && ((_Bool)0)))) ^ (((/* implicit */int) (unsigned char)178))));
}
