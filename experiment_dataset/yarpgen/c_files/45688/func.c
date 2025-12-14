/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45688
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
    var_15 ^= 6592474081140957622ULL;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [2U] [i_0 - 2] = var_0;
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            var_17 = ((unsigned long long int) max((((/* implicit */unsigned long long int) 0U)), (min((((/* implicit */unsigned long long int) 0U)), (3090286694389041624ULL)))));
            arr_7 [3ULL] [i_0] [i_0] = (~(min((arr_4 [2ULL] [i_0 + 2] [i_0 + 4]), (arr_4 [i_0 - 3] [i_0] [i_1]))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) arr_5 [i_2] [8ULL])) : (((((/* implicit */_Bool) 0U)) ? (var_3) : (var_5)))));
            var_18 = ((/* implicit */unsigned int) (((-(var_6))) & (((/* implicit */unsigned long long int) var_9))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0 + 2]) / (arr_5 [i_0 - 2] [i_0 - 2]))))));
        }
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_11) / (var_4)))) * ((-(5731868385834516500ULL)))))) ? (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) var_4)))) : (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_8)) : (var_2))), (((/* implicit */unsigned long long int) 4294967295U)))))))));
}
