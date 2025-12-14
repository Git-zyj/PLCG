/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232679
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
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_0)) ? (min((var_3), (((/* implicit */long long int) var_2)))) : (((((/* implicit */long long int) var_10)) % (var_3)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_14 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [(signed char)15])), (var_3)))) ? (((/* implicit */unsigned long long int) ((arr_2 [4U]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [(unsigned char)7])))))) : (arr_7 [i_1 + 3] [i_0 - 1]))))));
                    var_15 &= ((/* implicit */int) var_5);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (var_9)));
}
