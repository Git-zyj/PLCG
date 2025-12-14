/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241426
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
    var_12 = ((/* implicit */signed char) 2147483647);
    var_13 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-30446)))), (((((/* implicit */_Bool) (short)-21847)) && (((/* implicit */_Bool) (short)-12997))))))), (((((((/* implicit */int) var_8)) != (-1))) ? (((((/* implicit */_Bool) var_0)) ? (1686329127U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) var_9);
                    var_15 *= ((/* implicit */int) ((max(((-(((/* implicit */int) arr_0 [i_0] [i_2])))), (((/* implicit */int) var_2)))) <= ((~(((/* implicit */int) ((((/* implicit */int) var_1)) != (-300302996))))))));
                }
            } 
        } 
    } 
}
