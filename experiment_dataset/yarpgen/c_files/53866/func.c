/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53866
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (21928037U) : (((unsigned int) -1394791378)))))));
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */_Bool) max((((/* implicit */int) ((var_12) == (((/* implicit */long long int) (+(-1))))))), ((~((~(((/* implicit */int) arr_0 [i_0]))))))));
                var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 3453560211U))))) : (max(((~(450470566))), (((/* implicit */int) var_7))))));
            }
        } 
    } 
}
