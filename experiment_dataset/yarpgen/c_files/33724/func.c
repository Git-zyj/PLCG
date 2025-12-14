/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33724
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
    var_18 -= ((/* implicit */_Bool) var_13);
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned long long int) var_14)))));
    var_20 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) min(((+(((/* implicit */int) (unsigned short)34220)))), (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned short)2920)))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) (_Bool)0))), (((unsigned long long int) (unsigned short)62616)))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) max(((-(min((var_1), (14524602703738886124ULL))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)0)))) ? ((-(((/* implicit */int) (signed char)39)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)34406)) : (((/* implicit */int) (short)4138)))))))));
                var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)-84))))), (min((4078910452U), (((/* implicit */unsigned int) (short)-4096)))))))));
            }
        } 
    } 
}
