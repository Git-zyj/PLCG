/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208537
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
    var_19 = (unsigned short)65535;
    var_20 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (max((((/* implicit */unsigned int) (short)32757)), (max((var_8), (((/* implicit */unsigned int) (unsigned short)65526))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_6), (((/* implicit */long long int) ((unsigned int) (+(var_2)))))));
                var_22 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4))) : (((/* implicit */long long int) (-2147483647 - 1)))))));
                var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)32749)), ((unsigned short)1008)));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((signed char) 63ULL));
}
