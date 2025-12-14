/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212222
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) min((var_1), (((/* implicit */short) (_Bool)0))))), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)88)))));
    var_12 = ((/* implicit */short) (~((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) min((max((2871163550824489490LL), (((/* implicit */long long int) (unsigned char)13)))), (((/* implicit */long long int) (short)20068))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 14741079608953015393ULL)) ? (((/* implicit */long long int) (~(min((var_5), (((/* implicit */int) (short)-17311))))))) : (max((-1LL), (((/* implicit */long long int) (short)-795))))));
            }
        } 
    } 
}
