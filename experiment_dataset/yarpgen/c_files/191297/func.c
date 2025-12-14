/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191297
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
    var_16 = ((/* implicit */int) min((var_16), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [12ULL] [12ULL])) | (arr_1 [i_0])))) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)0])) : (((((/* implicit */_Bool) (short)29927)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((int) (short)-32760))) == (var_8)))) : (((/* implicit */int) ((short) ((long long int) var_12))))));
    }
    var_18 = ((/* implicit */int) var_5);
}
