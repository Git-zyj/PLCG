/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242087
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
    var_18 -= ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_12)));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_20 = (!(((/* implicit */_Bool) 107313143)));
            var_21 = ((signed char) ((unsigned char) 107313143));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 107313143)) ? (107313133) : (var_14)))));
        }
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 107313133))));
            var_24 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
        }
        for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 3) 
        {
            var_25 &= ((/* implicit */_Bool) var_5);
            var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((var_1) < (((/* implicit */int) (signed char)-8))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))));
        }
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) -107313133)) : (var_8)))) ? (((/* implicit */unsigned long long int) var_0)) : (min((((/* implicit */unsigned long long int) var_4)), (var_13)))))) ? (var_12) : (((/* implicit */unsigned int) var_2))));
}
