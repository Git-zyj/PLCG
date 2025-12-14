/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227247
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (var_6)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) var_8)) : (max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2969649305U))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((var_6) - (-1561945739340040271LL))) % (((/* implicit */long long int) ((unsigned int) var_3))))))));
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_2))));
                }
            } 
        } 
    } 
}
