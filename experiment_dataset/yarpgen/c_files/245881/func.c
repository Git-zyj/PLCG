/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245881
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
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)73), (var_6)))) << (((max((var_13), (((/* implicit */unsigned long long int) var_3)))) - (18446744073709539819ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2]))))) : (((unsigned int) min(((unsigned short)4095), (((/* implicit */unsigned short) arr_2 [i_0 + 2])))))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((long long int) var_10)))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)198)) % (((/* implicit */int) (short)-1))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((4294967279U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))))))) ? (min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned short)61459)) : (((/* implicit */int) arr_0 [i_1] [i_1])))), ((~(((/* implicit */int) (unsigned short)9358)))))) : (((/* implicit */int) ((var_1) == (((/* implicit */int) arr_0 [i_1] [i_1])))))));
        var_18 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) ((signed char) arr_2 [i_1]))), (((unsigned short) 15246532409691832510ULL)))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_5);
    var_20 = ((/* implicit */signed char) min((((/* implicit */int) var_11)), ((~(max((var_10), (var_10)))))));
    var_21 = ((/* implicit */int) var_4);
}
