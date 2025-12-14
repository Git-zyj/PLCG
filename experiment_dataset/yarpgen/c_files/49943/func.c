/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49943
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) var_0);
                    arr_7 [i_0] [i_0] [i_2 - 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529))) & (29LL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 29LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (3501850565458797366ULL))) : (((/* implicit */unsigned long long int) var_4))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) (unsigned short)46403)) ? (((var_9) ? (18446744073709551615ULL) : (7ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -30LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)58)))))))));
}
