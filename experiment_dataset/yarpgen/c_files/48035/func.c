/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48035
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3366)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))) : (4294967295U)))) ? (1153118361U) : (((/* implicit */unsigned int) var_13)))))));
    var_21 |= (unsigned char)119;
    var_22 = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) 3203140212U)) ? (((/* implicit */unsigned int) var_4)) : (0U)))))));
    var_23 = ((/* implicit */unsigned short) (~((+(var_12)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */int) (~(var_6)));
                arr_5 [i_0] = ((/* implicit */unsigned char) var_16);
            }
        } 
    } 
}
