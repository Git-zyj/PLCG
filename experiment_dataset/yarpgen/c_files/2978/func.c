/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2978
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0 + 2] [i_0] = (_Bool)0;
                    var_16 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0 - 3] [i_0 - 3])) >> (((((/* implicit */int) (signed char)-39)) + (47)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_0] [i_0 - 3] [i_0 - 3])) + (2147483647))) >> (((((/* implicit */int) (signed char)-39)) + (47))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), ((~(((/* implicit */int) var_11))))));
    var_18 = ((/* implicit */unsigned long long int) var_10);
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
}
