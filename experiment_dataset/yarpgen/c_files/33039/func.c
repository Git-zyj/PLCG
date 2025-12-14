/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33039
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
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = (-(((/* implicit */int) ((((/* implicit */_Bool) (+(var_10)))) && (var_6)))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((((/* implicit */signed char) (((!(((/* implicit */_Bool) 1633542471)))) && (((/* implicit */_Bool) (signed char)12))))), ((signed char)-13))))));
                var_14 = var_5;
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 3] [i_0])) <= (((((((/* implicit */int) arr_2 [i_0 + 1])) + (2147483647))) << ((((((~(((/* implicit */int) arr_3 [i_0] [(signed char)12])))) + (16930))) - (2)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_11);
}
