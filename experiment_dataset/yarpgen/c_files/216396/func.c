/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216396
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 -= ((/* implicit */long long int) ((((/* implicit */int) (!(arr_3 [i_1 + 1] [i_1])))) != (((/* implicit */int) ((_Bool) (-(-1839640301)))))));
                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((unsigned char) arr_6 [i_1] [i_1] [i_1]))), (max((((/* implicit */unsigned short) arr_1 [i_1])), (var_5))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_12);
    var_16 = max((((/* implicit */unsigned int) var_5)), (max((max((((/* implicit */unsigned int) var_2)), (var_1))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))));
}
