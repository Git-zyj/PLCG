/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247846
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
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (1695875629U)))) : ((~(15177842014144178462ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15177842014144178462ULL))))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(13686809295399903736ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))) : (max((15177842014144178462ULL), (13686809295399903736ULL)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_10);
    var_12 = ((/* implicit */unsigned char) 246711831);
}
