/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203534
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
    var_12 = var_0;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = min(((+(-8306351186212606610LL))), (((/* implicit */long long int) var_8)));
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8306351186212606610LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2046041599114732008LL)))), (((unsigned long long int) min((((/* implicit */unsigned char) arr_1 [i_0 - 3])), ((unsigned char)36))))));
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-15953)) ? (((/* implicit */long long int) 2143680399)) : (-8306351186212606610LL)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) ^ (((((/* implicit */_Bool) (unsigned short)49253)) ? (((/* implicit */int) arr_3 [i_1])) : (var_4)))));
        arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))) >= (-2046041599114732002LL)));
    }
    var_16 = ((/* implicit */signed char) var_11);
    var_17 = ((((((var_2) - (var_2))) != (((/* implicit */int) var_8)))) ? (((((((/* implicit */int) (unsigned char)173)) & (((/* implicit */int) var_9)))) * (((/* implicit */int) ((var_4) < (var_4)))))) : (min((min((1617771913), (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_1))))))));
    var_18 = ((/* implicit */_Bool) var_9);
}
