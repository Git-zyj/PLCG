/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242182
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 &= ((/* implicit */int) (unsigned char)222);
                var_20 *= ((/* implicit */short) max((((/* implicit */unsigned int) (-(1501420289)))), ((-(arr_4 [i_0])))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    var_21 &= ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) (~(3342878532560381866LL)))));
                    var_22 = ((/* implicit */unsigned char) var_6);
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (~(3342878532560381866LL))))));
}
