/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236296
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)54))));
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_1])), (arr_1 [i_0]))), (((/* implicit */unsigned int) max(((unsigned char)202), ((unsigned char)181)))))))));
                arr_8 [i_0 - 1] [i_1] &= ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */unsigned long long int) -7795657869817238025LL))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_12);
    var_17 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)33935))))) & (max((((/* implicit */unsigned long long int) var_5)), (var_1)))))) ? (min((((/* implicit */int) max((var_11), ((signed char)112)))), (((((/* implicit */_Bool) (short)30703)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) var_7)));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) var_7)) / (((/* implicit */int) var_9))))))) ? (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_14)))))) : (((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
}
