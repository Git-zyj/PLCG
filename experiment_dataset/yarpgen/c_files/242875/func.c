/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242875
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (!(((((var_3) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) == (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) var_1)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6975)) - (arr_2 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)58561)))))) : (min((((/* implicit */unsigned int) var_4)), (var_0)))));
                var_12 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
