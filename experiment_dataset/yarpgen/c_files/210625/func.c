/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210625
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
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 = 2145242764;
                arr_5 [(short)22] = max((((/* implicit */unsigned long long int) ((short) (short)-26276))), ((+(var_5))));
                arr_6 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))));
            }
        } 
    } 
}
