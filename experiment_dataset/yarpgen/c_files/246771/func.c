/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246771
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) >= (((/* implicit */int) (unsigned short)65518))))) / (((/* implicit */int) arr_1 [4ULL]))));
                var_21 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (unsigned short)65518)) >= (((/* implicit */int) ((unsigned short) 4294967295U))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-8412303631303659401LL)))) ? (((/* implicit */int) ((var_18) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62157)))))) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    var_23 = ((/* implicit */unsigned short) var_17);
}
