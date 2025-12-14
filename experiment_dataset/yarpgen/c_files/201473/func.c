/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201473
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) arr_0 [i_1] [i_0 - 1]);
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (_Bool)1))));
                var_20 -= arr_4 [(signed char)9] [i_1 - 1] [i_0 + 2];
            }
        } 
    } 
    var_21 = var_15;
    var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */_Bool) var_14)) && (((((/* implicit */int) var_1)) < (((((/* implicit */int) (unsigned char)242)) << (((/* implicit */int) (unsigned char)12))))))))));
    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
}
