/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30335
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
    var_17 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_6)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-7065)))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551598ULL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((arr_1 [i_0]) << (((((unsigned long long int) arr_4 [i_0 - 2])) - (18446744073709549155ULL)))));
                arr_6 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-121))))) ? (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) (short)8755))))) : (((/* implicit */int) ((short) -6120592412074684466LL)))))));
            }
        } 
    } 
}
