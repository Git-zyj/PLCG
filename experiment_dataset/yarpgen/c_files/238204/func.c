/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238204
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [5] [i_2] = ((/* implicit */short) (unsigned char)100);
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) : (var_16))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((max((var_13), (((/* implicit */unsigned char) var_6)))), ((unsigned char)3))))) : (((unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (var_7))))));
}
