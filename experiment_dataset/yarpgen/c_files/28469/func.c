/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28469
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
    for (short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = (((_Bool)0) || (((/* implicit */_Bool) (+(((((/* implicit */int) var_15)) % (((/* implicit */int) var_8))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-24527)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)2047)))) : (min((((/* implicit */unsigned int) ((_Bool) var_9))), (arr_3 [(_Bool)1] [i_0 - 3] [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_16);
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
    var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)24554))))));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_4))));
}
