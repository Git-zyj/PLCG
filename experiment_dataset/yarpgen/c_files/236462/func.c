/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236462
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
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) 3732793263U)) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 3336755563755622782ULL)) ? (arr_1 [(unsigned short)5]) : (((/* implicit */unsigned long long int) 2833975902709176872LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 16108090223771558298ULL))))))));
                arr_4 [i_0] = ((/* implicit */_Bool) (+(arr_3 [(short)8] [i_0])));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_3 [i_0] [i_1]) | (((/* implicit */unsigned long long int) (~(min((-2833975902709176890LL), (((/* implicit */long long int) (short)32752)))))))));
            }
        } 
    } 
}
