/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23239
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_8))));
    var_21 = ((/* implicit */short) (-(((/* implicit */int) (short)15165))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1000351442)) ? ((+((-(((/* implicit */int) (short)-15166)))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */int) (+((-(((long long int) -1778534777))))));
                    var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-1778534777) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1000351432)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)0))))) : (arr_6 [i_0] [i_1 - 2] [i_2 - 3]))), (((/* implicit */unsigned int) (_Bool)1))));
                }
            } 
        } 
    } 
}
