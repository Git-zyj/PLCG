/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20737
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
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+((~(-3220293880777427604LL)))))) + (((((/* implicit */unsigned long long int) min((var_16), (((/* implicit */int) var_9))))) + (var_4)))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (((+(((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (_Bool)1)))))) >= ((-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0 + 2] [i_0] = var_5;
                    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_5)) : (arr_4 [15])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) + (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16054))) : (4192527420U))))))) ? ((-(((arr_6 [i_0] [i_0] [i_1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_4))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12))), (9223372036854775807LL))))));
                }
            } 
        } 
    } 
}
