/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205815
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
    var_10 = ((/* implicit */unsigned char) 4294967295U);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (max((((/* implicit */long long int) min((arr_3 [4U] [i_1] [i_0]), (((/* implicit */short) arr_2 [i_0] [i_0]))))), (((long long int) arr_3 [i_2] [(unsigned char)15] [i_0]))))));
                    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((arr_5 [i_0] [i_0]), (4294967295U))), (min((4294967295U), (12U)))))) ? (((unsigned long long int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), (arr_2 [12U] [12U])))) : (((/* implicit */unsigned long long int) ((unsigned int) (short)-31498)))));
                }
            } 
        } 
    } 
}
