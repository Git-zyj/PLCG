/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32149
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
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))) : ((~(18446744073709551608ULL))))) - (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 -= ((((/* implicit */_Bool) ((18446744073709551615ULL) >> (((((unsigned long long int) (short)5493)) - (5457ULL)))))) ? (((((/* implicit */_Bool) (~(18446744073709551608ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)11616))))))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) + ((((!(((/* implicit */_Bool) 18446744073709551608ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))) : (((var_2) / (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
                }
            } 
        } 
    } 
}
