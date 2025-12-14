/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198569
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
                var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */int) arr_2 [8])) | (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15762677115049210094ULL)))))))) ? (((var_2) ? (((/* implicit */int) arr_5 [i_0])) : ((+(((/* implicit */int) arr_1 [i_0] [i_1])))))) : (((/* implicit */int) ((unsigned short) (unsigned short)4096)))));
            }
        } 
    } 
    var_12 += ((/* implicit */long long int) 2641437253U);
}
