/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242514
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
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-22))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 1657507537)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) - (((((/* implicit */long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) (short)32754))))))) * (((long long int) var_8))))));
    var_13 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */int) (unsigned char)185)), (arr_2 [i_0] [i_0] [(_Bool)1])))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (short)-32741);
                arr_6 [i_0] [i_0] = (((~((~(var_11))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max(((unsigned char)59), (((/* implicit */unsigned char) var_7))))))));
            }
        } 
    } 
}
