/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229335
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] [2U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [(unsigned short)17]) + (((/* implicit */unsigned long long int) var_12))))) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-60)))) * (((((/* implicit */int) arr_1 [i_0 + 1])) >> (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) var_16))));
        var_18 = ((/* implicit */long long int) arr_2 [(signed char)10] [i_0]);
    }
    for (int i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) max(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_0 [(unsigned short)0])) | (((/* implicit */int) var_7))))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (1879339430U))), (((/* implicit */unsigned int) ((unsigned short) arr_1 [i_1])))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned char)144))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((unsigned short) var_6)), (((/* implicit */unsigned short) arr_2 [i_1] [i_1])))))));
    }
    var_20 -= ((/* implicit */int) ((short) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_11)))));
}
