/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36573
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [5])) && (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1]))))) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_19))))));
                    var_20 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_1 [i_0 - 1]))))) - (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (9223372036854775807LL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) - ((+(((/* implicit */int) ((2147483647ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))))))))));
}
