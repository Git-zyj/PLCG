/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40182
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
    for (long long int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_7 [12LL] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (14LL)))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) (short)-24454)) ? (((/* implicit */long long int) 268435455U)) : (1605827444104604470LL))))), (((/* implicit */long long int) ((unsigned short) 9218501491724119921LL)))));
                var_18 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)9679)) >> (((((/* implicit */int) (unsigned char)154)) - (153)))))) ? (((((/* implicit */_Bool) -7899307660631936980LL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 16710186317316510840ULL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */int) var_3))))) <= (min((var_0), (((/* implicit */unsigned long long int) (short)-29950)))))))));
}
