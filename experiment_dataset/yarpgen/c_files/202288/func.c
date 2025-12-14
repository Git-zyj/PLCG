/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202288
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1044327033), (((/* implicit */int) (short)13202))))) ? ((+(((var_19) - (var_6))))) : (((/* implicit */unsigned long long int) (-(((int) var_3)))))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned short) max((((((/* implicit */int) var_1)) - (((int) 1918565010)))), (min((((((/* implicit */_Bool) 1741686594475362258ULL)) ? (((/* implicit */int) (short)13202)) : (241666516))), (((((/* implicit */int) (short)-13203)) / (var_15)))))));
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (short)13216)))), (1918565010)))), (((unsigned long long int) ((short) 1125899906842623ULL)))));
    }
    for (int i_1 = 3; i_1 < 9; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((min(((~(((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 3])) ? (((/* implicit */int) var_3)) : (1461669406))))) + (((((/* implicit */_Bool) ((var_14) ^ (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))))) ? ((~(arr_1 [i_1] [i_1]))) : (((((/* implicit */_Bool) 4194303)) ? (((/* implicit */int) (short)-15902)) : (((/* implicit */int) (_Bool)0))))))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))) : (var_19)))) ? (((/* implicit */unsigned long long int) (+(-241666516)))) : (((16705057479234189343ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)53456))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_23 ^= ((/* implicit */int) min(((unsigned short)53455), (((/* implicit */unsigned short) (signed char)0))));
        arr_10 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-112)) / (((/* implicit */int) (signed char)15))))) ? (((/* implicit */int) max(((short)0), ((short)1)))) : ((~(((/* implicit */int) (short)-5302)))))))));
    }
}
