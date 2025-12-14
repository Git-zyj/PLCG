/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47787
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) ((unsigned long long int) min((var_8), (var_13))));
                    arr_9 [i_2] = ((/* implicit */long long int) ((unsigned long long int) -546876051));
                }
            } 
        } 
    } 
    var_16 = (~(9223372036854775807LL));
    var_17 = ((/* implicit */_Bool) var_2);
    var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned int) var_7))) ? (var_6) : (((/* implicit */unsigned long long int) ((long long int) 546876067)))))));
}
