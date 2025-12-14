/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43708
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
    var_16 = (+(((/* implicit */int) var_4)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0 - 2])))) ? ((+(((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) (unsigned char)64))));
                arr_4 [(unsigned short)13] = ((/* implicit */int) min(((~(arr_2 [i_0] [i_0 - 1]))), ((~(arr_2 [i_0 - 1] [i_0 - 2])))));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((int) ((((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))) + (((unsigned long long int) (unsigned short)52383)))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_2);
}
