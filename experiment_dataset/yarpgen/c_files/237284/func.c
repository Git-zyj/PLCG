/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237284
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
    var_15 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) min((var_7), (((/* implicit */signed char) var_9))))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((long long int) ((int) ((((/* implicit */_Bool) (unsigned char)242)) ? (281337537757184LL) : (((/* implicit */long long int) var_12)))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) (~(max((-8471076848050199960LL), (((/* implicit */long long int) max((var_12), (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                var_16 ^= ((/* implicit */unsigned int) (~(max((((/* implicit */int) (!((_Bool)1)))), (arr_1 [(short)6])))));
            }
        } 
    } 
}
