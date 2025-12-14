/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52675
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
        for (int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_1] |= ((/* implicit */_Bool) var_9);
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_1 + 1])), (arr_5 [i_2 - 2]))))));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */unsigned int) max((var_3), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((((/* implicit */int) (_Bool)1)) - (2147483646))))))));
    var_14 = max((((((((/* implicit */int) var_9)) / (((/* implicit */int) var_2)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), (((max((var_4), (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_9)))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */signed char) (_Bool)1)), (var_1))))) ? (((/* implicit */long long int) max((((var_10) - (((/* implicit */int) var_12)))), (((/* implicit */int) max(((unsigned short)17053), (((/* implicit */unsigned short) var_1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (var_5)))) ? (var_3) : (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
}
