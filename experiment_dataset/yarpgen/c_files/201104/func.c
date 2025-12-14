/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201104
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
    var_19 &= ((/* implicit */int) var_8);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((short) ((18446744073709551615ULL) < (var_2))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)114)))) != (0ULL))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_5)) : (var_18))))) >= (min((min((4ULL), (((/* implicit */unsigned long long int) -1)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-1022)), (1035762050))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_1 - 1] [i_1 - 2] [i_1 - 1])), (min((((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_1 + 1] [i_1 - 3] [i_1 - 2])), (805306368ULL)))));
                    var_23 = ((/* implicit */unsigned short) (~(((unsigned long long int) ((0) >= (((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
}
