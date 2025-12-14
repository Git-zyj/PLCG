/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210188
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) 254U)) ? (((/* implicit */int) ((signed char) (short)-3257))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)65)) > (((/* implicit */int) var_18)))))))) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)18)) - (((/* implicit */int) (unsigned char)227))))) - (var_8)))));
    var_20 ^= ((/* implicit */int) (signed char)-87);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) (signed char)77);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
            }
        } 
    } 
}
