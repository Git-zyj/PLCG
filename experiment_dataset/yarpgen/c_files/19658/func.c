/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19658
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((-679579406448372013LL) + (((/* implicit */long long int) ((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)8269))) : (var_4)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(1936204532441518326ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (((arr_0 [i_0] [i_0]) << (((var_8) - (2128937400312777456LL)))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */int) (short)8269)) : (((/* implicit */int) (signed char)-74)))) | (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) ((signed char) 16510539541268033289ULL)))));
    }
    for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((short) ((((long long int) arr_3 [i_1 + 1])) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (4294967285U)))))));
        var_16 = arr_4 [(short)6] [(_Bool)1];
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */unsigned int) var_9)) : (4294967288U))))) ? (min((arr_3 [i_1 - 3]), (arr_3 [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_4 [i_1] [4ULL]))) == (((/* implicit */int) ((_Bool) 679579406448371997LL)))))))));
        var_18 = ((/* implicit */short) ((_Bool) (unsigned char)120));
    }
}
