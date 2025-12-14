/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245082
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
    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 951074297)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), ((-9223372036854775807LL - 1LL))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -8203753698256474080LL)) : (18446744073709551607ULL))))), (((/* implicit */unsigned long long int) 951074291))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) 11ULL);
                    arr_6 [i_0] [(short)14] [(unsigned short)5] [(unsigned char)14] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (((/* implicit */signed char) var_9))))) ? (max((((/* implicit */long long int) (unsigned char)185)), (803582674240735710LL))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (var_2) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 2] [i_2 + 1])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_4))) ? (var_0) : (max((var_0), (((((-3721855127546109492LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)126)) - (110)))))))));
    var_18 = var_2;
}
