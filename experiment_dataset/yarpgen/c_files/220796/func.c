/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220796
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (max((var_12), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))));
    var_16 = ((/* implicit */unsigned short) ((var_0) & (((/* implicit */unsigned long long int) var_9))));
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))) >= (((var_10) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (((long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max(((_Bool)1), ((!(arr_6 [i_0] [i_1] [20LL] [i_1])))));
                    arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))), (((unsigned short) var_12))))) : (var_11)));
                    arr_8 [i_0] [i_0] [i_0] = max((((((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_0] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) >> (((/* implicit */int) var_6)))), (arr_3 [i_1] [20LL]));
                }
            } 
        } 
    } 
}
