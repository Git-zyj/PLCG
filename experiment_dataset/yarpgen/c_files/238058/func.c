/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238058
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
    var_20 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)111))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-72)) != (((/* implicit */int) (short)-20424))))) + (((/* implicit */int) arr_3 [i_1 - 1] [i_0 + 1]))));
                arr_5 [i_0 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 3])) : (((/* implicit */int) var_6)))))));
            }
        } 
    } 
}
