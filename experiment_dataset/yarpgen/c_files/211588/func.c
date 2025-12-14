/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211588
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
    var_10 *= ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) >= (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_6))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [7LL])))) : (((/* implicit */int) var_3))))) : (max((-8848112242678290380LL), (((/* implicit */long long int) (unsigned char)224))))));
                var_12 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-77))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) var_6)))))))) <= (((((/* implicit */_Bool) ((int) (signed char)-35))) ? (3049066844U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
