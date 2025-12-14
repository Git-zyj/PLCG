/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198058
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) 7787716428370223326ULL);
                var_14 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((long long int) arr_1 [i_0] [i_1]));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_16 *= var_1;
    var_17 = max((((/* implicit */short) (unsigned char)68)), ((short)25153));
}
