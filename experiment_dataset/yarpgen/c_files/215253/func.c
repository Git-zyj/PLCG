/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215253
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
    var_17 = ((/* implicit */unsigned long long int) var_12);
    var_18 = ((/* implicit */signed char) min((var_14), (((var_8) ^ (max((((/* implicit */long long int) var_12)), (var_15)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_14)))) ? (min((((/* implicit */long long int) max((1094096129U), (((/* implicit */unsigned int) (short)23660))))), (((((/* implicit */_Bool) 10171163624208909787ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)-13856))))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)182)) & (((/* implicit */int) (short)-16896)))))));
                arr_6 [8U] [8U] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)23636), ((short)-30897)))) ? (10171163624208909787ULL) : (((/* implicit */unsigned long long int) 2503405416U))));
                var_20 = ((/* implicit */int) max((-8847472203257161148LL), (((/* implicit */long long int) var_9))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_12)) : (var_14)));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23660)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) / (-9223372036854775797LL)))) : (max((((/* implicit */unsigned long long int) var_11)), (10171163624208909789ULL)))))) ? (((((((/* implicit */_Bool) var_15)) ? (8847472203257161147LL) : (var_3))) >> (((var_12) - (1650869158))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4U)) ? (7671365619457564571ULL) : (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */long long int) var_12)) : (var_3))))))));
}
