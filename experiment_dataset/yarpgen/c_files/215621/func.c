/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215621
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
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)126))) || (((((/* implicit */unsigned int) ((/* implicit */int) (short)-23416))) < (arr_1 [i_0])))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */long long int) (~(min((var_7), (((/* implicit */unsigned int) (_Bool)0))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) var_0)))));
    var_17 = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned short)56067)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_0))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))))));
}
