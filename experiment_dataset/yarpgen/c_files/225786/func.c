/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225786
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
    var_18 -= ((/* implicit */unsigned char) (-(var_11)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [(_Bool)1] = ((/* implicit */unsigned long long int) (short)-14369);
                arr_6 [i_0] = ((/* implicit */_Bool) arr_0 [13U] [13U]);
                var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)4] [(unsigned short)4])) ? (((/* implicit */int) max((min(((unsigned char)228), (((/* implicit */unsigned char) var_6)))), (((/* implicit */unsigned char) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) : (((/* implicit */int) ((signed char) var_14)))));
            }
        } 
    } 
}
