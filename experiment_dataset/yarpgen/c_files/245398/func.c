/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245398
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
    var_15 |= ((short) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (signed char)31))));
                var_17 = ((/* implicit */unsigned short) (~((((~(((/* implicit */int) var_0)))) << (((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_0)))) + (47)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (min((((/* implicit */unsigned long long int) 65880009)), (1493691081273920592ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (short)-26780)) ? (((/* implicit */int) (signed char)-92)) : (16383))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) ? (max((var_6), (((/* implicit */int) var_11)))) : (min((-779400952), (((/* implicit */int) var_11))))))));
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)48212))))))));
}
