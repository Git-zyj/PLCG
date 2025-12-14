/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196523
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
    var_15 = ((/* implicit */unsigned char) (+(var_12)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [(signed char)1] [i_0] = ((/* implicit */short) (~(var_12)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) 3ULL);
        arr_4 [7ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) -6)) : (var_6)))) ? (((/* implicit */int) ((min((8992085988533774047ULL), (((/* implicit */unsigned long long int) arr_0 [(short)14])))) > ((+(5ULL)))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_0 [i_0])))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 8215363159346595682ULL)) ? (5ULL) : (8992085988533774047ULL))))));
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) var_10);
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-15202)), (var_2))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((((((/* implicit */unsigned long long int) 12288)) % (7248291169315675869ULL))) / (((/* implicit */unsigned long long int) arr_6 [i_1 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12288)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))) : (2787656496U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32047))) : (arr_6 [i_1 + 1])))))))));
    }
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_8))));
}
