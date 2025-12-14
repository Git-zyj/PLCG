/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246426
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
    var_13 = ((/* implicit */unsigned short) min((min((var_5), (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) ((max((var_5), (((/* implicit */int) var_0)))) != (((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned short)34171)) : (arr_1 [i_0 - 1] [i_0]))))));
        arr_2 [(_Bool)1] = ((((/* implicit */int) var_8)) << (((((/* implicit */int) (unsigned short)30404)) - (30389))));
        var_15 = ((((/* implicit */_Bool) (short)-23381)) ? (4561037662300843299LL) : (((/* implicit */long long int) 1048576U)));
        var_16 -= ((/* implicit */unsigned short) (+(var_5)));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((var_0) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_3 [i_1])))) : (((((/* implicit */_Bool) 4611404543450677248LL)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((277076930199552ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1])) : (var_2))) : (((((var_6) + (2147483647))) << (((/* implicit */int) var_11)))))))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [(_Bool)1])), (var_2)))) && (((/* implicit */_Bool) arr_3 [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_3 [i_1]))))) : (((arr_4 [i_1]) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) arr_4 [i_1]))))));
        var_19 ^= ((/* implicit */int) var_0);
    }
    var_20 = (+(((((/* implicit */_Bool) var_1)) ? (min((var_4), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U)))))));
}
