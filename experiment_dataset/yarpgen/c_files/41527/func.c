/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41527
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) -2147483636)) ? (7261385903649198192LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18095))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (7261385903649198192LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            arr_6 [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) -241421530)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (2516383357402143425LL)))));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7261385903649198194LL)) ? (-7261385903649198195LL) : (9223372036854775807LL)));
            arr_10 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) 3722091636U)) & (12LL)));
        }
        arr_11 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)189))));
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) (signed char)-14));
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (-9223372036854775807LL - 1LL)));
    }
    var_21 = ((/* implicit */int) min((11725081643822037225ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35911)) ? (((/* implicit */unsigned long long int) -7261385903649198213LL)) : (((((/* implicit */_Bool) 1350121297167851586LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) : (6721662429887514391ULL)))))) ? (var_3) : (((((/* implicit */_Bool) 9223372036854775797LL)) ? (31457280) : (((/* implicit */int) (unsigned short)0))))));
}
