/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230860
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
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [(_Bool)1] [i_1]);
                var_11 &= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0 - 1]))) ? (max(((+(arr_5 [i_0] [5U] [(short)2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-20909)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) min((max((1829280477U), (var_3))), (((/* implicit */unsigned int) var_5)))))));
                var_12 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_1 [(short)8]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_7);
}
