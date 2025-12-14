/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22200
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
    var_13 -= ((/* implicit */int) (short)-1812);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)27))))) ? (((/* implicit */unsigned int) (-(arr_1 [i_1 + 1])))) : (((unsigned int) arr_4 [i_0]))))) < (((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)68)))) | (arr_3 [i_0])))));
                var_15 -= ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max(((signed char)-83), (((/* implicit */signed char) var_4))))) : (((((/* implicit */int) var_10)) & (((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_2)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_9)) : (var_0)))) < (var_12)))));
}
