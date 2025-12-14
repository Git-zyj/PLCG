/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220989
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_16))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned char)255))))));
                var_20 |= max((((((/* implicit */_Bool) 1213282856)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [8U] [i_1]))) : (9765268543520895944ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)19))))))), (((/* implicit */unsigned long long int) arr_3 [i_1])));
                var_21 = ((((/* implicit */_Bool) min((arr_3 [i_0 + 1]), (((/* implicit */short) var_13))))) ? (((((/* implicit */_Bool) (~(79108678U)))) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (short)8104)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 79108669U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_1])))))));
            }
        } 
    } 
}
