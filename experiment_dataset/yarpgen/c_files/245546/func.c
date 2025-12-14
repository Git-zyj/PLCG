/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245546
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_12), (var_6)))), (arr_2 [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? ((+(arr_3 [i_0] [i_0] [(unsigned short)7]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) > (var_3))))))) : (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)2402))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_0 [i_0])))))))));
                arr_6 [i_1] [i_0] [i_0] = max((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */short) arr_1 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [1ULL] [i_1] [i_0])))) % ((~(var_3))))));
                arr_7 [14] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_6);
    var_18 = ((/* implicit */unsigned int) var_1);
}
