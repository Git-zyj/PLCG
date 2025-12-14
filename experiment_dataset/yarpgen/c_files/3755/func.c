/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3755
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
    var_20 = ((/* implicit */_Bool) (unsigned short)11301);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((964154817), (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) 1190774886)) ? (((/* implicit */unsigned long long int) 4849045344978849LL)) : (16777200ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0 + 2])))))));
                var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_3 [i_1]))))) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)35107))))))))));
                arr_6 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)46630)), (-8067320253837611862LL)))) ? (4728809U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */short) (unsigned short)9764);
            }
        } 
    } 
}
