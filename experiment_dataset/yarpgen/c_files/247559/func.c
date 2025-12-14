/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247559
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [1] [i_0] = ((((((/* implicit */long long int) ((((/* implicit */_Bool) 3906635152U)) ? (2583045801U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105)))))) < (var_7))) ? (((/* implicit */unsigned long long int) 2583045801U)) : (((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) 2583045801U)) : (var_8))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))))));
                    var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-65)) ? (max((3605017038U), (((/* implicit */unsigned int) (signed char)-49)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) arr_0 [i_0])) : (var_13)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)0))))) ? (((115858014U) >> (((/* implicit */int) arr_5 [2LL])))) : (((/* implicit */unsigned int) 819120157))))));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */short) var_12);
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-49)) ? (var_6) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) >> (((var_13) - (21426696)))));
    var_17 |= ((/* implicit */_Bool) (signed char)69);
}
