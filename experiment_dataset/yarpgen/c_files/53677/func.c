/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53677
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
    var_15 = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_8)), (var_1))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (var_12))))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_3))))))) >= (var_10)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) / (var_1)))) : (min((var_0), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_10)))))) : (min((var_6), (var_12)))));
                var_18 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4069331719232488440ULL)) && (((/* implicit */_Bool) (unsigned short)35809)))))) < (var_7))))));
                arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned int) var_13)), (var_12))) : (max((((/* implicit */unsigned int) var_2)), (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))) : (min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1515026025U)) || (((/* implicit */_Bool) -3383463549906721767LL)))))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)58419)), (1211199397U)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : (var_1)))));
    var_20 = ((((/* implicit */unsigned long long int) var_10)) != (((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (var_8))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (var_7))))));
}
