/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195551
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((min((arr_3 [i_0]), (arr_3 [i_0]))) - (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (var_17)))) ? (((arr_0 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-30884))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-4211)) + (2147483647))) << (((var_15) - (4208162115U)))))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : ((-(min((((/* implicit */unsigned long long int) (unsigned short)0)), (13036745914371783647ULL)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((long long int) var_15));
}
