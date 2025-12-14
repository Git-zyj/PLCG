/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189772
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
    var_14 = ((/* implicit */unsigned char) max((min((268435452U), (3604935733U))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_12) > (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [6ULL] [i_2] [i_1] = ((/* implicit */short) 690031592U);
                    arr_8 [(signed char)7] [i_1 - 3] [(signed char)7] [i_1] = ((/* implicit */unsigned char) var_0);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)78)) - (((/* implicit */int) (signed char)60))));
}
