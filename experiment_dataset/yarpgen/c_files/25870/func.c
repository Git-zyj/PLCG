/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25870
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) max(((unsigned short)32413), (((/* implicit */unsigned short) (signed char)-103))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32434)) ? (16727849903910017254ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5743))) == (1988810837803317931ULL)))))));
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)2] [i_0])))))) ? (max((((/* implicit */unsigned long long int) var_4)), (12805720471970146632ULL))) : (12805720471970146621ULL))) >> (((/* implicit */int) arr_2 [i_0] [i_1]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_9);
    var_15 += ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)102)) ? (var_5) : (((/* implicit */unsigned long long int) var_3))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
}
