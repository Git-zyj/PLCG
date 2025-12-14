/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32863
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
    var_10 = ((/* implicit */unsigned long long int) max(((short)-23875), (((/* implicit */short) (_Bool)1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (4635375464239922122ULL))), (min((((/* implicit */unsigned long long int) var_2)), (1152886320234758144ULL)))));
                    var_12 *= ((/* implicit */unsigned long long int) max((2039066562U), (((/* implicit */unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)125)))))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((/* implicit */long long int) max((1087814267), (((/* implicit */int) var_1))))), (max((var_5), (((/* implicit */long long int) (signed char)15)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) var_3);
}
