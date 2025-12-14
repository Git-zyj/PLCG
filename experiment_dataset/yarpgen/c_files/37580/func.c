/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37580
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
    var_10 = ((/* implicit */short) max((var_10), (var_6)));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 1]);
                    arr_9 [i_1] [(unsigned short)8] = ((/* implicit */int) ((((/* implicit */_Bool) 1102850782U)) ? ((~(3192116513U))) : ((((+(3192116513U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1102850782U)) && (((/* implicit */_Bool) (unsigned short)65520))))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) || ((!(((/* implicit */_Bool) var_4))))));
}
