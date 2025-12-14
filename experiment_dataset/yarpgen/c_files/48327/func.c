/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48327
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */long long int) max(((~(arr_1 [i_1]))), (((/* implicit */unsigned int) arr_4 [i_1]))))) ^ (((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) 16777215)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_12 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_2);
}
