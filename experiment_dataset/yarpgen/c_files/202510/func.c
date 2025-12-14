/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202510
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (short)-128))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-128)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned short)17155)) : (((/* implicit */int) (unsigned short)21540)))) : ((-(((((/* implicit */_Bool) (signed char)-104)) ? (1629979540) : (((/* implicit */int) (_Bool)0))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)6144)) : (((/* implicit */int) (signed char)60))));
            }
        } 
    } 
}
