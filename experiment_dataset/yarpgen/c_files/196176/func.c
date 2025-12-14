/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196176
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_6 [i_1] [i_2 - 2] [i_2 - 1]), (var_11)))) ? (arr_2 [i_0]) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_8)), (var_2)))), (((((/* implicit */_Bool) 16374226994204321103ULL)) ? (((/* implicit */unsigned long long int) var_16)) : (2072517079505230513ULL)))))));
                    var_18 = ((/* implicit */signed char) (short)-21659);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (+(366163011)));
    var_20 = ((/* implicit */unsigned int) ((366163023) >> (((3992367698U) - (3992367688U)))));
}
