/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46896
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
    var_17 &= ((/* implicit */long long int) max((max((1042443669), (((int) var_10)))), (((int) ((((/* implicit */unsigned int) -959985124)) ^ (769309203U))))));
    var_18 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) var_16);
                var_20 = ((/* implicit */int) 3525658092U);
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_3 [i_0] [i_1] [i_0]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) 769309174U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2544515584U))) : (((/* implicit */unsigned int) ((int) 3525658108U))))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1750451695U)))) / (arr_3 [i_1] [i_1] [i_0]))))));
            }
        } 
    } 
}
