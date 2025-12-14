/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229797
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_1))))))) / (((((/* implicit */_Bool) ((unsigned short) var_13))) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_6)))))))));
    var_18 = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) (signed char)-75)) ? (5359306840786229737LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)29962)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                    arr_11 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((int) (unsigned short)9814))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_2]))))) : (max((var_0), (((/* implicit */long long int) var_9))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_7);
}
