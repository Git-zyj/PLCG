/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208739
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */unsigned short) (unsigned char)102);
                arr_5 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)21279)));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)62), (((/* implicit */unsigned char) ((2380928294U) > (1914039023U))))))) ? ((+(arr_0 [i_1] [(unsigned char)8]))) : (((/* implicit */int) var_8)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) (!(var_0)));
}
