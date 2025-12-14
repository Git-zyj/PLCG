/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51687
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
    var_18 &= ((/* implicit */unsigned int) var_5);
    var_19 &= ((/* implicit */unsigned int) var_5);
    var_20 = ((/* implicit */unsigned short) var_4);
    var_21 ^= ((/* implicit */unsigned long long int) (~(4294967291U)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_2))));
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-31682)))))));
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)106)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32805)))));
            }
        } 
    } 
}
