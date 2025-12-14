/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232802
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (-4808813909733707324LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (3437014412739492797LL)));
                var_19 -= ((/* implicit */short) 469232618U);
                var_20 = ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65070))) | (469232634U))) << ((((((_Bool)1) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_1])))) - (188))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (469232623U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / (var_1)))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((3825734672U) + (min((((/* implicit */unsigned int) (_Bool)1)), (712332304U)))))));
}
