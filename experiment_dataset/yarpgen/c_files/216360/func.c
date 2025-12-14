/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216360
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
    var_17 = ((/* implicit */_Bool) min((max((max((9815482134059906051ULL), (((/* implicit */unsigned long long int) (unsigned short)23371)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (9815482134059906050ULL))))), (max((min((8631261939649645571ULL), (((/* implicit */unsigned long long int) var_7)))), (max((8631261939649645566ULL), (((/* implicit */unsigned long long int) (short)-2286))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) min((min((min((((/* implicit */unsigned long long int) (signed char)-1)), (18446744073709551600ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-14)), (arr_0 [i_1])))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)104)), (-31)))), (min((9815482134059906050ULL), (8631261939649645566ULL)))))));
                var_19 = ((/* implicit */int) max((max((min((((/* implicit */unsigned long long int) (unsigned char)18)), (9815482134059906050ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)15)), (2080374784)))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */int) arr_5 [i_1])), (var_0))), (((/* implicit */int) min((var_8), (arr_4 [i_0] [i_1] [i_0])))))))));
            }
        } 
    } 
}
