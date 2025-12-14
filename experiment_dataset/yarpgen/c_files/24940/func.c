/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24940
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
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((var_10) + (1470722889412856763LL))) - (19LL)))))) | (((var_7) << (((var_10) + (1470722889412856800LL))))))) | (((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)52))) & (max((((/* implicit */unsigned long long int) var_2)), (var_7)))))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_8))));
    var_15 *= ((/* implicit */unsigned int) ((unsigned char) var_11));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) arr_1 [i_0 + 3]);
        var_17 = ((/* implicit */unsigned short) (_Bool)1);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-47)) ? ((-(((/* implicit */int) (unsigned char)139)))) : (((/* implicit */int) var_2))));
        arr_7 [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)165)))) : (((/* implicit */int) arr_5 [i_1] [i_1 + 3]))));
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((var_7) & (12434117881988155587ULL))))), ((+(((/* implicit */int) var_0)))))))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) max((arr_0 [(_Bool)1]), (((/* implicit */unsigned char) (signed char)0))))) : (((((/* implicit */int) var_9)) - ((~(((/* implicit */int) arr_9 [(_Bool)1])))))))))));
        var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (-1LL)));
    }
}
