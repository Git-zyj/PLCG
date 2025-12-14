/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224875
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
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] |= (!(((/* implicit */_Bool) -2111460759478805220LL)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((var_9) + (9223372036854775807LL))) >> (((arr_0 [8LL] [i_0 + 1]) - (1373050221U)))));
        var_18 ^= ((/* implicit */_Bool) 1065985147U);
        arr_4 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-38)) + (2147483647))) >> (((arr_0 [i_0] [i_0]) - (1373050215U)))))) ? (arr_1 [i_0]) : (arr_1 [i_0 - 2])))) ? ((+(((((/* implicit */_Bool) -8588086495478204007LL)) ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0 - 1] [i_0 - 2]) : (arr_0 [i_0] [i_0 - 2])))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */int) 8588086495478204006LL);
        arr_9 [i_1] &= var_16;
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) 0)) : (var_13))) >> (((var_16) - (7119924151330025637LL)))))) ? ((+(2))) : (-4))))));
        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) ((8588086495478204007LL) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))) && (((/* implicit */_Bool) 3472861437U)))))));
        var_20 ^= ((/* implicit */_Bool) (+(-1)));
    }
    var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (26) : (((/* implicit */int) (_Bool)0))));
    var_22 = ((/* implicit */unsigned short) (~((~(((8485364753881392128ULL) >> (((((/* implicit */int) var_7)) + (14085)))))))));
    var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-42))))) ? (min((((/* implicit */unsigned int) (+(-4)))), (max((var_4), (var_13))))) : ((((~(1U))) - (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (4U))))))));
}
