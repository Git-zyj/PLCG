/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54837
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 += var_9;
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))) ^ ((~(((/* implicit */int) (unsigned char)9))))));
                var_22 *= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)247)), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) (unsigned char)9))))) ? (((((/* implicit */int) (unsigned char)9)) ^ (((/* implicit */int) (unsigned char)247)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)247)) || (((/* implicit */_Bool) (unsigned char)9)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)9)), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)255)))))) : (min((var_7), (((/* implicit */long long int) var_1)))))))))));
}
