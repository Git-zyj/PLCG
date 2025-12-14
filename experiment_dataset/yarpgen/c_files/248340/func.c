/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248340
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
    var_17 = ((((/* implicit */_Bool) min((min((1485199568), (((/* implicit */int) var_15)))), (((/* implicit */int) (unsigned char)44))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((7676332617090516755LL), (((/* implicit */long long int) min((((/* implicit */int) (signed char)55)), (-1623985349)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((((/* implicit */int) arr_1 [i_0 + 3])) + (((/* implicit */int) (signed char)55)))) : (((((/* implicit */_Bool) -2102347787)) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((/* implicit */int) var_4))))));
                var_19 = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0 + 2])) / (((/* implicit */int) arr_4 [i_0 - 2])))) - (((((/* implicit */int) arr_3 [i_0 - 1])) / (((/* implicit */int) (unsigned short)629))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (unsigned short)64931);
}
