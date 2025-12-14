/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23335
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
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 - 3] [i_2])), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) var_2)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_0] [i_0])))) ? (arr_0 [(unsigned short)5] [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2]))))))) : ((+(min((var_1), (arr_0 [3U] [i_0])))))));
                    var_13 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)244)), (3878950924U)));
                    var_14 = ((/* implicit */int) arr_6 [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_15 = ((unsigned char) ((var_3) ? (((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))));
    var_16 += ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
    var_17 &= ((/* implicit */int) (+(max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_7)))))))));
}
