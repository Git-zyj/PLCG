/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216676
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
    var_16 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) min(((unsigned short)62407), (((/* implicit */unsigned short) (signed char)-62)))))), (1092442310110298827ULL)));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) var_4)), ((+(((/* implicit */int) (signed char)62))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65510))))) ^ (var_14)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */_Bool) arr_5 [(unsigned char)18]);
                var_20 = ((unsigned int) (signed char)62);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_6 [i_0] [i_1]);
                var_21 = ((/* implicit */long long int) var_3);
            }
        } 
    } 
}
