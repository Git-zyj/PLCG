/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248980
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_4))));
    var_14 = ((/* implicit */unsigned char) 1045962091247791339LL);
    var_15 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned char)2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_16 -= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_12)))) ? (arr_4 [i_0] [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))))));
                var_17 = (+(((/* implicit */int) arr_5 [i_0])));
                var_18 += ((/* implicit */signed char) ((max((120730392), (((/* implicit */int) (unsigned char)1)))) != (((/* implicit */int) arr_2 [i_0]))));
            }
        } 
    } 
}
