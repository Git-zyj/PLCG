/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244176
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
    var_11 = (-(3415997253U));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (short)32767))));
                arr_7 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)65521));
                var_12 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)113))) : (min((((((/* implicit */_Bool) (short)-25565)) ? (-8084218438389432183LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50037)) ? (((/* implicit */int) (short)-1024)) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
