/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27887
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [4] [i_2] [13LL] = arr_1 [i_0];
                    var_17 += ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned short)34787)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (arr_3 [i_2]))) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (var_8))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0]))) : (((((/* implicit */long long int) arr_1 [i_0])) / (var_1)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-(((long long int) ((((/* implicit */int) var_8)) & (var_11))))));
    var_19 = ((/* implicit */unsigned int) (-((~(((((/* implicit */int) var_4)) * (((/* implicit */int) var_10))))))));
}
