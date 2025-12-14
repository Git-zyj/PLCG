/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47926
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((8495940868757740667ULL), (((/* implicit */unsigned long long int) (unsigned char)125)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned char)125)))))))) ? (((long long int) 3788166306U)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 2826488381U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) (~(arr_2 [i_0 - 2])))) ? (arr_2 [i_0 - 2]) : (((/* implicit */int) var_9))))));
        var_13 ^= ((/* implicit */int) var_7);
        var_14 = ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) (unsigned char)131))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_15 += min((((unsigned long long int) ((268435455ULL) ^ (((/* implicit */unsigned long long int) var_6))))), (((/* implicit */unsigned long long int) ((int) ((var_4) ? (arr_4 [i_1]) : (arr_4 [i_1]))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-17347)) - (((/* implicit */int) (unsigned short)3))));
        var_17 = ((/* implicit */unsigned int) arr_3 [0U]);
    }
    for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) 
    {
        var_18 &= ((/* implicit */_Bool) arr_7 [(unsigned char)0]);
        arr_9 [4LL] &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-7)) : (((/* implicit */int) (unsigned char)125))));
    }
    var_19 = ((/* implicit */long long int) ((unsigned short) ((long long int) max((var_2), (((/* implicit */unsigned long long int) var_0))))));
}
