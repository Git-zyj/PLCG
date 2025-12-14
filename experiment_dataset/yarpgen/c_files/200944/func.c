/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200944
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
    var_18 = ((/* implicit */unsigned short) ((short) ((short) ((((/* implicit */_Bool) var_15)) ? (var_17) : (((/* implicit */unsigned long long int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (((/* implicit */int) var_5))))), (((long long int) (~(995324507))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2047))) : (arr_1 [i_0])))) ? (min((max((((/* implicit */unsigned long long int) var_11)), (var_2))), (((/* implicit */unsigned long long int) max(((unsigned short)2042), (((/* implicit */unsigned short) var_4))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)48)), ((unsigned short)2042)))), (min((arr_0 [i_0]), (arr_0 [1]))))))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (min((((/* implicit */long long int) var_7)), (var_15))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (995324507))))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) (signed char)0))))) ? (min((var_11), (((/* implicit */long long int) 11U)))) : (((/* implicit */long long int) (~(var_16))))))));
    var_20 &= ((/* implicit */_Bool) 4294967285U);
}
