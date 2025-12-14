/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239618
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] = arr_4 [i_1] [i_1] [i_0];
                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [(unsigned short)3] [i_1])) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (((var_1) >> (((arr_0 [i_1]) - (14386155033434214760ULL))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31080)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [i_1])))))))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(var_4)))), (min((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_0]))))))));
            }
        } 
    } 
    var_20 = (unsigned char)106;
}
