/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197950
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                var_21 = ((/* implicit */int) var_1);
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (signed char)6))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65528))));
            }
        } 
    } 
    var_23 += ((/* implicit */short) ((var_3) ? ((+(((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528)))));
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) -4096))));
}
