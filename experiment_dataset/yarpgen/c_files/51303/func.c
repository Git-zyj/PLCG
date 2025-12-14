/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51303
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
    var_10 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_2 [i_1 + 3] [i_1 - 1] [i_1 + 2])))));
                var_12 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_1 + 2] [i_1 + 3]));
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_2 [i_1 + 3] [i_1 + 2] [i_1 + 1]) - (686704543U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_1 + 2] [i_1 + 1] [i_1 + 2]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (var_7)));
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (-32LL))) * (((/* implicit */long long int) min((arr_2 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))))))) / ((((_Bool)1) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
            }
        } 
    } 
}
