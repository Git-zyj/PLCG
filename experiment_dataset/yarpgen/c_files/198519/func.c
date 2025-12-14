/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198519
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
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)23)), ((-(min((((/* implicit */unsigned long long int) 3128016361U)), (var_9)))))));
    var_13 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) ((1166950962U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (~(max((821883025U), (((/* implicit */unsigned int) ((14U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27447))))))))));
}
