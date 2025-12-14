/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219599
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
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                var_13 = ((/* implicit */unsigned int) (~(min((arr_2 [i_1 + 1] [i_1 + 1] [i_1]), (arr_2 [i_1] [i_1] [i_1 + 1])))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (4999168688628621187LL)));
            }
        } 
    } 
    var_14 += ((/* implicit */signed char) var_12);
    var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */long long int) var_11)) : (-4999168688628621190LL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3))))))), (((/* implicit */int) var_7))));
}
