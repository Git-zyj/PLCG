/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243657
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
    var_14 = ((/* implicit */unsigned int) var_9);
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_8)) ? (((int) (_Bool)1)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_6)));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 &= ((/* implicit */signed char) 2785471654470084219ULL);
                    var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)60)) ? (2013265920U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) min((((/* implicit */int) max((var_5), (((/* implicit */short) (_Bool)1))))), ((-(((/* implicit */int) var_0))))))) : (((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
}
