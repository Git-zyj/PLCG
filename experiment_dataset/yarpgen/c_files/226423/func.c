/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226423
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
    var_11 = var_6;
    var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
    var_13 = ((/* implicit */unsigned short) var_9);
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_5)) - ((-(((/* implicit */int) (unsigned short)10821)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) var_4)) : (var_10)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (unsigned short)7522)) : (((/* implicit */int) var_6)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */signed char) max(((unsigned short)7526), (((/* implicit */unsigned short) (signed char)98))));
                arr_5 [i_0] = arr_2 [(unsigned short)8] [i_1] [i_0];
            }
        } 
    } 
}
