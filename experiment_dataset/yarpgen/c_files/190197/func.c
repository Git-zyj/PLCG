/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190197
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_3))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */signed char) max((min((arr_7 [i_0] [i_1] [i_2]), (arr_7 [i_0] [i_1] [i_2]))), (((/* implicit */long long int) var_12))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((var_3) ? (((((((/* implicit */_Bool) -4116328811967060695LL)) || (var_9))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-30)) && (((/* implicit */_Bool) (signed char)4))))) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-127))));
                }
            } 
        } 
    } 
}
