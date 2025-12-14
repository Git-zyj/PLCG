/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194406
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] = arr_1 [i_1] [i_1];
                    var_19 = var_16;
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)0))))))));
    var_21 = ((/* implicit */short) ((0LL) == (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) ((var_7) || (((/* implicit */_Bool) var_15))))) != (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12)))))))));
}
