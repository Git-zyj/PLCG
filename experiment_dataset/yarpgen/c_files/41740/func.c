/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41740
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
    var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)43473))));
    var_19 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) 3262368938U);
                arr_7 [i_1] = ((/* implicit */_Bool) 902977776);
            }
        } 
    } 
}
