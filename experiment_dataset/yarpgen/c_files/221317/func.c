/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221317
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
    var_10 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */unsigned long long int) var_0);
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 4814327271134842676ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (14139434114076624854ULL)))))));
        var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)251))))), (min((((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */long long int) arr_1 [i_0]))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_4)))))));
    }
    for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) var_2)) : (var_7)))) ? ((+(18446744073709551610ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (int i_2 = 4; i_2 < 20; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5110090691824233248LL)) && (((/* implicit */_Bool) (unsigned short)64016)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 1148417904979476480ULL)))))));
            var_15 &= ((/* implicit */unsigned short) ((unsigned int) 906195782U));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))) % (var_5)))));
            var_17 ^= ((unsigned short) (-(((/* implicit */int) arr_7 [i_1] [i_1] [i_1 + 1]))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) max(((-(4294967295U))), (((/* implicit */unsigned int) 1066634182))))) ? (min((((/* implicit */unsigned int) arr_6 [i_1] [i_3])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7253))) : (var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3] [i_1 - 2])) ? (((/* implicit */int) arr_5 [i_3] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1] [i_1 - 2])))))))));
        }
        var_19 = ((/* implicit */short) max((((((9256648959145600865ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) % (((/* implicit */unsigned long long int) (+(-4576941012035579812LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 3] [i_1]))) < (var_7))))));
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_2)), (var_4))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 9093851366172310000LL)) : (var_9))))))) & (max((4307309959632926776ULL), (((/* implicit */unsigned long long int) (unsigned short)52254))))));
}
