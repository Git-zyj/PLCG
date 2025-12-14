/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227610
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
    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20123)) ? (((/* implicit */int) (signed char)-23)) : (var_5)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_3 [i_1] [i_1]))));
                    var_22 = ((((/* implicit */_Bool) ((short) arr_1 [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_2]))) : (((long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_5) : (((/* implicit */int) var_2))))));
                    arr_9 [i_1] = ((/* implicit */_Bool) var_13);
                    var_23 = ((/* implicit */int) max((var_23), ((~(((/* implicit */int) ((short) (~(((/* implicit */int) var_17))))))))));
                }
            } 
        } 
    } 
}
