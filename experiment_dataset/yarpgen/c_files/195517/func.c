/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195517
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
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)187);
    var_14 = ((/* implicit */unsigned int) ((unsigned char) (~(var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            {
                arr_6 [i_1] = arr_5 [i_0] [i_1 + 2];
                var_15 = max((((/* implicit */unsigned long long int) (unsigned char)78)), (max((arr_3 [(unsigned char)2] [i_1 - 4]), (((/* implicit */unsigned long long int) var_1)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_10);
    var_17 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_0)))))));
}
