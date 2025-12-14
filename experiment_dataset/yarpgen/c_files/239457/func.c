/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239457
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
    var_20 = ((/* implicit */unsigned long long int) (short)-4351);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((var_1), (((/* implicit */unsigned long long int) arr_0 [12U] [i_0]))));
        arr_3 [i_0 - 2] = ((/* implicit */long long int) ((8388608U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_4 [i_0 - 2] = ((/* implicit */signed char) max((arr_0 [i_0 - 2] [i_0 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61454)) && (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])))))));
    }
    for (long long int i_1 = 2; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) >> (((/* implicit */int) arr_6 [i_1]))));
        var_22 = ((/* implicit */_Bool) (short)23448);
        var_23 -= ((/* implicit */unsigned short) (signed char)112);
    }
    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned short) 0LL))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)48)) | (((/* implicit */int) (unsigned char)107))))) : (max((((/* implicit */long long int) (unsigned char)73)), (0LL))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_0)) - (68))))) : (((/* implicit */int) var_15)))))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(0LL)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (((unsigned short) var_12)))))));
}
