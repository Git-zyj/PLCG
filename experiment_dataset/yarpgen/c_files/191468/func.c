/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191468
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_1 + 3] [i_1 - 1]);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (min((var_0), (var_0))) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) min(((short)-27149), (((/* implicit */short) (_Bool)0))))))))));
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))))), ((-(((((/* implicit */int) var_4)) - (var_10)))))));
}
