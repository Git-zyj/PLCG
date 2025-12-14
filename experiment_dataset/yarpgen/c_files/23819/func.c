/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23819
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
    var_13 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)127))));
                var_14 = ((/* implicit */signed char) arr_0 [i_0 + 2] [i_0 + 2]);
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned long long int) ((unsigned short) (~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)47)))))));
}
