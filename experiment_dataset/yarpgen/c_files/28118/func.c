/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28118
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (max((18446744073709551612ULL), (4ULL))))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)2)) ? (3937397577U) : (((/* implicit */unsigned int) 2147483643))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */int) (short)-32765)) < (((/* implicit */int) (unsigned short)8480))));
            }
        } 
    } 
}
