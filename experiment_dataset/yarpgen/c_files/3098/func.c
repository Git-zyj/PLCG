/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3098
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
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_3)) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((3650666296U) & (3650666296U))))))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(9223372036854775806LL))))));
                var_21 = ((/* implicit */unsigned short) ((unsigned int) ((((var_12) < (((/* implicit */unsigned long long int) arr_3 [i_1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-102))))) : (arr_4 [i_0] [i_1] [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) <= (var_3))))))), (((((/* implicit */_Bool) (unsigned short)44521)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44546))) : (503316480U)))));
    var_23 -= ((/* implicit */long long int) var_7);
}
