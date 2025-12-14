/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195941
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_1] [i_0])), (min((var_10), (((/* implicit */unsigned int) var_1))))))), (max((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_1 - 2])))));
                    arr_8 [i_1] [i_0] [i_1] [i_1] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((max((((/* implicit */int) arr_3 [i_0 + 1] [i_1])), (var_1))), (((/* implicit */int) arr_0 [i_1] [i_1 - 1]))))), (max((var_9), (((/* implicit */unsigned int) 0))))));
                }
            } 
        } 
    } 
    var_12 -= ((/* implicit */int) var_7);
    var_13 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) -1060711949)), (768196779U))), (min((3526770517U), (3526770515U)))))), (max((((/* implicit */unsigned long long int) var_2)), (var_6)))));
}
