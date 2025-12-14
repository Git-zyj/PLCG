/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54602
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
    var_15 = var_0;
    var_16 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */unsigned long long int) var_12);
                    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) var_10)))) >= (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (unsigned char)37))))));
}
