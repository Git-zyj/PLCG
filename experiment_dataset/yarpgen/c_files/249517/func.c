/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249517
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
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) var_12)), (var_0))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (var_15))), (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (short)732)) : (((/* implicit */int) var_11)))))) <= (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) min((var_0), (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))));
                    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 + 3])) || (((/* implicit */_Bool) arr_1 [i_0 + 3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) && (((/* implicit */_Bool) arr_1 [i_0 + 3]))))) : ((+(arr_1 [i_0 + 3])))));
                    var_18 = ((/* implicit */unsigned long long int) var_14);
                    arr_10 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1])) << (((((var_5) + (1888629767537215877LL))) - (12LL))))), ((+(((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
}
