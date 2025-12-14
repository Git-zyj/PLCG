/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33412
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1948))));
                arr_9 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned char) 1526745900861295714LL))) ? (((/* implicit */int) ((unsigned char) ((long long int) var_11)))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))) > (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */int) var_13))))))));
                arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)251)) : (2147483641)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) 495822366)) ? (722253152844542005LL) : (((/* implicit */long long int) 2147483637)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) 0)) ? (-8) : (-2058770692))))))));
}
