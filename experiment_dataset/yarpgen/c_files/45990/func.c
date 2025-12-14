/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45990
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_10 ^= (~(((((/* implicit */_Bool) (unsigned short)14111)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (unsigned short)14864)))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)328)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1069239176)) ? (((/* implicit */int) (short)-31846)) : (((/* implicit */int) (unsigned short)14111)))))))) : ((((_Bool)1) ? (((/* implicit */int) min(((short)-24320), ((short)-15261)))) : (-1069239176)))));
        var_12 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_8)))))))));
    }
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)328)) : (57725224)))) ? (-6256002067411678853LL) : ((-(0LL))))))))));
    var_15 = ((/* implicit */short) var_9);
}
