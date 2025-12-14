/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42055
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
    var_16 += ((/* implicit */short) (signed char)6);
    var_17 = var_12;
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (var_14)));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((arr_2 [(short)2] [i_2]) ^ (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned long long int) (signed char)-1)), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [9])), (arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (signed char)6))))))));
                    var_20 = ((/* implicit */_Bool) arr_2 [i_1] [i_1]);
                }
            } 
        } 
    } 
}
