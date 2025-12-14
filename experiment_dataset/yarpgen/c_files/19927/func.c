/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19927
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
    var_20 += max((((((/* implicit */_Bool) var_3)) ? (max((var_8), (((/* implicit */long long int) (signed char)-1)))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned char)8))))))), (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)65523), ((unsigned short)14)))) << (((((/* implicit */int) var_13)) - (58)))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) max((min((arr_5 [i_1]), (arr_5 [i_1]))), (((unsigned short) 16762911996239020890ULL))));
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
            }
        } 
    } 
    var_24 = min((((/* implicit */unsigned long long int) (unsigned short)65523)), (max((var_14), (((/* implicit */unsigned long long int) var_9)))));
}
