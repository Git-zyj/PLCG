/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199273
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (((unsigned int) (unsigned short)55789))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((var_2) > (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [(unsigned short)1])), (((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) (unsigned short)9747)))))))));
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) % (((/* implicit */int) (unsigned short)2626))));
                var_12 += ((/* implicit */signed char) var_8);
            }
        } 
    } 
}
