/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205613
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
    var_11 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (short)-8654))))));
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-8654)), (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (var_2))))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) (short)8653)), (-6839309759254324135LL))) : (((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_5)))))))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) var_3)))))) : (((/* implicit */int) var_9))));
    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((int) ((((/* implicit */int) var_3)) > (arr_2 [(_Bool)1] [i_1])))) > (((/* implicit */int) min(((short)8653), (((/* implicit */short) (_Bool)1)))))));
                arr_6 [17ULL] [i_1] = var_7;
            }
        } 
    } 
}
