/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219120
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((unsigned long long int) ((((/* implicit */unsigned long long int) var_3)) != (var_12)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226)))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((max((((unsigned long long int) 0)), (((/* implicit */unsigned long long int) (unsigned short)59111)))) >> (((((((/* implicit */_Bool) max((-17), (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) (unsigned char)29)) * (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (signed char)-70))))))) + (76657)))));
                arr_6 [i_1] &= ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (((-((+(var_12))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)59112)))))))));
}
