/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39759
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
    var_19 *= ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */signed char) var_7))));
    var_20 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) 9223372036854775807LL)))));
    var_21 = ((/* implicit */short) max((15032385536LL), (((/* implicit */long long int) max((((/* implicit */int) max((var_1), (var_1)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)24710)))))))));
    var_22 = ((/* implicit */int) min((var_13), (((/* implicit */unsigned long long int) ((((var_7) || (((/* implicit */_Bool) (signed char)-122)))) ? (((/* implicit */int) (unsigned char)0)) : ((+(((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_2 [(short)1]))))), (max((((/* implicit */short) var_2)), (arr_3 [i_0] [i_0] [i_1]))))))));
                var_24 ^= ((/* implicit */long long int) (unsigned short)65535);
            }
        } 
    } 
}
