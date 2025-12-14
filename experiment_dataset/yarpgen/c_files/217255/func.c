/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217255
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))) >= (var_13)));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(9154666431884350206ULL))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 2U)) || (((/* implicit */_Bool) 9223372036854775807LL))));
    }
    var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 27U)) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) ((short) var_3)))))));
    /* LoopSeq 1 */
    for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) (~(var_6)));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((int) arr_2 [i_1] [i_1])) ^ ((~(-894266352)))))));
        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) min(((+(170160684))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_1])), (arr_1 [i_1] [i_1 - 2]))))))) ? (((long long int) (-(var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (-227519235)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) var_6)))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (var_6))))))));
    }
    var_21 = ((/* implicit */long long int) min((7536399181118402549ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    var_22 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (var_8)));
}
