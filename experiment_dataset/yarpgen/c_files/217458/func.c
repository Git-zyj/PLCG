/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217458
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) var_3)) < (-2007326298))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) ((arr_1 [i_0]) + (((/* implicit */unsigned int) 2007326314))))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_0]), (((/* implicit */int) var_9))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (arr_2 [i_0] [i_0])))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) -2007326319))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1696879321999983651ULL))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_15);
    var_22 -= ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))));
}
