/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213864
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_15))));
                    var_21 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0U)), (((((/* implicit */_Bool) var_6)) ? (12000930422282273686ULL) : (var_14)))))) ? (arr_8 [i_0] [i_0] [i_2]) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) - (((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (12000930422282273711ULL))))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (_Bool)0);
}
