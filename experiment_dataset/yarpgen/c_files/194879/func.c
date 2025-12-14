/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194879
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
    var_17 = ((/* implicit */unsigned short) var_7);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) == (var_3)));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((long long int) ((unsigned char) (unsigned short)65535));
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (arr_6 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((int) (unsigned char)164)))))), (max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) 9223372036854775791LL))))));
            }
        } 
    } 
}
