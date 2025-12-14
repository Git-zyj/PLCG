/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22233
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((var_13), (((unsigned int) ((((/* implicit */_Bool) 908101711U)) ? (2147483647) : (-1416643613)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0]) << (((max((((/* implicit */unsigned int) arr_2 [i_1])), (arr_1 [i_0]))) - (2304430358U)))))) ? ((((~(var_10))) ^ (((/* implicit */unsigned int) ((int) var_11))))) : (((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned int) 38030141)), (var_15)))))));
                }
            } 
        } 
    } 
    var_22 = var_4;
}
