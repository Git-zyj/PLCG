/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234396
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
    var_10 |= ((/* implicit */unsigned char) var_6);
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) (~(((unsigned long long int) (~(10923584254397081637ULL))))));
                var_13 = ((/* implicit */int) arr_0 [(unsigned short)6]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (signed char)31);
}
