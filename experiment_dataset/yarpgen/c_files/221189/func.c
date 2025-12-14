/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221189
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_15)))));
                arr_5 [(_Bool)1] [i_1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 186118535U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */int) (short)-15876)) + (2147483647))) << (((var_8) - (642575855U))))) : (((int) var_5))))) : (var_11)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_17);
}
