/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223772
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
    var_19 = ((/* implicit */unsigned long long int) (!(((_Bool) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)90))) ? (max((arr_0 [i_1]), (((/* implicit */int) (signed char)-77)))) : ((-(-1813708859)))));
                var_21 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) arr_3 [i_1] [(signed char)6] [(unsigned short)7])), (var_11)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (unsigned char)4);
    var_23 = ((/* implicit */int) var_14);
}
