/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211007
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((588786804) ^ (((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) var_1);
                var_16 = ((/* implicit */int) (short)26268);
                var_17 |= ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_18 |= ((((/* implicit */unsigned long long int) var_6)) * (var_1));
}
