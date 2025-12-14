/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223036
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [(short)8] [i_1] [i_0] = ((/* implicit */_Bool) var_16);
                arr_6 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5245))) : (((long long int) var_1)))));
            }
        } 
    } 
}
