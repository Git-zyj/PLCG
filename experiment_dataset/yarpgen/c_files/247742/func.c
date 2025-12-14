/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247742
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) ((signed char) (~(((/* implicit */int) (unsigned short)0)))));
                var_10 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) | (var_6))) : (((/* implicit */unsigned long long int) (~(var_5)))))))));
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
                var_12 = ((/* implicit */unsigned char) (signed char)112);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_2);
    var_14 = ((/* implicit */signed char) var_5);
}
