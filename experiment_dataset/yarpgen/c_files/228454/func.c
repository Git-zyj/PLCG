/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228454
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) arr_5 [i_1 + 1] [14]);
                var_11 = ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) ((((/* implicit */_Bool) -1700950257)) || (((/* implicit */_Bool) (unsigned char)132))))))));
                arr_8 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0]))))) ? (((arr_5 [i_1] [i_0]) + (var_3))) : (((((/* implicit */_Bool) 1168772269)) ? (arr_2 [i_0] [i_0]) : (var_0))))) > ((~(arr_2 [i_0] [i_1])))));
                var_12 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((unsigned char) min(((unsigned char)25), (var_1))));
    var_14 = var_7;
}
