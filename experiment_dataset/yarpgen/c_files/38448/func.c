/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38448
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) <= (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))));
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-710272153) : (arr_4 [i_2]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((0ULL) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_5))))));
}
