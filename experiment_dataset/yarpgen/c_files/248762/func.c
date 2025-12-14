/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248762
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))) : (((/* implicit */int) min((var_14), (((/* implicit */short) var_2)))))));
                var_16 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */int) ((((/* implicit */int) (unsigned char)168)) <= (((/* implicit */int) (signed char)69))))), (var_3))) : (((((/* implicit */_Bool) min(((unsigned short)11084), (((/* implicit */unsigned short) (unsigned char)40))))) ? (((((/* implicit */int) (unsigned short)6557)) | (((/* implicit */int) (unsigned char)82)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)7)), (var_13))))))));
}
