/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33262
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((var_3) || (((/* implicit */_Bool) 9614502444984848946ULL))))) << (((/* implicit */int) var_3))))) | (959702347U)));
    var_13 = ((/* implicit */long long int) var_0);
    var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 3335264965U)) ? (959702355U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)43)) & (((/* implicit */int) var_6))))))));
    var_15 = ((/* implicit */short) ((unsigned char) (short)1711));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_2))))));
                var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */_Bool) (short)1711)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-112)))) != (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (unsigned short)2))))));
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) var_1)) & ((~((~(((/* implicit */int) (signed char)42))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (((unsigned long long int) 1ULL)))));
            }
        } 
    } 
}
