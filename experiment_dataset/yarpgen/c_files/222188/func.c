/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222188
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
    var_18 = ((/* implicit */unsigned short) var_11);
    var_19 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */short) min((((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((arr_4 [i_0] [i_1]) % (arr_4 [8U] [8U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))))))))));
                arr_5 [i_0] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) * (((((int) arr_3 [i_0] [18ULL] [i_0])) * (((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0]))))))));
                var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_1]) >= (((/* implicit */int) arr_1 [i_1] [i_0])))))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61750))) % (2371725356125968359LL)))));
                arr_6 [(short)19] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((short) (~(1400764225U)))));
            }
        } 
    } 
}
