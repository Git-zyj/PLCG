/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218269
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_7))));
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (arr_0 [i_2] [i_1]) : (arr_2 [19])))) ? (((/* implicit */unsigned int) ((arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 1]) & (arr_6 [i_2] [i_2 + 1] [i_2])))) : (1566605928U)));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((signed char) (~(arr_0 [i_0] [i_0])))))));
                    var_16 = ((/* implicit */unsigned int) arr_6 [(signed char)2] [i_1] [i_1]);
                }
            } 
        } 
    } 
}
