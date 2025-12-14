/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199639
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_0)) ? (-3960667542252984598LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)116))))))))) : (((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */unsigned long long int) var_7)) : (var_0)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (short)-22014)))) / (((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (signed char)-96))))));
                var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (signed char)-72)))))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) 2547110458U)) ? (((/* implicit */int) (short)-18026)) : ((-2147483647 - 1))))))) : (((unsigned int) arr_3 [i_1 - 2] [i_1 + 1] [i_0]))));
            }
        } 
    } 
}
