/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28978
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
    var_13 = ((/* implicit */unsigned int) (short)11891);
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) (signed char)78);
                    var_16 = min((((/* implicit */int) var_11)), (min((((/* implicit */int) arr_1 [i_1])), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_1 [i_0])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_3);
}
