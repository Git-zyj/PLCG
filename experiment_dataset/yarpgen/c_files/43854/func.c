/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43854
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
    var_15 = ((/* implicit */unsigned char) ((int) 262143ULL));
    var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1008)) ? (var_0) : (((/* implicit */int) var_4))))) ? (min((262155ULL), (18446744073709289473ULL))) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((max((1150203630), (((/* implicit */int) (signed char)-123)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 16270543909946139204ULL))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned int) -1150203631);
                    var_18 = ((/* implicit */long long int) var_11);
                    var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)48)) || (((/* implicit */_Bool) min((18446744073709289461ULL), (((/* implicit */unsigned long long int) (unsigned short)35)))))));
                    arr_8 [i_2] [i_2 - 1] [(short)15] [i_2] = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) var_0)) ? (18446744073709289461ULL) : (var_12))), (((/* implicit */unsigned long long int) (+(3061767886813483916LL))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((262147ULL) >= (262154ULL))) ? (min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) var_0))))), (((((/* implicit */_Bool) var_9)) ? (18446744073709289472ULL) : (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))))))));
}
