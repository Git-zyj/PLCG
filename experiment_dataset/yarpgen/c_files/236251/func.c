/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236251
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-22))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) 261233475)) ? (((/* implicit */long long int) 2147483647)) : (((((/* implicit */_Bool) -1421791426)) ? (2LL) : (8440048960547119704LL)))));
                var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -261233476)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (unsigned char)73))))) ? ((((_Bool)1) ? (8848398636298598959LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44035))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6259063309817588360LL)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (unsigned char)63)))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (signed char)-1);
            }
        } 
    } 
    var_17 = 751844798U;
}
