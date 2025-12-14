/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209375
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((short) max((arr_0 [i_0]), (arr_0 [i_0]))));
        var_15 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), ((+(((/* implicit */int) var_10))))))) ? ((~((-(arr_0 [i_0]))))) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((int) (short)(-32767 - 1)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63226)) ? (3230288624U) : (((/* implicit */unsigned int) 1064624448))))) : (((((/* implicit */_Bool) (unsigned short)63226)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) 1064624450)))))) << (((((arr_6 [i_1]) >> (((((/* implicit */int) var_13)) - (25679))))) - (9933)))));
        arr_8 [i_1] = ((/* implicit */short) ((unsigned int) min((var_12), (((/* implicit */short) (signed char)54)))));
        arr_9 [i_1] = ((/* implicit */short) 1064624459);
        var_17 = ((/* implicit */unsigned short) arr_6 [i_1]);
    }
    var_18 = ((/* implicit */unsigned long long int) var_6);
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((unsigned short)41087), (((/* implicit */unsigned short) var_8))))), ((~(var_2)))))) ? (var_11) : ((~(((/* implicit */int) var_13)))))))));
}
