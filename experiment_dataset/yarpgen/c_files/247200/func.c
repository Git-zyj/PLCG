/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247200
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
    var_13 &= ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775791LL)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        arr_3 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) ? (min((((unsigned long long int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)25984)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) (((~(arr_0 [i_0] [i_0]))) & ((+(0))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_14 &= (-(6U));
        arr_6 [0U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) << (((/* implicit */int) ((((/* implicit */int) var_4)) >= (arr_0 [22ULL] [13ULL]))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -172737906))));
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (9223372036854775795LL))))) * (((((var_1) / (((/* implicit */long long int) var_2)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39551))) : (var_3))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? ((~(var_10))) : (((/* implicit */int) var_4))));
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max(((unsigned char)54), ((unsigned char)12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_2)) : (var_12))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51)))));
}
