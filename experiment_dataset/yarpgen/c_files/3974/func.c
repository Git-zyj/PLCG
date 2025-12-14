/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3974
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
    var_14 ^= var_9;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (((long long int) arr_2 [i_0] [i_0]))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((647743270), (min((-2147483636), (-2147483640)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0])))) : (((arr_2 [i_0] [i_0]) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)92)), (arr_0 [i_0])))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2035073690) - (647743247)))) ? (((/* implicit */unsigned int) 647743274)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)85))))) ? (((unsigned int) (unsigned short)12250)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) var_9))))));
        var_18 -= ((/* implicit */short) (+(((((_Bool) (unsigned short)51477)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (9223372036854775795ULL)))) : ((((_Bool)1) ? (((/* implicit */int) (short)4494)) : (((/* implicit */int) (short)-1))))))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_2]))))))))));
        var_20 -= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((long long int) arr_8 [i_2] [i_2]))) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)32))) >= (var_5)))))));
    }
}
