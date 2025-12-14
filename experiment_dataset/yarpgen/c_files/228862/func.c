/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228862
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (~(((((((((/* implicit */_Bool) (unsigned short)24683)) ? (var_3) : (((/* implicit */int) var_14)))) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned short)40853)))) + (40869))) - (15)))))));
                var_19 |= var_11;
                var_20 = ((/* implicit */long long int) min((797665444), (var_9)));
                var_21 = (-(((/* implicit */int) var_0)));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((unsigned char) max(((~(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (unsigned short)40853)) ? (((/* implicit */int) (unsigned short)40853)) : (((/* implicit */int) var_14)))))));
}
