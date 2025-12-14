/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222455
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1 + 3] [i_1] [i_0] = ((/* implicit */unsigned short) (short)5941);
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((int) (short)5941)))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((_Bool) ((long long int) arr_3 [(short)6] [i_1 - 1] [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((-1747035355), (((/* implicit */int) ((unsigned short) (short)5941)))));
    var_22 = ((/* implicit */_Bool) ((unsigned short) min((min((-9223372036854775784LL), (((/* implicit */long long int) (short)-5939)))), (((/* implicit */long long int) ((_Bool) (unsigned char)44))))));
    var_23 |= ((/* implicit */unsigned short) var_6);
}
