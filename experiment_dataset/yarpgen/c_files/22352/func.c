/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22352
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
    var_20 = ((/* implicit */unsigned int) ((signed char) min(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (25165824U))), (((((/* implicit */_Bool) var_15)) ? (var_3) : (var_13))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3959)) ? (4269801446U) : (4269801459U)));
                var_21 = ((/* implicit */short) (signed char)39);
                var_22 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)51))));
                arr_6 [i_1] [i_0 - 3] [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_0 - 1]))))) * (3315911368U));
                var_23 = ((/* implicit */long long int) ((arr_4 [i_0 - 3]) > (var_19)));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_12))))));
    var_25 |= ((/* implicit */unsigned char) var_1);
}
