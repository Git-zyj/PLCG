/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246955
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((long long int) var_3)))) >> ((((~(var_1))) - (6233412944998527188LL)))));
    var_19 &= ((/* implicit */short) ((var_5) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 - 1] [i_1] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 5104967485537958574ULL)))) ? (((/* implicit */int) ((unsigned char) (unsigned short)0))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) max(((unsigned short)12), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1)))));
                var_20 = ((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */long long int) ((_Bool) -512191320)))));
            }
        } 
    } 
}
