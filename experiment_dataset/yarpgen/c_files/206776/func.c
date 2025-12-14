/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206776
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
    var_18 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) max((min((arr_2 [i_1]), (arr_2 [i_1]))), (arr_2 [i_1])));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) min(((unsigned short)13510), (((/* implicit */unsigned short) (_Bool)1))));
                var_19 = ((/* implicit */unsigned int) arr_2 [i_1]);
            }
        } 
    } 
}
