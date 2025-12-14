/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36422
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))) - (136)))));
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-15272))) == (3087038420U)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_10);
                arr_6 [i_0] = ((/* implicit */short) ((max((((((/* implicit */_Bool) (short)62)) ? (2497478010U) : (0U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)9131)) && (((/* implicit */_Bool) arr_0 [i_0]))))))) ^ (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_9)))))))));
                var_15 -= 3087038424U;
            }
        } 
    } 
}
