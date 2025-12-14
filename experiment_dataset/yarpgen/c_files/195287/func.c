/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195287
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) min((1425426465U), (32767U))))))), (var_2)));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_8))))), (min((var_11), (((/* implicit */unsigned long long int) 8820821067239146LL)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [(short)7]) << (((arr_1 [14LL]) - (11725502354767610835ULL)))))) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) arr_7 [i_0] [i_1] [(short)15])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_13);
}
