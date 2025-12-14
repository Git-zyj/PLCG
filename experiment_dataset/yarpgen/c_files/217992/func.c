/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217992
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
    var_20 = ((/* implicit */int) var_19);
    var_21 &= ((/* implicit */unsigned int) ((_Bool) var_17));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 0ULL);
                var_22 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_1 [i_0] [i_1])))), ((+((+(((/* implicit */int) (short)-29327))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_0);
}
