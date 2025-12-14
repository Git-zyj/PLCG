/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234452
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) (unsigned char)16)))), (((((/* implicit */int) var_15)) << (((268435440U) - (268435422U)))))));
        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) & (((((/* implicit */int) arr_2 [(unsigned short)1] [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_1] [11U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)8] [i_1]))))))) ? (max((((/* implicit */long long int) arr_5 [i_1])), (((long long int) (unsigned short)45114)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(short)0])) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) arr_5 [i_1])))))));
        var_22 = ((/* implicit */unsigned short) (((~(max((var_3), (((/* implicit */unsigned long long int) (unsigned short)19280)))))) != (((/* implicit */unsigned long long int) var_14))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1]))));
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)-19))))) <= (max((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_3)))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_0);
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (var_18)))) : (((((/* implicit */unsigned long long int) var_18)) ^ (18446744073709551615ULL)))))) ? ((~(max((var_3), (((/* implicit */unsigned long long int) 4294967295U)))))) : (((/* implicit */unsigned long long int) (~(((4563250550924629527LL) ^ (-7948889185348473894LL))))))));
}
