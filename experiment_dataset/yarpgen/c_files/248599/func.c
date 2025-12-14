/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248599
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) var_1))))) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])) : (13299040378531101903ULL))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                    var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_2 - 2] [i_2 - 3])) : (var_7)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-126)), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (!((_Bool)1))))))));
    var_18 = ((/* implicit */unsigned char) ((var_0) ? (((/* implicit */unsigned long long int) var_13)) : (var_3)));
}
