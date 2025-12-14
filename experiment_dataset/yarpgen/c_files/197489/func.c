/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197489
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-101)) ? (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) : (((/* implicit */unsigned long long int) (-(arr_5 [i_0] [i_0] [i_2]))))))) ? (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_2 [i_1]))))) ? ((+(18446744073709551614ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (var_4)));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (min((var_8), (((/* implicit */int) var_6)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_6))))))) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                    arr_8 [(short)12] [1ULL] [(unsigned short)4] [i_2] = ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
    var_15 = ((/* implicit */long long int) ((_Bool) var_1));
}
