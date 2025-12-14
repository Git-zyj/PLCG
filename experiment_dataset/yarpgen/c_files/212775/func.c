/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212775
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
    var_20 = ((_Bool) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)-87)), ((short)3823))))));
    var_21 = ((/* implicit */long long int) ((int) var_6));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned int) (+(max((3731841069U), (((/* implicit */unsigned int) (signed char)87))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned char) (signed char)-87))))) ? (((((/* implicit */_Bool) 4166210954U)) ? (2402943214U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32236))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3823))))));
                arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */int) ((signed char) (-(((unsigned long long int) (short)-3819)))));
            }
        } 
    } 
}
