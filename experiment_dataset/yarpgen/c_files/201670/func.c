/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201670
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
    var_13 *= ((/* implicit */signed char) ((((/* implicit */int) var_11)) * (max(((-2147483647 - 1)), ((+(((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */_Bool) arr_0 [i_1] [(unsigned short)6])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19811))))));
                var_15 -= ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5968483120327832033LL)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_4))))))));
                var_16 = ((/* implicit */int) (_Bool)0);
                var_17 = ((/* implicit */unsigned char) ((min((((/* implicit */int) (signed char)-43)), (-878833611))) - (((/* implicit */int) (signed char)16))));
            }
        } 
    } 
}
