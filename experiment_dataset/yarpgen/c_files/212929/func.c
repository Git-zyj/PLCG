/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212929
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_13))) : (((/* implicit */unsigned long long int) (~(var_6))))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) var_18))))))) : ((~(((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 0LL))) ? (((/* implicit */int) ((short) var_9))) : ((+(((/* implicit */int) ((signed char) var_3)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_16)) : (var_3)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (var_5)))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14)))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_10))))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) var_2)))))))));
                    var_22 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_16)))) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (var_8))))));
                    arr_7 [i_0] = ((/* implicit */long long int) ((var_5) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4651744264177299765LL)) ? (-1005812610448461270LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (var_12))))))));
                }
            } 
        } 
    } 
}
