/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208024
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
    var_15 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */long long int) (!(arr_0 [i_1 - 3] [i_1 - 3])))), ((+(max((((/* implicit */long long int) var_4)), (-7774872906741747782LL))))))))));
                arr_4 [i_1] [i_1] = ((/* implicit */int) min(((+(var_8))), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 - 3]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (-(-1873150119)));
}
