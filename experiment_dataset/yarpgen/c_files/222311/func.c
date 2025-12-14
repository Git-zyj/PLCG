/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222311
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) arr_6 [i_1]);
                    var_16 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_6 [i_2])) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2 - 1] [i_1] [i_0 + 2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (13750544186546655826ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [(short)7])))))))));
                }
            } 
        } 
    } 
    var_17 = (!(((/* implicit */_Bool) ((((13750544186546655826ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)13384))))) : (var_9)))));
}
