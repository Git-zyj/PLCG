/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199265
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
    var_18 ^= var_13;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */short) max(((unsigned short)1), (((/* implicit */unsigned short) (short)4095))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_5 [i_0] [i_1])))) ? (((var_7) + (arr_5 [i_0] [i_1 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 9007199254740991LL))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 144115188075855871LL)) ? (((/* implicit */int) (short)6390)) : (((/* implicit */int) (signed char)3))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                arr_8 [i_1] = ((/* implicit */unsigned long long int) -4893216808133044047LL);
            }
        } 
    } 
}
