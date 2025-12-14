/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4905
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
    var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (min((((/* implicit */int) (unsigned char)30)), (1092812334)))))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((4362810194605653525LL), (((/* implicit */long long int) 1092812334))))) ? (((((/* implicit */int) (unsigned short)2)) + (1092812338))) : (var_8))))))));
    var_18 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1092812335)) * (((((/* implicit */_Bool) (((_Bool)1) ? (-1092812317) : (((/* implicit */int) var_7))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -1092812317))))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (1092812317)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_14)), (1092812318)))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((arr_1 [18]), (((/* implicit */unsigned short) arr_4 [i_0 + 1])))))));
                var_21 = ((/* implicit */long long int) ((1092812311) + (((/* implicit */int) max((var_9), (((/* implicit */short) arr_0 [i_1 + 1])))))));
                arr_5 [i_0] [i_1 - 2] [13] = ((/* implicit */unsigned char) var_14);
            }
        } 
    } 
}
