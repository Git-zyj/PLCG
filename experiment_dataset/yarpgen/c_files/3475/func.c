/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3475
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
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)23] [i_2 + 1])) ? (-541682449) : (((/* implicit */int) var_6))));
                    var_16 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)255)))) * (((/* implicit */int) max((var_4), (((/* implicit */short) arr_4 [i_1 - 1] [i_0])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_5);
    var_18 |= ((/* implicit */signed char) var_8);
}
