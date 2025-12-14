/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223142
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0]))))))) ? ((-(-5431657594987411421LL))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(arr_5 [i_1])))))))));
                var_20 ^= ((/* implicit */short) (+((~(((/* implicit */int) var_0))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)253)))))))));
                var_22 -= ((/* implicit */signed char) ((arr_5 [i_1 + 2]) ? (9007199253692416ULL) : (max((var_6), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15)))))))));
            }
        } 
    } 
    var_23 ^= var_7;
    var_24 = ((/* implicit */signed char) max(((unsigned char)171), (var_13)));
}
