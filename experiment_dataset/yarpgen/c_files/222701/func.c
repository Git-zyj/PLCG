/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222701
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
    var_11 = ((/* implicit */short) (signed char)-73);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (arr_1 [i_2 - 2]) : (arr_1 [i_2 + 1]))), (((((/* implicit */int) arr_6 [i_2 - 1])) >> (((arr_8 [i_1 + 1] [i_1 - 1] [i_1] [i_1]) + (6928689963926077650LL)))))));
                    arr_9 [i_0] [i_1 - 2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_6 [i_1 - 2])) * (((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_6);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (1308525841346819322LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)72)))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) min((-752400630411502643LL), (((/* implicit */long long int) (signed char)-73))))))))));
}
