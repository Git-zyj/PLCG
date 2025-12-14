/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217325
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */long long int) ((int) var_17))), (var_8))) : (((/* implicit */long long int) 503316480U))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 1] [i_1] = var_10;
                var_19 = ((/* implicit */signed char) (short)11);
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (min((var_2), (var_7)))));
    var_21 = ((/* implicit */unsigned long long int) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)31), (((/* implicit */unsigned char) var_5))))))));
}
