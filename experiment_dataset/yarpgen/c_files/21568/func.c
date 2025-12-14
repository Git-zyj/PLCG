/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21568
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
    var_17 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-88)))) ? (min((var_0), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)252))))))), (min((max((9223372036854775785LL), (9223372036854775785LL))), (((/* implicit */long long int) var_10))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) ((((arr_4 [i_0] [i_0] [i_0]) == (arr_4 [i_0] [i_0] [i_0]))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-9223372036854775785LL))) : (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_0]))));
                arr_5 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) (signed char)96))))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) - (-7305514950608531774LL)))));
                var_20 = ((/* implicit */long long int) (~(arr_3 [i_0] [i_1] [i_1])));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (signed char)-124);
}
