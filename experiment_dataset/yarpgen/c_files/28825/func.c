/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28825
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_0) == (((/* implicit */unsigned long long int) var_18))))), (((112U) + (var_13)))))) : ((~(((unsigned long long int) var_11))))));
    var_20 ^= ((/* implicit */unsigned char) ((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) < (var_18))) ? ((-(var_15))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1))))))) == (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((-1962961079127016034LL), (((/* implicit */long long int) 219855920U)))))));
                    var_22 *= ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)142)))), ((-(((/* implicit */int) var_5))))))) ? (var_12) : (((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)30273)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 2]))) : (var_11))));
                }
            } 
        } 
    } 
}
