/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196159
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((993423608) >= (993423608)))) & (((/* implicit */int) arr_1 [i_0] [i_2]))));
                    var_11 += ((/* implicit */unsigned short) var_2);
                }
            } 
        } 
    } 
    var_12 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) -993423608)), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_1))))) : (max((((/* implicit */long long int) 0)), (var_10)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
}
