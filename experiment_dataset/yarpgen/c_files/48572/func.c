/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48572
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (_Bool)1);
        arr_2 [i_0] = (_Bool)0;
    }
    for (unsigned char i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned long long int) 4096U);
            arr_8 [i_1 - 1] [i_1] [i_2] = ((/* implicit */short) -269031500369561795LL);
            var_21 -= ((/* implicit */_Bool) (+(-1LL)));
            arr_9 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(4096U)))))))));
        }
        var_22 = ((/* implicit */unsigned char) 4099U);
    }
    var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)25405))));
    var_24 = ((/* implicit */unsigned char) (-((~((+(7LL)))))));
}
