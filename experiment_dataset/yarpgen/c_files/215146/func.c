/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215146
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) min((var_7), (((/* implicit */signed char) arr_0 [i_0])))))))))));
                arr_7 [i_0] [(_Bool)1] [i_1] &= ((/* implicit */signed char) ((939524096U) >> (((arr_2 [i_0] [i_1]) + (1612324811692366995LL)))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1]);
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) arr_1 [(signed char)4] [(unsigned short)2]))), (((((/* implicit */int) arr_1 [2U] [i_1])) | (((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_4))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_4))));
}
