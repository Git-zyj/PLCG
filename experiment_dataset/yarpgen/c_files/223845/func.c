/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223845
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
    var_19 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((var_18) >> (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2))))) : (((1327888623) - (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33)))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) var_11)) : (max(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((unsigned char) var_1)))))))));
                }
            } 
        } 
    } 
}
